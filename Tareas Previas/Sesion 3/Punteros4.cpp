#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    /*Se crean dos variables una Distancia Puntero, una tipo Distancia*/
    Distance *ptr, d;

    /*Se asigna a la variable Distancia Puntero la direccion de la variable Distancia*/
    ptr = &d;
    
    cout << "Enter feet: ";
    cin >> (*ptr).feet; //En el contenido de la direccion a la que apunta el puntero ptr.feet se agrega el valor dado por el usuario
    cout << "Enter inch: "; //En el contenido de la direccion a la que apunta el puntero ptr.inch se agrega el valor dado por el usuario
    cin >> (*ptr).inch;

    /*Se imprimen los valores dados por el usuario*/
    cout << "Displaying information." << endl;
    cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches";

    return 0;
}