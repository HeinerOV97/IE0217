# Práctica Tarea #1

## Ejecución del programa

El programa se ejecutará a través de un Makefile, para ejecutarlo se debe estar ubicado en la carpeta src en el PATH, esta carpeta se encuentra en la carpeta general de la tarea, en esta carpeta se encuentran los archivos de código fuente y el Makefile.
El Makefile, posee cuatro targets que realizan diferentes acciones automatizadas para la facilidad de ejecución del programa, estas cuatro indicaciones son:

- build: Este target se encarga de compilar el código fuente y generar el ejecutable con el nombre adivina.exe, para su ejecución en Windows se utiliza el comando “mingw32-make build”.

- run: Este target se encarga de ejecutar el programa adivina.exe, siempre y cuando se haya ejecutado el comando build primero, para su ejecución en Windows se utiliza el comando “mingw32-make run”. 

- all: Este target se encarga de compilar el código fuente, generar un ejecutable con el nombre adivina.exe y ejecutar el programa, es decir, este comando realiza los targets build y run en un solo comando. Su ejecución en Windows se lleva acabo con el comando “mingw32-make all”.

- clean: Este target se encarga de eliminar los archivos ejecutables y solo dejar los archivos fuente, para su ejecución en Windows se utiliza el comando “mingw32-make clean”.    

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

El linker se encarga de resolver las referencias y enlazar los diferentes archivos de un código objeto (es un archivo binario que contiene código fuente ya compilado en código máquina, pero que no está enlazado) que fueron creados en la compilación del código fuente, de esta manera se crea finalmente un ejecutable. El linker también es encargado de gestionar la memoria que va a ser utilizada por el programa que se va a ejecutar. [1]
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

Se muestran 3 métodos comúnes de la biblioteca string [2]:

- El método append agrega caracteres adicionales a una cadena al final.
- El método assing reemplaza el string ya almacenado en una variable, por otro que se le indique.
- El método string declara una variable para que sea de tipo string.

10. ¿Cuál es la principal diferencia entre un bucle do-while y un bucle while?

Su principal diferencia radica en que, el bucle do-while, realizá el ciclo dentro de el, al menos una vez, ya que sus condiciones están escritas al final, mientras que el while primero revisara sus condiciones para funcionar, y si no se cumple no realizá ningún ciclo.

11. ¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.

C++ si permite el incluir funciones dentro las estructuras, con estas funciones se permite manipular los datos que se encuentran dentro de la misma estructura.

Sí, en una misma estructura se pueden almacenar tanto datos privados como publicos, estos se definen dentro de la estructura con las palabras clave "private" y "public", los datos privados pueden ser utilizados únicamente por datos pertencientes a la misma estrucutra. [3]

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

Las variables de un código en C++ llegan a guardarse en diferentes secciones de la memoria del computador, esto depende del tipo de variable con la que se este trabajando, por ejemplo, las varias locales se guardan en la pila, en esta sección se guardan las variables que son enviadas como argumentos a funciones y diferentes procedimientos dentro del programa. Por otra parte, las variables globales, se guardan en el segmento de datos si no son constantes, en esta sección se guardan grupos de información, esta sección de memoria se mantiene estática durante de la ejecución del programa, esto quiere decir que su tamaño no varía, por otra parte, si las variables globales son estáticas se almacenan en el segmento de código, en esta sección de memoria son almacenados los códigos de instrucciones y su tamaño no varía. [4][5]

16. ¿Cuál es la diferencia entre pasar parámetros por valor, por referencia y por puntero?

En este caso, el valor indica el valor que posee la variable, la referencia indica la dirección de memoria donde se encuentra la variable y el puntero tiene almacenada como tal la dirección de memoria de la variable, esto quiere decir que si por ejemplo, la variable es enviada como parámetro, pasará lo siguiente, si se envía el valor, quien reciba el parámetro tiene la opción de modificar la variable, si lo que recibe es la referencia, solo tendrá acceso a la dirección en memoria de la variable y si finalmente lo que recibe es el puntero, tendrá acceso a la dirección que tiene el puntero almacenada y si se utiliza una de-referencia, también tendrá acceso al valor que está almacenado en la dirección de memoria.

17. Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.

