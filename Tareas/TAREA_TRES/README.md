# Teoría Tarea #2

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

- std::invalid_argument: Este error es utilizado cuando se reciben argumentos que no se esperaba recibir, por ejemplo, si se solicita al usuario un número para realizar una operación matemática y este recibe un string, este error sería adecuado para mostrar.

- std::range_error: Este error es utilizado cuando se intenta almacenar un valor que esta fuera de un rango ya preestablecido.

std::overflow_error: Este error puede ser utilizado cuando sucede un overflow, esto quiere decir que el valor de una variable de un tipo alcanza el mayor valor que puede adquirir y lo sobrepasa.

6. Política de Manejo de Excepciones: ¿Qué es una política de manejo de excepciones y por qué es importante considerarla al diseñar software?

Las políticas de excepciones definen las buenas prácticas en el uso de excepciones en un código, estás son importantes porque definen el uso adecuado de las excepciones para mantener un código robusto y claro para las personas que trabajan o trabajaran con el.

7. Noexcept: Explica el propósito de la palabra clave noexcept y cómo se utiliza en C++.

Este comando especifica si una función o alguna expresión utilizada en el código lanzará una excepción, ayudando al compilar a saber como se comportará esa función al hablar de excepciones. La función o expresión no será lanzada, solo se indicará si esta puede producir una excepción o no [1].

8. Contenedores STL: Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.






# Referencias bibligráficas

[1] GeeksforGeeks. (2023, Sep 22). noexcept Operator in C++ 11. [Online]. Obtenido de https://www.geeksforgeeks.org/noexcept-operator-in-cpp-11/. [Accedido Ene. 20, 2024]
