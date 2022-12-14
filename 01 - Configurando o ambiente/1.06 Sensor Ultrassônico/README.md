# Trabalhando com o sensor ultrassônico

![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.06%20Sensor%20Ultrass%C3%B4nico/img/ultrasonic_sensor.png)

## Como funciona o HC-SR04:

* O **Trig** irá receber pulsos da Board, fazendo com que o sensor envie pulsos sonoros para verificar se háalgo em sua frente.
* O **Echo** irá receber essas informações e retornar para a Board.

## Como calculamos a distãncia através das informações recebidas pelo Echo?

![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.06%20Sensor%20Ultrass%C3%B4nico/img/ultrasom.webp)

Como você pode observar na imagem acima, o sinal sonoro que o **Echo** recebe é uma onda refletida. Quando ele recebe esse sinal, ele interpreta a distância completa que a onda sonora percorreu, ou seja, a ida e a volta, por isso para que se tenha a distância precisa entre o sensor e o obstáculo devemos dividir essa distância pela metade.

Exemplo abstrato:

```
dTotal = echoPinReturn;
distancia_real = dTotal / 2;
```
## Vendo na prática

* Crie uma pasta no diretório **esp_src** chamada **ultrasonic_interfacing/**
* Adicione o arquivo [ultrasonic_interfacing.ino](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.06%20Sensor%20Ultrass%C3%B4nico/code/ultrasonic_interfacing.ino) dentro da pasta criada.
* Copie o código para o Arduino IDE e carregue-o para a ESP32.
*Abra o monitor serial (canto superior direito da tela).

No fim você verá algo parecido com isso:

![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.06%20Sensor%20Ultrass%C3%B4nico/img/monitor%20serial.png)

Ele estará imprimindo a distância na tela.

<br><br>
---
  **[[Anterior]](https://github.com/LuisHBM/curso-piloto-MR01/tree/main/01%20-%20Configurando%20o%20ambiente/1.05%20-%20Exemplo%20led_toggle%20utilizando%20ROS)** - Exemplo led_toggle utilizando ROS      | **[[Próximo]]()** - ???
