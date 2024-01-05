#include <iostream>
using namespace std;

/*Paso de parámetros sin punteros*/

/*Funcion encargada se intercambiar valores, llegan referencias, no es lo mismo que un puntero*/
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
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