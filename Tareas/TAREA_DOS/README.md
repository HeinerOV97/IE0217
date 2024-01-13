# Teoría Tarea #

1. *Conceptos Fundamentales*: Define qué es la programación orientada a objetos y explica sus principios fundamentales.

Como tal, la programación orientada a objetos es uno de los tantos paradigmas de prográmación, estos se encargan de definir modelos para realizar el desarrollo de programas, ayudando a solucionas problemas que existen comúnmente al programar, algunos de los problemas que ayuda a solucionar este paradigma son:

- Complejidad del software: La OOP permite organizar segmentos pequeños de código (los objetos), relacionandose estos entre si creando así lenguajes complejos.

- Mantenimiento del software: Como los programas se organizan en segmentos pequeños de código (los objetos) permite que sea más sencillo realizar cambios en el código sin tener que afectar a todo el programa.

- Reutilización de código: Los objetos creados pueden ser reutilizados en diferentes programas, evitando que en cada programa sea necesario escribir código desde cero.

- Seguridad del software: Los objetos son aislados entre ellos, y el acceso a los atributos y métodos entre ellos son controlados, por lo que se ofrece una mayor seguridad.

Sus principios fundamentales se muestran en las siguientes respuestas.

2. Herencia: Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.

La herencia permite que se pueda crear una clase o más clases derivadas de una clase base existente, como su nombre lo indica, la clase derivada hereda las características de la clase base y también puede poseer características propias adicionales.

Un ejemplo de una herencia se muestra a continuación:

```
#include <iostream>

using namespace std;

// Se crea la clase base con un método propio
class Base {
 public:
  Base() {}
  void printGreeting(){
    cout << "Hola, soy la clase base llamada desde la clase derivada" << endl;
  }
};

// Se crea la clase derivada de la clase base y posee un método propio
class Derivated : public Base{
 public:
  Derivated() {}
  void printGreetingFromDerivated() {
  cout << "Soy un saludo desde la clase derivada" << endl;
  }
};

int main() {

    // Se crea un objeto de la clase derivada
    Derivated DerivatedClassObject;

    // Se llama al método de la clase base desde la clase derivada
    DerivatedClassObject.printGreeting();
    
    // Se llama al método de la clase derivada
    DerivatedClassObject.printGreetingFromDerivated();

  return 0;
}
```

3. Encapsulamiento: ¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.

El encapsulamiento permite que los datos de los objetos sean ocultados, lo que permite que la seguridad aumente, impidiendo que la información de un objeto sea modificada irresponsablemnte, para acceder a los datos de estos objetos solo lo pueden hacer llamando a métodos públicos del mismo objeto oculto.  

En C++ este es implementado por el tipo de acceso en las clase los cuales son los siguientes:

- public: Todas las otras clases y funciones pueden acceder a los elementos publicos de una clase.

- private: Los elementos fuera de la clase en la que están declarados no puede ser accedidos, solo se puedene acceder por medio de clases y funciones amigas.

- protected: En este caso las clases derivadas pueden acceder a los datos protegidos de la clase base.

4. Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.

El poliformismo es lo que permite que un mismo objeto puede ser utilizado de muchas maneras, esto dependiendo del contexto donde el esté trabajando.
En el caso de C++, se puede trabajar con distintos tipos de poliformismo, con respecto al poliformismo de tipo, se tiene la sobrecarga de funciones, mientras que en el poliformismo de operador, se tiene la sobrecarga de operadores.

5. Abstracción: ¿Cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.

En la OOP se puede realizar la creación de abstracciones, esto se trata de proporcionar solo la información importante sobre los datos con los que se trabaja a los demás, ocultando de esta manera los detalles de la implementación. En C++ se puede realizar el proceso de abstracción usando clases o los archivos de encabezado. En el caso de las clases, se utilizan los tipos de acceso mencionados anteriormente para realizar esto, por otra parte, en los archivos de encabezado, se le puede proporcionar a alguien el archivo de encabezado y que este utilice sus métodos, sin interesarle la implementación del código que se realiza para utilizar los métodos. [1]

6. Clases y Objetos: Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.

Una clase es la plantilla que define los atributos y métodos que poseerá un objeto. El método de crear objetos a partir de los atributos se llama instanciación.

Por otra parte, el objeto es una instancia de la clase. Este objeto poseerá los atributos y métodos proporcionados por la clase.

Un ejemplo de estos sería el siguiente:

```
#include <iostream>
using namespace std;

// Se crea una clase, esta es la platilla con los atributos y metodos que tendra el objeto
class Rectangulo {

    // Se definen los atributos que tendra el objeto instanciado
    public:
        double ancho;
        double largo;

        // Constructor, siempre sera llamado al instanciar un objeto
        Rectangulo(){}

        // Se define un metodo para el objeto, este trabaja con sus atributos
        double Area() {
            return largo * ancho;
        }
};

int main() {

    // Se instancia un objeto este tendra los atributos de la clase y tendra acceso a los metodos
    Rectangulo forma;

    // Se modifican los atributos del objeto tipo Rectangulo
    forma.ancho = 5;
    forma.largo = 3;

    // Se utiliza el metodo al que tiene acceso el objeto
    cout << "El area de la forma es: " << forma.Area() << endl;

    return 0;
}
```



## Referencias bibliográficas

[1] Barcelona Geeks. (2022, Jul 5). Abstracción en C++. [Online]. Obtenido de https://barcelonageeks.com/abstraccion-en-c/. [Accedido Ene. 13, 2024].




