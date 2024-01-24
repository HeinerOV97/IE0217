# Práctica Tarea #3

## Ejecución del programa

El programa se ejecutará a través de un Makefile, para ejecutarlo se debe estar ubicado en la carpeta src en el PATH, esta carpeta se encuentra en la carpeta general de la tarea, en esta carpeta se encuentran los archivos de código fuente y el Makefile.

El Makefile, posee seis targets que realizan diferentes acciones automatizadas para la facilidad de ejecución de los programas, estas seis indicaciones son:

- buildregex: Este target se encarga de compilar el código fuente y generar el ejecutable con el nombre regex.exe, para su ejecución en Windows se utiliza el comando “mingw32-make buildregex”.

- buildmatriz: Este target se encarga de compilar el código fuente y generar el ejecutable con el nombre matriz.exe, para su ejecución en Windows se utiliza el comando “mingw32-make buildmatriz”.

- runregex: Este target se encarga de ejecutar el programa regex.exe, siempre y cuando se haya ejecutado el comando buildregex primero, para su ejecución en Windows se utiliza el comando “mingw32-make runregex”. 

- runmatriz: Este target se encarga de ejecutar el programa matriz.exe, siempre y cuando se haya ejecutado el comando buildmatriz primero, para su ejecución en Windows se utiliza el comando “mingw32-make runmatriz”. 

- regex: Este target se encarga de compilar el código fuente, generar un ejecutable con el nombre regex.exe y ejecutar el programa. Su ejecución en Windows se lleva acabo con el comando “mingw32-make regex”.

- matriz: Este target se encarga de compilar el código fuente, generar un ejecutable con el nombre matriz.exe y ejecutar el programa. Su ejecución en Windows se lleva acabo con el comando “mingw32-make matriz”.

- clean: Este target se encarga de eliminar los archivos ejecutables y solo dejar los archivos fuente, para su ejecución en Windows se utiliza el comando “mingw32-make clean”. 

Se implementaron los comandos para que el make identifique en que sistema operativo se esta trabajando.

En este caso en la seccion de matrices, solo se realizó la clase que creara las matrices, la sección de operaciones no se logró realizar, al correr el programa se solicitará la información para crear una matriz de enteros, luego se imprimirá la matriz creada, luego se solicitará la información para crear la matriz de flotantes y se imprimirá la matriz creada, por último se solicitará la información para crear la matriz de números complejos y se imprimirá la matriz creada, en este caso para introducir los datos de la matriz de complejo estos deben ingresarse de la manera en que C++ los interpreta, es decir, (número real, número imaginario).

Por otra parte, en la sección de expresiones regulares, el código cumple con todo lo solicitado, cuando el programa sea ejecutado, se indicarán todas las instrucciones para que el usuario ingrese el correo de la manera solicitada, en caso de que falle con respecto a las expresiones regulares solicitadas, se le solicitará que lo ingrese de nuevo, cuando el usuario coloque un correo adecuado, el programa se lo indicará y cerrará el programa. 

# Teoría Tarea #3

 1. Definición de Templates: Explique el concepto de templates en C++ y proporcione un ejemplo simple.

Es una facilidad que ofrece el lenguaje de programación C++, este permite crear código genérico, el cual puede trabajar con diferentes tipos y estructuras de datos. Por ejemplo se puede crear una función o una clase, que pueda recibir diferentes tipos de datos, esto ayuda a no tener que hacer una clase por cada tipo de dato con el que se desea trabajar.

Un ejemplo del uso de un template se muestra en el siguiente código:

'''
#include <iostream>
using namespace std;

//Se crea un template que da la oportunidad de pasar a una funcion diferentes tipos de datos
template <typename T>
T sub(T num1, T num2) { //T es el argumento del template que acepta diferentes tipos de datos
    return (num1 - num2);
}

int main() {

    // Se declaran variables que almacenaran los resultados datos por la funcion
	int result1;
	double result2;

	// Se llama la funcion con enteros
	result1 = sub<int>(5, 2);
	cout << result1 << endl; // Se imprime el resultado

	// Se llama la funcion con variables de tipo double
	result2 = sub<double>(15.6, 0.6);
	cout << result2 << endl; // Se imprime el resultado

	return 0;
}

'''

 2. Sobrecarga de Plantillas: ¿Cómo se realiza la sobrecarga de funciones con plantillas en C++?

Esta pregunta puede verse desde dos puntos de vista, el primero sería, como se aplica el concepto de sobrecarga de funciones al uso de plantillas, en este caso se puede decir que el uso de plantillas para sobrecargar funciones es una gran herramienta, ya que al permitir que la función reciba varios tipos de datos esta permitiendo que la función se sobrecargue y se pueda utilizar de diferentes maneras con los distintos tipos de datos recibidos, sin tener que escribir la función con el mismo nombre varias veces, cambiando en cada una el tipo de datos que utiliza.

