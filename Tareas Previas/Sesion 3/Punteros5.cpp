#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

/*Este es el mismo codigo que el archivo Punteros4.cpp, pero en este caso para asignar valores por medio de punteros de utiliza el simbolo
-> ya que este permite un mejor orden y menos posibilidades de error al momento de realizar el codigo.*/

int main() {
    /*Se crean dos variables una Distancia Puntero, una tipo Distancia*/
    Distance *ptr, d;

    /*Se asigna a la variable Distancia Puntero la direccion de la variable Distancia*/
    ptr = &d;
    
    cout << "Enter feet: ";
    cin >> ptr->feet; //En el contenido de la direccion a la que apunta el puntero ptr se agrega el valor dado por el usuario a la variable feet
    cout << "Enter inch: "; //En el contenido de la direccion a la que apunta el puntero ptr se agrega el valor dado por el usuario a la variable inch
    cin >> ptr->inch;

    /*Se imprimen los valores dados por el usuario*/
    cout << "Displaying information." << endl;
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches";

    return 0;
}