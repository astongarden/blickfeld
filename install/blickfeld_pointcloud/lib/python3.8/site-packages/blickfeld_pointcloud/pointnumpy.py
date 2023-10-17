import numpy as np
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2, PointField
from std_msgs.msg import Header


class PCPub(Node):

    def __init__(self):
        super().__init__('lidar_numpy')

        self.pointcloudSub = self.create_subscription(PointCloud2, '/bf_lidar/point_cloud_out', self.get_point_cloud, 10)

        self.pointcloudPub = self.create_publisher(PointCloud2, 'point_cloud_topic', 10)
        self.pointcloudTimer = self.create_timer(0.05, self.publish_point_cloud)

        self.pointcloud = None

    def get_point_cloud(self, msg):
        try:
            self.pointcloud = self.point_cloud2_to_array(msg)
        except:
            pass

    def point_cloud2_to_array(self, msg):
        point_cloud = np.frombuffer(msg.data, dtype=np.float32)#.reshape(-1, msg.point_step // 3)[:, :3]
        # point_cloud = point_cloud.reshape(10136, -1)            # use all point(return_point + no_return_points)
        point_cloud = point_cloud.reshape(msg.width, -1)        # use just return point(not include no_return_points)

        return point_cloud

    def publish_point_cloud(self):
        # points = np.array([
        #     [0.1, 0.1, 0.0, 150, 10, 110],  # xyzRGB
        #     [0.2, 0.2, 0.0, 105, 255, 92],
        #     [0.3, 0.3, 0.0, 199, 214, 85]
        # ]).astype(np.float32)  # unordered, to publish the ordered, we must fill the blank element with data
        
        msg = PointCloud2()

        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.header.frame_id = 'base_link'

        msg.height = self.pointcloud.shape[0]
        msg.width = 1  # self.pointcloud.shape[1]

        byteSizePerPoint = self.pointcloud[0, 0].itemsize #4
        numberOfInfoPerPoint = len(self.pointcloud[0])  # xyz = 3, xyzrgb = 6

        msg.fields.append(PointField(name='x', offset=0 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
        msg.fields.append(PointField(name='y', offset=1 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
        msg.fields.append(PointField(name='z', offset=2 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
        # msg.fields.append(PointField(name='r', offset=3 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
        # msg.fields.append(PointField(name='g', offset=4 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))
        # msg.fields.append(PointField(name='b', offset=5 * byteSizePerPoint, datatype=PointField.FLOAT32, count=1))

        msg.is_bigendian = False
        msg.point_step = byteSizePerPoint * numberOfInfoPerPoint # 4*3=12
        msg.row_step = byteSizePerPoint * numberOfInfoPerPoint * self.pointcloud.shape[0] # 4*3*10136 = 121632
        msg.data = self.pointcloud.tobytes()


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