Por otra parte, sería, como se sobrecarga una plantilla, en este caso la sobrecarga de plantillas de funciones se puede realizar de la siguiente manera, primeramente se puede crear una plantilla de una función que reciba un argumento de cualquier tipo, luego se puede crear otro template de función con el mismo nombre que la función anterior pero que en este caso reciba dos argumentos de cualquier tipo de dato, sobrecargando la plantilla, esto se da porque la plantilla permite recibir cualquier tipo de dato, pero no, cualquier cantidad de argumentos.

3. Plantillas de Clases: Explique cómo se pueden utilizar plantillas en la definición de clases en C++.

Al igual que en el caso de funciones, las plantillas se pueden utilizar en las clases para que estas reciban cualquier tipo de dato, por ejemplo, se pueden declarar atributos en la clase que reciban cualquier tipo de dato, así como definir métodos que trabajen y devuelvan variables de cualquier tipo de dato.

4. Manejo de Excepciones: Describa los bloques try, catch y throw y cómo se utilizan para el manejo de excepciones en C++.

Bloques para manejo de excepciones:

- try: Este bloque prueba realizar una acción para definir si está sucediendo un error en la compilación o ejecución del código generando una excepción.

- throw: Este bloque define el error que está sucendiendo y que fue encontrado por el bloque try, throw toma la excepción y lo envía al bloque catch.

- catch: Este bloque recibe el argumento enviado por throw y realiza una acción con el para manejar el error, por ejemplo, mostrar al usuario el error que esta sucediendo.

5. Excepciones Estándar: Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser útiles.

Excepciones estándar de C++:

- invalid_argument: Este error es utilizado cuando se reciben argumentos que no se esperaba recibir, por ejemplo, si se solicita al usuario un número para realizar una operación matemática y este recibe un string, este error sería adecuado para mostrar.

- range_error: Este error es utilizado cuando se intenta almacenar un valor que esta fuera de un rango ya preestablecido.

- overflow_error: Este error puede ser utilizado cuando sucede un overflow, esto quiere decir que el valor de una variable de un tipo alcanza el mayor valor que puede adquirir y lo sobrepasa.

6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?

Las políticas de excepciones definen las buenas prácticas en el uso de excepciones en un código, estás son importantes porque definen el uso adecuado de las excepciones para mantener un código robusto y claro para las personas que trabajan o trabajaran con el.

7. Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.

Este comando especifica si una función o alguna expresión utilizada en el código lanzará una excepción, ayudando al compilar a saber como se comportará esa función al hablar de excepciones. La función o expresión no será lanzada, solo se indicará si esta puede producir una excepción o no [1].

8. Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.

Algunos de los tipos de contenedores de STL son [2]:

- vector: Este es un contenedor que almacena los elementos de manera desordenado, para posee un tamaño dinámico, por lo que, su tamaño variará de acuerdo a la cantidad de elementos que se solicite guardar en el, es apropiado utilizarlo, cuando no haya una cantidad definida de elementos que se desee almacenar.

- list: Este tipo de contenedor es apropiado utilizarlo, cuando se busque una rápida inserción y eliminación de elementos del contenedor, además este proporciona la iteración en ambas direcciones.

- map: Este tipo de contenedor permite almacenar elementos con una combinación de clave y valor, por lo que es apropiado utilizarlo, si esto es lo que se busca, almacenar elementos en condiciones donde se sepa la clave pero no el valor de un elementos.

- set: Este contenedor puede ser útil cuando se desea almacenar valores en orden de menor a mayor y eliminando los valores repetidos, ya que esta es su función

- queue: El contenedor de cola puede ser utilizada cuando se desea almacenar elementos y acceder a ellos de una manera secuencial, en este caso, el primer elemento en entrar será el primer elemento en salir.

9.  Iteradores en STL: Explique el concepto de iteradores en la STL y cómo se utilizan para acceder a elementos en contenedores.

Los iteradores son objetos que poseen una función similar a un puntero, en este caso los iteradores representan la posición de un elemento en un contenedor. Estos son utilizados para iterar sobre los elementos de un contenedor y la manera para hacerlo es la siguiente, las funciones begin() y end(), son funciones que devuelven iteradores que están apuntando al principio o al final de un contenedor respectivamente, por lo que si se posee un iterador nums.begin() este apuntará al elemento del índice 0, por lo que para acceder a cada uno de los elementos se tendría que usae nums.begin() + i, donde i representa cada uno de los indices del contenedor, hasta llegar a nums.end() que apunta al elemento siguiente del elemento final del vector.

10. Algoritmos STL: Proporcione ejemplos de al menos tres algoritmos de la STL y describa sus funciones básicas.

- Algoritmos de eliminación y modificación: Como su nombre lo indica, estos algoritmos se basan en métodos, dedicados a la modificación y eliminación de elementos en un rango, estos pueden eliminar o reemplazar los elementos de un rango con los comandos remove y replace respectivamente, así como invertir el orden en un rango con el comando reverse.

