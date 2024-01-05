#include <iostream>
using namespace std;

/*Paso de parámetros con punteros*/

/*Funcion encargada se intercambiar valores, se utilizan punteros*/
void swap(int* n1, int* n2) {
    int temp;
    temp = *n1; // En temp se guarda en contenido de la direccion a la que apunta el puntero n1
    *n1 = *n2; // Mismo caso anterior, el contenido de la direccion a la que apunta el puntero n2, 
              // se guarda en el contenido de la direccion a la que apunta el puntero n1
    *n2 = temp;
}

int main() {
    /*Se inicializan variables*/
    int a = 1, b = 2;

    /*Se muestran los valores sin hacer el cambio de lugar*/
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    /*Se llama a la funcion encargada de hacer el cambio*/
    swap(a, b);

    /*Se muestran los valores luego de hacer el cambio de lugar*/
    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}