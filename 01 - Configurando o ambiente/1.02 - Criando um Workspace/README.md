# Criando um Workspace:

***Catkin:***

* Crie uma estrutura base do seu workspace utilizando os seguintes comandos:
```
$ mkdir my_first_ws
$ cd my_first_ws/
$ mkdir src
$ cd src/
```
* Após criar a estrutura base do workspace você irá criar seu primeiro pacote:

```
$ catkin_create_pkg my_first_pkg rospy std_msgs
```
Note que através do comando *catkin_create_pkg* você dará o nome do seu pacote (no caso é my_first_pkg) e logo em seguida inserir suas dependências, que por enquanto utilizaremos o *rospy* e o *std_msgs*.

OBS: Lembre de indicar o source do ROS antes de utilizar esse comando e sempre que criar um novo terminal.

* Pelo terminal, volte na pasta my_first_ws e execute o seguinte comando:
```
$ catkin_make
```
Esse comando irá de fato criar o seu workspace.

**Integrar o VSCode com o seu pacote:**
* No *Visual Studio Code* no cabeçalho da aplicação selecione *Arquivo -> Abrir Pasta...*.

  ![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.02%20-%20Criando%20um%20Workspace/img/folder_vscode.PNG)

* Abra a pasta *src/* do seu workspace.
Agora você pode trabalhar no seu workspace com maior facilidade.

## Fazendo algumas alterações

* Dentro do seu pacote crie as pastas *src/*, *launch/*, *esp_src/*

Seu diretório ficará parecido com isso: <br><br>
![alt text](https://github.com/LuisHBM/curso-piloto-MR01/blob/main/01%20-%20Configurando%20o%20ambiente/1.02%20-%20Criando%20um%20Workspace/img/src.PNG)

Essas pastas serão importantes para organizar nossos projetos mais a frente.

<br><br>
---

  **[[Anterior]](https://github.com/LuisHBM/curso-piloto-MR01/tree/main/01%20-%20Configurando%20o%20ambiente/1.01%20-%20Primeiros%20Passos)** - Primeiros Passos         | **[[Próximo]](#)** - ?????

