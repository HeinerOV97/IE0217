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

11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.

C++ si permite el incluir funciones dentro las estructuras, con estas funciones se permite manipular los datos que se encuentran dentro de la misma estructura.

Sí, en una misma estructura se pueden almacenar tanto datos privados como publicos, estos se definen dentro de la estructura con las palabras clave "private" y "public", los datos privados pueden ser utilizados únicamente por datos pertencientes a la misma estrucutra.

12. Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.

Dividir un código en estos tres archivos es útil porque permite realizar un código más ordenado y legible, además de permitir realizar un código que sea reutilizable, al tener funciones que pueden ser útiles en otros proyectos separadas de un código main, además permite que sea más sencilla la división de trabajo en equipos cuando se quiere asignar a diferentes personas tareas específicas. 

Los archivos de encabezado .hpp contiene las declaraciones de funciones, variables, además de otros objetos que serán utilizados en el programa. Este archivo es utilizado por los otros dos, llamándolo con la directiva #include y colocando el nombre del archivo entre comillas dobles.

Por otra parte, el archivo .cpp incluye las definiciones de las funciones declaradas en el archivo .hpp, luego estás funciones a través del uso del archivo de encabezado .hpp, llegarán al archivo principal main.cpp.

Finalmente, el main.cpp utilizará los otros dos archivos, llamando a las funciones del .cpp por medio del .hpp y de esta manera llevará a cabo la tarea que se desea ejecutar.

13. Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.

El Type Casting consiste en realizar una conversión de un tipo de dato a otro, esto puede ser útil cuando se requiere que una variable pueda almacenar más información porque alcanzó el límite que posee antes de la conversión. El type casting puede ser utilizado cuando se busca pasar de una variable de tipo entera a una de tipo double y se puede realizar de una manera implicita o explicita, la manera implícita se da cuando, por ejemplo, se iguala una variable de tipo double a una tipo int, en este caso el valor de la variable de tipo int, se guardara en la variable de tipo double como un double. Por otra parte, en la manera explicita, si se iguala una variable de tipo int, a una double al valor double se le indica que pasara a ser una variable de tipo int, esto se puede hacer de dos maneras como se muestra a continuación:

```
//Casting explicito
//Se inicializa variable tipo double
double num_double = 3.56

//Forma 1
int num_int1 = (int)num_double;

//Forma 2
int num_int2 = int(num_double);
```

14.  ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.

Esta sentencia no es recomendable porque provoca un salto a la sección que se desea del código, pero esto puede llevar a provocar que la lógica del programa se vuelva más compleja, llevando a que haya más posibilidades de error en la ejecución del programa. En lugar de unas la sentencia goto, es recomdable hacer uso de los comandos break y continue en los programas.

15. ¿Dónde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales

Las variables de un código en C++ llegan a guardarse en diferentes secciones de la memoria del computador, esto depende del tipo de variable con la que se este trabajando, por ejemplo, las varias locales se guardan en la pila, en esta sección se guardan las variables que son enviadas como argumentos a funciones y diferentes procedimientos dentro del programa. Por otra parte, las variables globales, se guardan en el segmento de datos, en esta sección se guardan grupos de información, esta sección de memoria se mantiene estática durante de la ejecución del programa, esto quiere decir que su tamaño no varía.

