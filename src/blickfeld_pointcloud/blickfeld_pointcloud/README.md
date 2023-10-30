Lidar host IP : 192.168.26.26
Ethernet IP : 192.168.26.1


LiDAR 프레임 변경(lidar -> base_link)
ros2 run tf2_ros static_transform_publisher 0.0 0.0 0.0 0.0 0.0 0.0 1.0 base_link lidar

- 이더넷을 이용한 직접 연결

모든 포인트 보이게 실행
ros2 run blickfeld_driver blickfeld_driver_node --ros-args -p host:=192.168.26.26 --remap __node:=bf_lidar -p publish_no_return_points:=true

측정 범위 이내의 포인트 보이게 실행
ros2 run blickfeld_driver blickfeld_driver_node --ros-args -p host:=192.168.26.26 --remap __node:=bf_lidar