Inicialmente el puntero apuntará a la dirección donde está almacenado el primer elemento del arreglo.  
Para acceder a los elementos de un array por medio de un puntero se puede ver de la siguiente manera, para almacenar las direcciones de un array en un puntero se realiza de la siguiente manera, ptr = arr, suponiendo que las variables ya fueron declaradas como un puntero y un array respectivamente, no es necesario el símbolo "&", ahora, inicialmente el puntero señaralá a la primera posición del array es decir, ptr señalará la dirección en memoria de arr[0] es decir ptr = &arr[0], si a este ptr se le suma 1, es decir ptr + 1, señalará la dirección en memoria de arr[1], es decir ptr + 1 = &arr[1] y así sucesivamente. Indiferente del tipo de dato sobre el que se trabaja, el compilador entenderá y siempre realizará el procedimiento de la misma manera.

18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.

Los punteros dobles se utilizan cuando se crea un puntero que almacene la dirección de memoria en la que está almacenada otro puntero que almacena la dirección de una variable.
El uso de estos punteros dobles puede ser útil cuando se trabaja con memorias dinámicas, ya que en este caso se puede necesitar un mejor manejo de los elementos que están guardados en memoria. En el caso de necesitarse asignar o liberar memoria, por ejemplo.

19. ¿Cuál es la diferencia entre un break y un continue en los bucles de C++?

En este caso la sentencia break termina el bucle, la concluye aunquee falten ciclos por realizar. Por otra parte, la sentencia continue provoca que el código salte a la siguiente iteración.

20. ¿Para qué se utiliza la directiva #ifndef?

Verifica si el archivo .hpp ya fue definido por medio de un identificador, y si no es así, lo define, esto se realiza en casos donde el archivo de encabezado va a ser utilizado por más de un archivo .cpp, esto permite un programa más rápido y eficiente, ya que el encabezado sería inicializado por el primer archivo .cpp que lo necesite, y el segundo archivo no tendría la necesidad de inicializarlo porque ya el primer .cpp lo hizo, ahorrando también espacio en la memoria en este caso.

21. ¿Qué es el puntero this en C++?

Durante el proceso de compilación del programa, el compilador por defecto agrega un puntero implícito oculto en las funciones miembro de la clase. Cuando la función miembro es llamada por un objeto de la clase, este objeto se proporciona como un argumento oculto para el puntero this. Esto quiere decir que, el puntero this le permite a la función miembro saber que objeto de la clase la está llamando. [6]

22. ¿Qué es un puntero nullptr?

Un punterlo nullptr representa un valor de puntero nulo. Este indica que el puntero no está apuntando hacía ningún objeto en el código. [7]

23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?

Por un lado los arreglos poseen un conjunto de datos que están almacenados en una secuencia contigua en la memoria, además de tener un tamaño fijo, que se determina al momento de la compilación.

Por otra parte, las listas almacenan un conjunto de datos que están almacenas en nodos y cada uno de estos nodos poseen una referencia al elemento que sigue en la lista, esto provoca que los elementos de las listas sean más accesibles para manejarlos, a diferencia de los arreglos, las listas poseen un tamaño que puede variar. [8]

24. ¿Qué es una función prototipo?

Una función prototipo es aquella donde solo se realiza la declaración de una función, especificando, el tipo de datos que recibe, que devuelve, así como el nombre de la función, esta función prototipo es la que se coloca en los archivos .hpp que declaran las funciones que serán utilizadas.

25. ¿Investigue qué es un memory leak?

Un memory leak ocurre cuando un programa no libera bloques de memoria que no necesita, creando una acumulación de memoria sin utilizar. Esto sucede comúnmente cuando un objeto acumula referencias adicionales, pero al momento de dejar de utilizarlas no se liberan y aunque no se utilizan el espacio de memoria sigue ocupado. [9]

## Parte #2

1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?

Se muestran algunas de las variables comúnmente utilizadas en un makefile y su utilidad [10]:

- CC: Esta variable se utiliza para almacenar el compilador de C.
- CFLAGS: Esta variable almacena las opciones de compilación en C.
- CXXFLAGS: Esta variable almacena las opciones de compilación en C++.
- LDFLAGS: Se utiliza para pasar indicaciones al linker.

2. ¿De qué se compone una regla en un Makefile? 

Una regla en un Makefile se compone de tres partes: el target, la lista de dependencias y comandos para construir el objetivo.

3. Defina qué es un target y cómo se relaciona con sus prerequisitos.

Un target es el resultado que se espera tener al ejecutar el Makefile, en este caso un target podría ser la compilación de un programa o limpiar archivos que fueron generados previamente. Los targets son las reglas definidas en un Makefile. 
El target está relacionado con las dependencias y los comandos, ya que necesita de estos para construirse. Por ejemplo, las dependencias son elementos o archivos que se necesitan para construir al target, si una dependencia sufre un cambio, Make se encarga de reconstruir el target. Por otra parte, los comandos son instrucciones que sigue el Make para crear el target a partir de sus dependencias.

