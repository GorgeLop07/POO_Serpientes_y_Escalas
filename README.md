Previo a la clase | Tarea individual: Sobrecarga de operadores
  -
**1 - Como compilar el codigo**

a) Primero descargamos nuestro documento completo

b) Al descargarlo nos aseguramos que el archivo de tasks.json tambien este dentro de nuestra carpeta de .vscode

c) Ya que confirmamos que este, abirmos nuestro codigo en VsCode y usando el comando "Ctrl+Shift+B" se compila el codigo

d) Abrimos una nueva terminal en VsCode y corremos el comando .\main.exe

e) En caso de que no te sirva puedes tambien compilarlo poniendo en la terminal "g++ *.cpp -o main.exe" y ejecuntandolo con ./main.exe


**2 - Explicacion** 

En este codigo utilizamos la plantilla de "Serpientes y Escaleras" que hemos estado utilizando en las ultimas 2 actividades, sin embargo, en esta ocacion hemos aplicado lo que se conoce como sobrecarga de operadores, 
siendo el primer uso dentro de la clase "Tile", en la que se sobrecargo el operador "+", dejandonos retornar un valor int para que asi se pueda realizar la suma entre Tiles. Tambien creamos una nueva clase llamada "Turnos", en la que se
sobrecargo el operador "<<", permitiendonos el realizar impresiones de los valores del objetos, sin usar funciones parametrizadas. 
