#include <iostream>
using namespace std;

/*Dos funciones pueden tener el mismo nombre si el numero y/o tipo de argumentos pasados es diferente*/

/*Se crean una funcion que recibe un argumento de tipo flotante*/
float absolute(float var) {
    if (var < 0.0)
        var = -var;
    return var;
}

/*Se crean una funcion que recibe un argumento de tipo entero*/
int absolute(int var) {
    if (var < 0)
        var = -var;
    return var;
}

int main() {
    /*Resultado de la funcion de tipo entero*/
    cout << "Absolute value of -5 = " << absolute(-5) << endl;
    /*Resultado de la funcion de tipo flotante*/
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;
    return 0;
}