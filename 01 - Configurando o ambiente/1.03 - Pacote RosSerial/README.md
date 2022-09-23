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
Reinicie seu Arduino IDE e veja se a biblioteca se encontra neste local:

![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.03%20-%20Pacote%20RosSerial/img/ros_lib.PNG)

## Testando a biblioteca:

* No Arduino IDE, abra o exemplo **Blink** dentro da biblioteca do ros_lib.

* Carregue o código para a ESP32.

* Execute o node:
```
$ rosrun rosserial_arduino serial_node.py
```
OBS: Lembre-se de estar com o **roscore** executando.

* Após executar o node você verá que o terminal está imprimindo constantemente mensagens de erro como nesta imagem:

![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.03%20-%20Pacote%20RosSerial/img/ros_lib%20bug.PNG)

Esse problema é causado porque a ESP32 está reiniciando sem parar. Para resolvermos esse problema teremos que alterar alguns argumentos do **ros_lib**.

## Resolvendo Reboot do ESP32:

* Feche os processos que o terminal está executando do RosSerial.

* Vá dentro da pasta da biblioteca **ros_lib**, nela você encontrará o arquivo **ros.h**, é ele que nós temos que alterar.
Caminho do arquivo caso esteja esquecido: (~/Arduino/libraries/ros_lib/ros.h)

* Abra o arquivo e altere o seguinte código:
```
#if defined(ESP8266) or defined(ESP32) or defined(ROSSERIAL_ARDUINO_TCP)
  #include "ArduinoTcpHardware.h"
#else
  #include "ArduinoHardware.h"
#endif
```
deixando-o assim:
```
#if defined(ROSSERIAL_ARDUINO_TCP)
  #include "ArduinoTcpHardware.h"
#else
  #include "ArduinoHardware.h"
#endif
```

* Após isso, reinicie o Arduino IDE, carregue novamente o **Blink** e execute outra vez:
```
$ rosrun rosserial_arduino serial_node.py
```
Você verá algo parecido com isso: <br><br>
![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.03%20-%20Pacote%20RosSerial/img/rosrun%20rosserial_arduino.PNG)

<br><br>
---
  **[[Anterior]](https://github.com/LuisHBM/curso-piloto-MR01/tree/main/01%20-%20Configurando%20o%20ambiente/1.02%20-%20Criando%20um%20Workspace)** - Criando um Workspace         | **[[Próximo]](https://github.com/LuisHBM/curso-piloto-MR01/tree/main/01%20-%20Configurando%20o%20ambiente/1.04%20-%20ROS%20Publishing%20e%20Subscriber)** - ROS Publishing e Subscribing
