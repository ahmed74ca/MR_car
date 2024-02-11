import rclpy
from my_own_srv.srv import AddTwoInts
from std_msgs.msg import Int64

def call_back(request , response):
    response.sum = request.a + request.b
    print(f"the request is to add: {request.a} , {request.b}")
    print("The sum of Two ints is %s" %str(response.sum))
    return response


def main(args = None):
    global node
    rclpy.init(args=args)
    node = rclpy.create_node("server")
    server = node.create_service(AddTwoInts,"service_name",call_back)
    while rclpy.ok():
        rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
