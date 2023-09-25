import numpy as np
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField
from std_msgs.msg import Header
import open3d as o3d

class PCPub(Node):

    def __init__(self):
        super().__init__('lidar_numpy')

        self.pointcloudSub = self.create_subscription(PointCloud2, '/bf_lidar/point_cloud_out', self.get_point_cloud, 10)

        self.pointcloudPub = self.create_publisher(PointCloud2, 'point_cloud_topic', 10)
        self.pointcloudTimer = self.create_timer(0.5, self.publish_point_cloud)

        # self.pointcloud = None
        self.pointDOWN = None

    def get_point_cloud(self, msg):
        try:
            pointcloud = self.point_cloud2_to_array(msg)
            pcd = o3d.geometry.PointCloud()
            pcd.points = o3d.utility.Vector3dVector(pointcloud)
            # downsampling
            pcd_down= pcd.voxel_down_sample(voxel_size=0.02)
            self.pointDOWN = np.asarray(pcd_down.points).astype(np.float32)

        except:
            pass


    def point_cloud2_to_array(self, msg):
        point_cloud = np.frombuffer(msg.data, dtype=np.float32)#.reshape(-1, msg.point_step // 3)[:, :3]
        point_cloud = point_cloud.reshape(-1, 3)
        return point_cloud

    def publish_point_cloud(self):
        # points = np.array([
        #     [0.1, 0.1, 0.0, 150, 10, 110],  # xyzRGB
        #     [0.2, 0.2, 0.0, 105, 255, 92],
        #     [0.3, 0.3, 0.0, 199, 214, 85]
        # ]).astype(np.float32)  # unordered, to publish the ordered, we must fill the blank element with data
        if self.pointDOWN is not None:

            msg = PointCloud2()

            msg.header = Header()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = 'base_link'

            msg.height = self.pointDOWN.shape[0]
            msg.width = 1  # self.pointDOWN.shape[1]

            byteSizePerPoint = self.pointDOWN[0, 0].itemsize #4
            numberOfInfoPerPoint = len(self.pointDOWN[0])  # xyz = 3, xyzrgb = 6

            msg.fields.append(PointField(name='x', offset=0 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
            msg.fields.append(PointField(name='y', offset=1 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
            msg.fields.append(PointField(name='z', offset=2 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
            # msg.fields.append(PointField(name='r', offset=3 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
            # msg.fields.append(PointField(name='g', offset=4 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
            # msg.fields.append(PointField(name='b', offset=5 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))

            msg.is_bigendian = False
            msg.point_step = byteSizePerPoint * numberOfInfoPerPoint
            msg.row_step = byteSizePerPoint * numberOfInfoPerPoint * self.pointDOWN.shape[0]
            msg.data = self.pointDOWN.tobytes()

            msg.is_dense = False

            self.pointcloudPub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    try:
        node = PCPub()
        executor = MultiThreadedExecutor()
        executor.add_node(node)
        try:
            executor.spin()
        finally:
            executor.shutdown()
            node.destroy_node()
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()