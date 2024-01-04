#include <iostream>
using namespace std;

int main() {
    
    /*Se declaran variables*/
    int number = -5;

    /**
    En este caso se mostrara en pantalla el mensaje dentro del else ya que es la condición que se cumple
    de las tres propuestas
    **/
    if (number > 0) {
        cout << "El numero declarado es mayor a 5";
    }
    else if (number == 0) {
        cout << "El numero declarado es igual a 0";
    }
    else {
        cout << "El numero declarado es menor a 0";
    }

    return 0;

}