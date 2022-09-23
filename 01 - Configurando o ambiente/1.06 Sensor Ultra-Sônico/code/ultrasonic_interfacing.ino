#include <ros.h>
#include <std_msgs/Empty.h>
#include <std_msgs/Int16.h>

ros::NodeHandle  nh;

std_msgs::Int16 ultrasonic_msg
ros::Publisher ultrasonic_node("ultrasonic_values", &ultrasonic_msg );

// defines pins numbers
const int trigPin = 2;
const int echoPin = 4;
// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  nh.initNode();
  nh.advertise(ultrasonic_node);
}

void loop() {
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  ultrasonic_msg.data = distance;
  ultrasonic_node.publish(&ultrasonic_msg);
  nh.spinOnce();
  delay(1);
}