4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?

- -I: Se utiliza para indicar directorios adicionales, donde están ubicados archivos de encabezado que serán utilizados. [11]
- -c: Se utiliza para especificar el archivo fuente.
- -o: Se utiliza para especificar el archivo ejecutable.

5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?

Las variables se definen indicando su nombre seguido por un =, := ó ::=. Estas variables almacenan valores que serán utilizados en diferentes secciones del archivo. Son utilizados para que la modificación y personalización del Makefile sea más sencilla, sin tener que cambiar el valor necesitado en cada punto del archivo si se realiza alguna modificación [12].

6. ¿Qué utilidad tiene un @ en un Makefile?

El @ representa el target que se desea obtener al ejecutar el Makefile.

7. ¿Para qué se utiliza .PHONY en un Makefile?

Esto se utiliza para declarar targets que no representan ningún archivo físico, estos representan acciones que deben realizarse. Un ejemplo de esto es la acción clean, esto es un phony que es utilizado para eliminar archivos que han sido generados.

## Referencias bibliográficas

[1] ALEGSA. (s.f). Definición de Linker (informática). [Online]. Obtenido de https://www.alegsa.com.ar/Dic/linker.php#h4&gsc.tab=0. [Accedido Ene. 6, 2024].

[2] cplusplus (s.f). std::string. [Online]. Obtenido de https://cplusplus.com/reference/string/string/. [Accedido Ene. 6, 2024].

[3] Universidad Dos Bosco (s.f). Datos compuestos (struct). [Online]. Obtenido de https://www.udb.edu.sv/udb_files/recursos_guias/informatica-tecnologico/programacion-de-algoritmos/2020/i/guia-11.pdf#:~:text=C%2B%2B%2C%20permite%20incluir%20funciones%20en%20el%20interior%20de,muy%20relacionado%20con%20la%20programaci%C3%B3n%20orientada%20a%20objetos. [Accedido Ene. 6, 2024].

[4] stackoverflow (s.f). Are global variables in C++ stored on the stack, heap or neither of them?. [Online]. Obtenido de https://stackoverflow.com/questions/44359953/are-global-variables-in-c-stored-on-the-stack-heap-or-neither-of-them. [Accedido Ene. 6, 2024].

[5] Edu.Lat (s.f). Ensamblaje: segmentos de memoria. [Online]. Obtenido de https://tutoriales.edu.lat/pub/assembly-programming/assembly-memory-segments/ensamblaje-segmentos-de-memoria. [Accedido Ene. 6, 2024].

[6] DelftStack (s.f). Usa el puntero this en C++. [Online]. Obtenido de https://www.delftstack.com/es/howto/cpp/this-operator-in-cpp/. [Accedido Ene. 6, 2024].

[7] Microsoft (2023, Jun 6). nullptr (C++/CLI y C++/CX). [Online]. Obtenido de https://learn.microsoft.com/es-es/cpp/extensions/nullptr-cpp-component-extensions?view=msvc-170. [Accedido Ene. 6, 2024].

[8] code genius (s.f). Array vs Lista en C++: Descubre cuál es tu mejor opción de programación. [Online]. Obtenido de https://codegenius.website/array-vs-lista-en-c-descubre-cual-es-tu-mejor-opcion-de-programacion/. [Accedido Ene. 6, 2024].

[9] Keepcoding (s.f). ¿Qué es una memory leak y cómo evitarla?. [Online]. Obtenido de https://keepcoding.io/blog/que-es-un-memory-leak-y-como-evitarlo/. [Accedido Ene. 6, 2024].

[10] EARTHLY (2023, Jul 24). Understanding and Using Makefile Flags. [Online]. Obtenido de https://earthly.dev/blog/make-flags/. [Accedido Ene. 7, 2024].

[11] Medium (2023, Jul 2). C Programming: Mastering Flags in GCC. [Online]. Obtenido de https://medium.com/@promisevector/c-programming-mastering-flags-in-gcc-32809491f340. [Accedido Ene. 7, 2024].

[12] EARTHLY (2023, Jul 19). Understanding and Using Makefile Variables. [Online]. Obtenido de https://earthly.dev/blog/makefile-variables/. [Accedido Ene. 7, 2024].