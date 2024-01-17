# Práctica Tarea #2

## Ejecución del programa

El programa se ejecutará a través de un Makefile, para ejecutarlo se debe estar ubicado en la carpeta src en el PATH, esta carpeta se encuentra en la carpeta general de la tarea, en esta carpeta se encuentran los archivos de código fuente y el Makefile.

Se solicita que si se presenta algún problema al ejecutar el programa, se revise si se tienen los archivos en una ruta de acceso muy larga, se comprobó que esto podía dar problemas en la ejecución del código.

Como tal si solo se utiliza el comando “mingw32-make" se compilara el codigo, se ejecutara el programa, y el ejecutable será eliminado luego de su uso, tal y como indican las instrucciones de la tarea.

El Makefile, posee cuatro targets que realizan diferentes acciones automatizadas para la facilidad de ejecución del programa, estas cuatro indicaciones son:

- build: Este target se encarga de compilar el código fuente y generar el ejecutable con el nombre Libreria.exe, para su ejecución en Windows se utiliza el comando “mingw32-make build”.

- run: Este target se encarga de ejecutar el programa Libreria.exe, siempre y cuando se haya ejecutado el comando build primero, para su ejecución en Windows se utiliza el comando “mingw32-make run”. 

- clean: Este target se encarga de eliminar los archivos ejecutables y solo dejar los archivos fuente, para su ejecución en Windows se utiliza el comando “mingw32-make clean”. 

- all: Este target se encarga de compilar el código fuente, generar un ejecutable con el nombre Libreria.exe, ejecutar el programa, y eliminar el ejecutable luego de su uso, es decir, este comando realiza los targets build, run y clean en un solo comando. Su ejecución en Windows se lleva acabo con el comando “mingw32-make all”.

Se implementaron los comandos para que el make identifique en que sistema operativo se esta trabajando.

En este caso el código no cuenta con la función de ordenar el material por precio, a partir del uso de bubble sort, las demás funciones solicitadas están todas implementas.

# Teoría Tarea #2

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

En la OOP se puede realizar la creación de abstracciones, esto se trata de proporcionar solo la información importante sobre los datos con los que se trabaja a los demás, ocultando de esta manera los detalles de la implementación. En C++ se puede realizar el proceso de abstracción usando clases o los archivos de encabezado. En el caso de las clases, se utilizan los tipos de acceso mencionados anteriormente para realizar esto, por otra parte, en los archivos de encabezado, se le puede proporcionar a alguien el archivo de encabezado y que este utilice sus métodos, sin interesarle la implementación del código que se realiza para utilizar los métodos.[1]

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

Los métodos virtuales son importantes ya que permiten utilizar versiones de una función dependiendo del objeto que las llame, por ejemplo, en las funciones virtuales, el método de una clase base puede ser o no, sobreescrito por un método de una clase derivada, esto dependiendo de los atributos del objeto que lo llame. Esto se utiliza especialmente cuando un puntero de la clase base apunta a un objeto de una clase derivdad. Este método es utilizado para llevar a cabo el poliformismo en tiempo de ejecución, el cual consiste en que el compilar realiza un enlace tardío donde busca hacer coincidir a un objeto con la función llamada correcta, y ejecuta esto en el tiempo de ejecución.[2]

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

16. ¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?

Los algoritmos de ordenamiento son utilizados para organizar los elementos de una matriz/lista en un orden específico, existen diferentes tipos de estos algoritmos y estos serán utilizados según el fin que se esté buscando. Estos son importantes ya que permiten una búsqueda más eficientes de datos en un conjuto. También el acceso a los datos es más eficiente, ya que al trabajar con datos ordenados el acceso a estos será más rápido. Además estos tienen aplicaciones en otros algoritmos.

17. Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su complejidad temporal en el peor caso?

Este algoritmo lo que hace es recorrer el arreglo las veces necesarias hasta que se cumpla el orden buscado, este va comparando los elementos adyacentes, y si el orden es incorrecto lo que hará será intercambiar los valores de lugar. En este caso su complejidad temporal en el peor de los casos es O(n^2), esto porque tiene que comparar cada par de elementos en todo el arreglo

18. Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cuál es su ventaja principal sobre otros algoritmos de ordenamiento?

Este algoritmo elige un elemento pivote dentro del arreglo analizado, luego de esto divide el arreglo a su alrededor, colocando a su izquierda los valores menores al elemento pivote y a la derecha los mayores, este proceso se repite en todos los sub-arreglos tanto a la izquierda como a la derecha del elemento pivote, hasta que el arreglo tenga el orden deseado.
Su ventaja sobre los otros algoritmos es su complejidad temporal, ya que, en el mejor de los casos su complejidad temporal será O(n*log n), al dividir el arreglo en sub-arreglos, no tendrá que recorrer todo el arreglo para revisar todos los elementos en cada revisión, como lo hacen otros algoritmos como el Bubble Sort con una complejidad temporal en el mejor de los casos de O(n), Selection Sort con una complejidad temporal en el mejor de los casos de O(n^2) o Insertion Sort con una complejidad temporal en el mejor de los casos de O(n), estos últimos tres métodos si deben revisar todo el arreglo varias veces para ordenarlo.

Se debe tener cuidado con este algoritmo de ordenamiento ya que si se elige el pivote equivocado, en el peor de los casos la complejidad temporal puede ser O(n^2).

19. ¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.

Por un lado, los algoritmos estables, estos mantienen el orden de los elementos que poseen valores iguales o claves en un arreglo. Mientras que por otro lado, los algoritmos inestables no buscan mantener estos valores que son iguales o clave en orden.[4] Un ejemplo de esto podría ser el siguiente:

Teniendo el siguiente arreglo: [1, 7a, 15, 7b, 10] (el a y el b, a la par del numero 7 solo es para distinguir cual es primero)

En un algoritmo de ordenamiento estable, la salida sería [1, 7a, 7b, 10, 15], hay un orden entre el primer y el segundo 7 en el arreglo, mientras que en un algoritmo de ordenamiento inestable, la salida podría ser [1, 7b, 7a, 10, 15], estos algoritmos no buscan un orden entre los valores iguales, pueden salir ordenados o no.

- Ejemplos de algoritmos estables son[4]: El Bubble Sort y el Insertion Sort.
- Ejemplos de algoritmos inestables son[4]: El Quick Sort y el Heap Sort.

20. Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cuál es su complejidad temporal y en qué situaciones es preferible su uso?

El algoritmo de de ordenamiento Merge Sort, consiste en tomar un arreglo y dividirlo en dos sub-arreglos, luego cada uno de estos sub-arreglos será ordenado y así sucesivamente, creando más sub-arreglos, al final cada uno de los sub-arreglos se unirá con su respectiva pareja, dejando un arreglo ordenado. En este caso su complejidad temporal es un O(n*log n), ya que este no debe recorrer el arreglo completo varias veces para realizar el proceso de ordenado de los valores en el. [4] 

Este podría ser utilizado en arreglos grandes que requieran ser ordenados, ya que al usar el método de divide y vencerás, realiza el proceso de ordenar de una manera más rápida y eficiente.

## Referencias bibliográficas

[1] Barcelona Geeks. (2022, Jul 5). Abstracción en C++. [Online]. Obtenido de https://barcelonageeks.com/abstraccion-en-c/. [Accedido Ene. 13, 2024].

[2] Barcelona Geeks. (2022, Jul 5). Funciones virtuales y polimorfismo en tiempo de ejecución en C++. [Online]. Obtenido de https://barcelonageeks.com/funciones-virtuales-y-polimorfismo-en-tiempo-de-ejecucion-en-c-conjunto-1-introduccion/. [Accedido Ene. 13, 2024].

[3] GeeksforGeeks. (2024, Jan 11). Smart Pointers in C++. [Online]. Obtenido de https://www.geeksforgeeks.org/smart-pointers-cpp/. [Accedido Ene. 13, 2024].

[4] freeCodeCamp (2024, May 1) Algoritmos de ordenación explicados con ejemplos en JavaScript, Python, Java y C++. [Online]. Obtenido de https://www.freecodecamp.org/espanol/news/algoritmos-de-ordenacion-explicados-con-ejemplos-en-javascript-python-java-y-c/. [Accedido Ene. 13, 2024].






