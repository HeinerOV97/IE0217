#include <iostream>
using namespace std;

/*Se declara variable global, se debe tener cuidado con su uso, funcionan en diferentes funciones*/
int g;

int main() {
    /*Se declaran variables locales, solo funcionan dentro de la funcion*/
    int a, b;
    int c;

    /*Se inicializan las variables*/
    a = 10;
    b = 20;

    /*Se suman a y b, y se guardan dentro de una variable local*/
    c = a + b;

    /*Se suman a y b, y se guardan dentro de una variable global*/
    g = a + b;

    cout << "Resultado en variable local: " << c << endl
         << "Resultado en variable global: " << g << endl;

    return 0;
    
}