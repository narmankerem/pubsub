import rospy
from std_msgs.msg import String

def subscriber(data):
    sub = rospy.Subscriber('talker', String, subscriber)
    rospy.init_node('subscriber', anonymous=True)
    rospy.loginfo(rospy.get_caller_id() + "I heard %s", data.data)

if __name__ == '__main__':
    subscriber()





   

