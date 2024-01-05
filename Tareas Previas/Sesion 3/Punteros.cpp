#include <iostream>
using namespace std;

int main() {
    
    /*Se declara una variable de tipo entero*/
    int var = 5;

    /*Se declara una variable de tipo puntero*/
    int* pointVar;

    /*Se inicializa la variable de tipo puntero con el valor de la direccion de var, no se le puede agregar un valor que no sea una direccion*/
    pointVar = &var;

    /*Se imprime el valor de la variable entera*/
    cout << "var = " << var << endl;

    /*Se imprime la direccion de la variable entera*/
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    /*Se imprime la direccion del puntero pointVar*/
    cout << "pointVar = " << pointVar << endl;

    /*Se imprime el contenido de la direccion a la que apunta el puntero pointVar*/
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}