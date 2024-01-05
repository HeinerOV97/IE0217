#include <iostream>
using namespace std;

int main() {

    /*Se declara variable entera*/
    int var = 2050;
    
    /*Se declara un puntero*/
    int* ptr_var;

    /*Al puntero declarado se le asigna la direccion de var*/
    ptr_var = &var;

    /*Se muestra el valor de var y su direccion*/
    cout << "var: " << var << ", ptr_var: " << ptr_var << endl;

    /*Se declara un puntero que apunte a la direccion de un puntero*/
    int**ptr_ptr_var;
    ptr_ptr_var = &ptr_var;

    /*Se muestra la direccion del puntero ptr_var, por medio del valor en el segundo puntero ptr_ptr_var*/
    cout << "ptr_ptr_var: " << ptr_ptr_var << endl;

    /*Se muestra la direccion del puntero ptr_var dada por su referencia para verificar*/
    cout << "&ptr_var: " << &ptr_var << endl;

    /*Se muestra la direccion del puntero ptr_ptr_var dada por su referencia*/
    cout << "&ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}