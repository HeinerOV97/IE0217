#include <iostream>
using namespace std;

int main() {
    /*Se define un arreglo de tres elementos de tipo flotante*/
    float arreglo[3];

    /*Se define una variable flotante puntero*/
    float *puntero;

    cout << "Displaying address using arrays: " << endl;
    /*Se definen las direcciones de los diferentes elementos del array con el simbolo &*/
    for (int i = 0; i < 3; ++i) {
        cout << "&arreglo[" << i << "] = " << &arreglo[i] << endl;
    }

    /*Se asignan las direcciones de los elementos del array a la variables puntero*/
    puntero = arreglo;

    cout << "\nDisplaying address using pointers: " << endl;
    /*Se definen las direcciones de los diferentes elementos del array con punteros*/
    for (int i = 0; i < 3; ++i) {
        cout << "puntero + " << i << " = " << puntero + i << endl;
    }

    return 0;

}