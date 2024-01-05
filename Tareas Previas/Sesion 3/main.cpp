#include <iostream>
/*Se incluye el encabezado de la funcion*/
#include "sum.hpp"
using namespace std;

/*Main es la funcion que va a buscar el compilador*/
int main() {
    int num1 = 5;
    int num2 = 3;
    int result = sum(num1, num2);
    cout << "El resultado de la suma de " << num1 << " + " << num2 << " es igual a: " << result << endl;

    return 0;

}