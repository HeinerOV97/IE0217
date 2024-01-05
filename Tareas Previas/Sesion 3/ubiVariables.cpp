#include <iostream>
using namespace std;

int main() {
    /*Se declaran variables.*/
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;


    /*El simbolo & permite obtener la direccion de una variable, toda variable tiene una direccion en la memoria*/
    /*Se imprime la direccion de var1*/
    cout << "Address of var1: " << &var1 << endl;
    
    /*Se imprime la direccion de var2*/
    cout << "Address of var2: " << &var2 << endl;

    /*Se imprime la direccion de var3*/
    cout << "Address of var3: " << &var3 << endl;

    return 0;

}