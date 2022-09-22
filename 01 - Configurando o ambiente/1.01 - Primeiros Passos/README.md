# Primeiros passos:
Configurar o ambiente instalando as IDEs (VSCode, Arduindo IDE)

**VSCODE:**

* Abrir o terminal (CTRL Esq. + ALT + T) e executar o seguinte comando:
```
$ sudo snap install --classic code
```
* Instalar extensões:

  - ![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.01%20-%20Primeiros%20Passos/img/extensions.png)

**ARDUINO IDE:**
* Um bom passo a passo para a instalação do Arduino IDE você encontra **[aqui](https://linuxopsys.com/topics/install-arduino-ide-on-ubuntu-20-04)**

* Configurar a IDE para trabalhar com o ESP32:
<br><br> A IDE é inicialmente configurada para trabalhar com o Arduino UNO, para podermos trabalhar com o ESP32 devemos instalar suas bibliotecas. Nesse site você pode encontrar mais informações: https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/

## Executando o Blink

* No Arduino IDE, utilize este código **[Blink](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.01%20-%20Primeiros%20Passos/code/Blink.ino)** ou vá em **(Arquivos -> Exemplos -> 01.Basics -> Blink)**

* Clique em **Verificar** e depois de verificar conecte o ESP32 na sua máquina, selecione a porta **(Ferramentas -> Porta -> /dev/ttyUSB0)** e carregue o código clicando em **Carregar**:

OBS: se certifique de que o Power LED do ESP32 esteja ligado, caso o contrário ele pode não estar conectado corretamente ou estar apresentando algum defeito.

- ![alt text](https://iotdesignpro.com/sites/default/files/inline-images/ESP32-LED-Blink.jpg)


Se aparecer este erro no console: **"Cannot open /dev/ttyUSB0: Permission denied"**, você terá que executar os seguintes comandos no terminal:
```
$ sudo su
$ cd /
$ cd dev
$ chown "nome de usuário" ttyUSB0
```

  
Ícones de Verificar e Carregar, respectivamente:
- ![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.01%20-%20Primeiros%20Passos/img/iconesArduinoIDE.png)

Após isso, você verá que o LED ao lado do Power LED estará ligando/desligando em pequenos intervalos.

- ![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.01%20-%20Primeiros%20Passos/img/Blink.gif)
