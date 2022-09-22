# RosSerial Package:

## Instale o [**rosserial_arduino**](http://wiki.ros.org/rosserial_arduino/Tutorials/Arduino%20IDE%20Setup):

* Instale o rosserial no workstation do ROS:
```
$ sudo apt-get install ros-noetic-rosserial-arduino
$ sudo apt-get install ros-noetic-rosserial
```

* Acrescente a biblioteca ros_lib nos arquivos do Arduino IDE:

Na pasta do Arduino IDE procure por  **libraries/** e dentro dessa pasta instale o **ros_lib**:

```
$ cd <sketchbook>/libraries
$ rm -rf ros_lib
$ rosrun rosserial_arduino make_libraries.py .
```