- Algoritmos de ordenamiento: Estos algoritmos permiten ordenar un elemento los elementos de un rango, con estos comandos se puede ordenar un rango de forma ascendente con el comando sort, ordenar parcialmente el rango con el comando partial_sort o colocar el elemento n-ésimo de un rango en su posición correcta con el comando nth_element.

- Algoritmos de búsqueda: Estos algoritmos permiten buscar elementos en un rango, por ejemplo, el comando find busca un elemento en un rango, el comando count cuenta el número de veces que aparece un elemento en el rango, el comando binary_search realiza una búsqueda binaria en un rango ordenado y el comando find_if busca el primer elemento que cumpla con un criterio dado.

11. Algoritmos Personalizados: ¿Cómo podría utilizar un algoritmo personalizado con la STL?

Los algoritmos trabajan con métodos por defecto para realizar sus funciones, pero al llamarlos se les puede dar como argumentos, algoritmos personalizados para que los ayuden a realizar sus funciones, por ejemplo, el comando sort tiene su propio método interno para ordenar los números en un contenedor de menor a mayor, pero dentro de los argumentos que sort recibe se puede incorporar un método propio que lo ayude a realizar el mismo ordenamiento pero con un algoritmo personalizado por el programador del código.

12. Definición de Expresiones Regulares: Defina qué son las expresiones regulares y proporcione un ejemplo simple

Las expresiones regulares son patrones, estos se utilizan poder manipular cadenas de texto, con estas expresiones se pueden validar cadenas, es decir, revisar que cumple con condiciones establecidas al recibirla, permite buscar patrones en las cadenas de texto, así como realizar sustituciones.

Un ejemplo de una expresión regular se puede observar en un correo electrónico, ya que se puede solicitar que este tenga unas características establecidas, su uso también se podría utilizar en el uso de contraseñas, definiendo que características se desea que tenga.

13. Caracteres Especiales: Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.

Algunos de los carácteres especiales utilizados para las expresiones regulares son:

El signo más (+): Este representa que haya una o más repeticiones del elemento que se encuentra anterior a el. Por ejemplo, si se utiliza la expresión regular Do+g, esta coincidirá con las cadenas Dog, Doog, Dooooog, etc. Pero este no coincidirá con la cadena Dg, porque la letra o debería estar presente al menos una vez.

El signo de interrogación (?): Este indica que el elemento que se encuentrar anterior a el, puede estar o no. Por ejemplo, si se utiliza la expresión regular Hor?se, esta coincidirá con Horse o Hose, ya que la letra r puede estar presente o no.

El símbolo pipe (|): Este indice que pueden haber alternativas. Por ejemplo, si este se utiliza la expresión regular Dog|Cat, esta coincidirá con Dog o con Cat.

14. Uso de Expresiones Regulares en C++: ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.

Estas se utilizan con la librería regex, la cual permite hacer uso de las expresiones regulares y utilizarlas en código de C++, un ejemplo de su uso se muestra a continuación:

'''

#include <iostream>
#include <regex> // Para utilizar expresiones regulares en C++

int main() {
    auto const regex = std::regex("Dog|Cat"); // Con el pipe se indica que se encuentra Dog o Cat en el string que se revisa

    auto const Dog = std::string("I love my Dog."); // Se guarda un string normal en una variable
    auto const VerifDog = std::regex_search(Dog, regex); // regex_search busca la expresion regular que se desea 
                                                         // comparar en el texto, nos da verdadero o falso

    auto const Cat = std::string("I love my Cat."); // Se guarda un string normal en una variable
    auto const VerifCat = std::regex_search(Cat, regex); // regex_search busca la expresion regular que se desea 
                                                         // comparar en el texto, nos da verdadero o falso
    std::cout << std::boolalpha
              << VerifDog << '\n' // Se debe obtener verdadero ya que coincide la expresion regular
              << VerifCat << '\n'; // Se debe obtener verdadero ya que coincide la expresion regular
}

'''

15. Validación de Patrones: ¿Por qué las expresiones regulares son útiles para la validación de patrones en cadenas de texto?

Estas son útiles porque permiten la verificación de la existencia de caractéres en una cadena, se puede verificar si lo ingresado en la cadena de texto corresponde con lo solicitado, ya sea por el orden en específico que se solicita, por los caracteres que se solicita utilizar o los que se solicita que no se use. Como se mencionó anteriormente, gracias a las expresiones regulares se podría verificar que una contraseña cumple con los requisitos solicitados al ingresarla.   

# Referencias bibligráficas

[1] GeeksforGeeks. (2023, Sep 22). noexcept Operator in C++ 11. [Online]. Obtenido de https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/. [Accedido Ene. 20, 2024]

[2] CPlusPlus. (s.f). Standard Containers. [Online]. Obtenido de: https://cplusplus.com/reference/stl/. [Accedido Ene. 20, 2024] 