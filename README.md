# Proyecto-Arduino_Sumador-y-Restador
En este proyecto explicaremos como implementar un sumador y un restador en Arduino

# Materiales necesarios
- 6 leds
- 2 pulsador
- 8 resistencias de 220 Ω
- Placa prototipos y cables
- Arduino UNO

# Explicación
Lo primero de todo inicializaremos una variable, que llamaremos "Cuenta", a 0.

Dentro del bucle llamaremos a las funciones "Pulsadores" y "Comprobar", las cuales explicaremos más adelante, y tras esto esperamos 250 milisegundos antes de volver a empezar.

En la función "Pulsadores" se verifica si se ha usado algún pulsador y en caso de hacerlo, si es el que se encarga de la suma o el de la resta.
En caso de ser el pulsador que hemos conectado al Pin nº 5 de Arduino UNO, incrementamos el contador en 1 y lo mostramos por pantalla.
En caso de ser el pulsador que hemos conectado al Pin nº 3, hacemos lo mismo que en caso anterior, pero en vez de incrementar el contador, lo decrementamos.

En la función "Comprobar", verificamos el valor de la variable "Cuenta" para encender o apagar los leds. En caso de ser inferior o igual a 0 o superior a 6, ninguno de los leds se enciende.
En el resto de los casos, el valor que tiene la variable será el número de leds que encendamos, los cuales estarán conectados entre los Pines 8 y 13 de Arduino UNO.

# Resultado final en TinkerCAD
Una vez realizado esto, si creamos un proyecto en TinkerCAD, el circuito resultante para que este código funcione es el siguiente:
![image](https://github.com/user-attachments/assets/28be028b-5960-4fdd-b6dc-4e3be4b0f69b)
