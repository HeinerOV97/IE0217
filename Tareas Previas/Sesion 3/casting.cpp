#include <iostream>
using namespace std;

/*Casting de tipo implicito*/

int main() {
    /*Se inicializa una variable de tipo entero*/
    int num_int = 9;

    /*Se inicializa una variable de tipo double*/
    double num_double;

    /*Se asigna un valor entero a una variable double, este valor pasa a ser un double*/
    num_double = num_int;

    /*Se imprimen los valores de las variables y su tipo*/
    cout << "num_int = " << num_int << " la variable es de tipo " << typeid(num_int).name() << endl;
    cout << "num_double = " << num_double << " la variable es de tipo " << typeid(num_double).name() << endl;

    return 0;
}