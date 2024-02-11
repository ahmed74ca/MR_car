import rclpy
from std_msgs.msg import String

def increment(val):
	val+=1
	return val

def main(args=None):
	rclpy.init(args=args)
	node = rclpy.create_node("Pub")
	pub = node.create_publisher(String,'topic',10)
	msg = String()
	i = 0
	def call_back_timer():
		nonlocal i
		msg.data = "hello world %d" % i
		i = increment(i)
		print(f"{msg.data}")
		#node.get_logger().info('Publishing: "%s"' %msg.data)
		pub.publish(msg)
	timer = node.create_timer(1, call_back_timer)
	rclpy.spin(node)
	node.destroy_timer(timer)
	node.destroy_node()
	rclpy.shutdown()


if __name__ == '__main__':
	main()
	
