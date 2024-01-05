#include <iostream>
using namespace std;

int main() {
    int var = 5;
    int* pointVar;

    /*Se inicializa la variable pointVar con la direccion en la memorio de var*/
    pointVar = &var;

    /*Se imprime el valor de var*/
    cout << "var = " << var << endl;

    /*Se imprime el contenido de la direccion a la que apunta el puntero pointVar*/
    cout << "*pointVar = " << *pointVar << endl;    

    cout << "Changing value of var to 7:" << endl;

    /*Se va a cambiar el valor de var a 7*/
    var = 7;

    /*Se imprime el valor de var*/
    cout << "var = " << var << endl;

    /*Se imprime el contenido de la direccion a la que apunta el puntero pointVar*/
    cout << "*pointVar = " << *pointVar << endl   
         << endl; 

    cout << "Changing value of *pointVar to 16:" << endl;
    
    /*Se va a cambiar el valor de var a 16 pero esta vez a traves del valor al que apunta *pointVar*/
    *pointVar = 16;

    /*Se imprime el valor de var*/
    cout << "var = " << var << endl;

    /*Se imprime el contenido de la direccion a la que apunta el puntero pointVar*/
    cout << "*pointVar = " << *pointVar << endl;

    return 0;

}