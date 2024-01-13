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

7. Métodos Virtuales: Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.

Los métodos virtuales son importantes ya que permiten utilizar versiones de una función dependiendo del objeto que las llame, por ejemplo, en las funciones virtuales, el método de una clase base puede ser o no, sobreescrito por un método de una clase derivada, esto dependiendo de los atributos del objeto que lo llame. Esto se utiliza especialmente cuando un puntero de la clase base apunta a un objeto de una clase derivdad. Este método es utilizado para llevar a cabo el poliformismo en tiempo de ejecución, el cual consiste en que el compilar realiza un enlace tardío donde busca hacer coincidir a un objeto con la función llamada correcta, y ejecuta esto en el tiempo de ejecución. [2]

8. Constructores y Destructores: ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.

- El constructor define como se inicializa un objeto de una clase, Este es utilizado para inicializar un objeto con valores en sus atributos definidos, solicitar datos al usuario, permite mostrar mensajes o llamar funciones.

- El destructor es llamado cuando un objeto ya no será utilizado más, este por ejemplo es utilizado cuando se deben cerrar achivos utilizados en el programa o se desea liberar espacios de memorias solicitados explicitamente.

9.  Sobrecarga de Operadores: Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.

Por medio de la sobrecarga de operadores se define el comportamiento de operadores tales como +, -, *, /, entre otros, estos pueden utilizarse en una clase que sea personaliza y permita que los resultados que den estas operaciones sean dados por el programador, a continuación se muestra un ejemplo de implementación.

```
#include <iostream>
using namespace std;

//Se crea la clase
class Fraccion {
    int numerador, denominador;
    public:
        Fraccion(int n, int d) : numerador(n), denominador(d) {}
        //Se crea una variable de tipo fraccion, que da una indicacion especial a cada vez que se utilice el simbolo / con objetos de tipo fraccion
        Fraccion operator/ (const Fraccion &f) {
            Fraccion resultado(
                //numerador y denominador pertenecen al primer objeto creado, f.numerador y f.denominador pertenecen al segundo
                numerador * f.denominador,
                denominador * f.numerador
            );
            return resultado;
        }
        //Se crea un metodo
        void imprimir() {
            cout << numerador << "/" << denominador << endl;
        }
};

int main() {
    //Se instacian los objetos
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);
    //Se realiza una division de fracciones por medio de la sobrecarga de operadoras, definiendo una accion al operador /
    Fraccion f3 = f1 / f2;

    // Se llama al metodo imprimir
    f3.imprimir();

    return 0;
}
```

10. Templates: Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?

Los templates son utilizados, para que las funciones o clases puedan trabajar con diferentes tipos de datos, por ejemplo se puede crear una función que sume dos números pero a esta no le importe si recibe un entero o un flotantes como argumentos, ya que el template permite que la función pueda recibir diferentes tipos de variables. Estos son útiles ya que permiten que se pueda trabajar con diferentes variables en diferentes funciones o clases, permitiendo así la reutilización de código.

11. ¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?

La memoria dinámica es la posibilidad de solicitar memoria de acuerdo a la necesitada en tiempo de ejecución del programa, esta es almacena en el segmento de memoria llamada heap. Esta se utiliza comúnmente cuando el programador sabe cuanta memoria va a utilizar su programa, lo que permite un mejor manejo de la memoría y un programa más eficiente.

12. Explique la diferencia entre new y malloc en C++. ¿Cuándo debería utilizar uno sobre el otro?

Por un lado el comando new asigna una dirección de memoria a una variable dependiendo de su tipo, donde podrá almacenar sus datos, mientras que el comando malloc asigna un bloque de memoria de un tamaño en bytes declarado por el usuario, a este se le debe hacer casting al tipo de dato con el que se trabajará. Se debería utilizar malloc si se es consciente que se debe realizar alguna reasignación de memoria en algún punto del programa,si no es así, se puede trabajar con new.

13. ¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?

Una fuga de memoria se da cuando se solicita un segmento de memoria, este se utiliza y al terminar de utilizarlo este no se limpia, esto impide que ese segmento de memoria pueda ser utilizado por otros. Para evitar esto en C++ se debe tener la buena práctica de limpiar los segmentos de memoria utilizados cuando ya no se trabaja más con ellos.

14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.

En este caso el smart pointer es una clase con un puntero, un destructor y operadores sobrecargados, la idea es crear un puntero al que se le asignará un espacio de memoria y que de forma automática cuando su alcance en en programa termine se limpiará solo el espacio de memoria asignado, un ejemplo de esto se muestra a continuación, ejemplo tomado de [3]:

```
/*Ejemplo tomado de https://www.geeksforgeeks.org/smart-pointers-cpp/*/

#include <iostream>
using namespace std;
 
class SmartPtr {
    int* ptr; // Pointer al que se asignará un espacio de memoria
public:

    /*Se crea el constructor, la palabra explicit provoca que el contructor no convierta tipos implicitamente*/
    explicit SmartPtr(int* p = NULL) { ptr = p; }
 
    // Destructor que liberará el espacio de memoria
    ~SmartPtr() { delete (ptr); }
 
    // Operador sobrecargado, encargado de la dereferencia del puntero
    int& operator*() { return *ptr; }
};
 
int main()
{
    SmartPtr ptr(new int());
    *ptr = 20;
    cout << *ptr;
    
    //Despues de su uso la memoria se liberará automáticamente

    return 0;
}
```

15. ¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?

Ambos comandos son utilizados para limpiar la memoria que se solicita con el comando new pero se utiliza en casos diferentes, el comando *delete* se utiliza cuando queremos limpiar la memoria asignada a una variable, mientras que el comando *delete[]* se utiliza cuando se quiere limpiar la memoria asignada a un arreglo, ya que si se usara el comando *delete* en un arreglo, solo se liberaría el espacio de memoria utilizado por el primer elemento del arreglo.

## Referencias bibliográficas

[1] Barcelona Geeks. (2022, Jul 5). Abstracción en C++. [Online]. Obtenido de https://barcelonageeks.com/abstraccion-en-c/. [Accedido Ene. 13, 2024].

[2] Barcelona Geeks. (2022, Jul 5). Funciones virtuales y polimorfismo en tiempo de ejecución en C++. [Online]. Obtenido de https://barcelonageeks.com/funciones-virtuales-y-polimorfismo-en-tiempo-de-ejecucion-en-c-conjunto-1-introduccion/. [Accedido Ene. 13, 2024].

[3] GeeksforGeeks. (2024, Jan 11). Smart Pointers in C++. [Online]. Obtenido de https://www.geeksforgeeks.org/smart-pointers-cpp/. [Accedido Ene. 13, 2024].





