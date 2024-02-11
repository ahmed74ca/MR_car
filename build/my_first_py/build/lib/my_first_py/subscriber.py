import rclpy
from std_msgs.msg import String

node = None

def Call_back(msg):
	print("%s"%msg.data)
	

def main(args = None):
	
	rclpy.init(args = args)
	global node
	node = rclpy.create_node("subscriper")
	sub = node.create_subscription(String, "topic", Call_back, 10)
	def callback():
		print("here")
	timer = node.create_timer(5,callback)
#	while rclpy.ok():
	rclpy.spin(node)
	node.destroy_node()
	node.destroy_timer(timer)
	rclpy.shutdown()
	

if __name__ == '__main__':
	main()

