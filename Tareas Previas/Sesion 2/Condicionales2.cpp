#include <iostream>
using namespace std;

int main() {
    
    /*Se declaran variables*/
    int number = -5;

    /**
    En este caso se mostrara en pantalla el mensaje dentro del else ya que -5 es menor a cero, 
    en caso contrario el codigo mostraria el texto dentro del if
    **/
    if (number > 0) {
        cout << "El numero declarado es mayor a 5";
    }
    else {
        cout << "El numero declarado es menor a 0";
    }

    return 0;

}