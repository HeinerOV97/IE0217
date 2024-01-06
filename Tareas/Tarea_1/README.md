# Teoría Tarea #1

## Parte #1

1. ¿Cuál es la principal diferencia entre C y C++?

Su principal diferencia rádica en que estos dos lenguajes se programación trabajan con distintos paradigmas de programación, por un lado, el lenguaje de programación C, se basa en el paradigma procedimental, el cual se basa en describir de una manera lógica y ordenada el paso a paso el proceso exacto que debe seguir le programa para resolver el problema.

Por otra parte, el lenguaje de programación C++ utiliza la programación orientada a objetos, este tipo de lenguaje lo que hace es agrupar tanto los datos, como los métodos para manejarlos en un único elemento llamado objeto, esto permite que el código sea más sencillo de reutilizar.

2. ¿Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?

En este caso, en el lenguaje de programación compilado se requiere un primer paso antes de ejecutar el programa, como su nombre lo indica, el código es compilado, esto lo que hace es convertir el código fuente escrito a código máquina, creándose un ejecutable que será el programa capaz de realizar las tareas indicadas en el código fuente, si en el código fuente se realizan cambios es necesario "recompilarlo" para crear un nuevo 
ejecutable con las nuevas funciones. 

El lenguaje interpretado, no realiza un paso previo para la ejecución del programa, este lo que hace es ir línea por línea del código, interpretando y ejecutando a su vez las indicaciones que se encuentran en el código, por lo que, si en el código fuente se realiza un cambio, cuando el código se ejecute, este cambio será visto por el interprete al momento de la nueva ejecución del programa. 

Los lenguajes de programación compilados son más apropiados a utilizar cuando se trabajan con códigos fuente grandes, ya que, el lenguaje interpretado, al interpretar y ejecutar el código línea por línea es más lento, haciendo que sea más útil un lenguaje compilado en estos casos, por su velocidad eficiencia en la ejecución del programa.

Por otra parte, el lenguaje de programación interpretado es más conveniente de utilizar cuando se busca que el programa sea multiplataforma, ya que es más común que el interprete utilizado esté en diferentes OS, evitando así la adaptación del código cada vez que se cambie de plataforma.

3. Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?

El linker se encarga de resolver las referencias y enlazar los diferentes archivos de un código objeto (es un archivo binario que contiene código fuente ya compilado en código máquina, pero que no está enlazado) que fueron creados en la compilación del código fuente, de esta manera se crea finalmente un ejecutable. El linker también es encargado de gestionar la memoria que va a ser utilizada por el programa que se va a ejecutar. 
El linker es una herramienta indispensable, ya que permite la creación de programas complejos partiendo de diferentes módulos y bibliotecas de código.

4. Describa las diferencias clave entre los tipos de datos derivados y primarios en C++.

Los tipos de datos primarios especifican a la variable el tipo de datos que almacenaran, a su vez, de esta manera a partir del tipo de dato, el compilador asigna la memoria para la variable. Algunos ejemplos de datos primarios son: Los enteros, los booleanos, los caracteres, entre otros.

Por otra parte, los tipos de datos derivados, son llamados así, porque poseen un tipo de dato primario asociado, siendo ejemplos de estos, las funciones, los punteros, los array y las referencias.

5. Defina qué significa inicializar y declarar una variable.

- Al declarar una variable, se le asigna el tipo de dato que esta podrá almacener, además de reservar el espacio de memoria que esta va a utilizar.
- Al inicialiar una variable, se define el valor que esta va a almacenar.

6. ¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?

Esto se da cuando dos o más funciones tienen el mismo nombre, siempre y cuando el número y/o tipo de argumentos que reciben las funciones sean diferentes. 

El beneficio del uso de la sobrecarga de funciones radica en que, por medio de su uso, se ahorra memoria, permite que el código sea más legible, permite la reutilización de código, acelera la ejecución y permite que no se deba utilizar diferentes nombres en funciones que realizan el mismo procedimiento.

7. ¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.

Un puntero es una variable que se encarga de almacenar la dirección en memoria donde se encuentra almacenada una variable, este puntero se declara con el tipo de variable con el que va a trabajar y un asterisco y se inicializa con la dirección en memoria de la variable que se desee, como se muestra a continuación: 

```
// Se declara e inicializa la variable
int var = 10;

// Se declara la variable puntero.
int* pointar;

// Se inicializa la variable puntero con la dirección en memoria de la variable.
pointVar = &var;
```

Pasando esta idea a un ejemplo de la vida real, podemos comparar esto con un archivero (Bien ordenado e identificado), la memoria como tal, sería el archivero, las variables serían los archivos y su dirección en memoria sería el identificador que posee cada sección del archivero, por lo que, un puntero en la vida real, nos diría en que gabeta del archivero se encuentra el archivo que estamos buscando.

8. ¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.

Al declararse una variable global, y ser esta llamada en una función, la función tiene acceso al valor original de la variable global, ya que la función puede modificar el valor de la variable global recibida, y si la variable global es llamada en una segunda función, esta no recibirá el valor por defecto con el que se inicializó la variable global, si no que tendrá el nuevo valor al que la cambió la primer función.

Estas variables globales son útiles si se tiene que usar una misma variable en diferentes funciones, esto para no tener que inicializar la misma variable en diferentes funciones, permitiendo un ahorro de memoria y un programa más eficiente.

9. Investigue y explique tres métodos comunes de la biblioteca string en C++

- El método append agrega caracteres adicionales a una cadena al final.
- El método assing reemplaza el string ya almacenado en una variable, por otro que se le indique.
- El método string declara una variable para que sea de tipo string.

10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?

Su principal diferencia radica en que, el bucle do-while, realizá el ciclo dentro de el, al menos una vez, ya que sus condiciones están escritas al final, mientras que el while primero revisara sus condiciones para funcionar, y si no se cumple no realizá ningún ciclo.

11. 





