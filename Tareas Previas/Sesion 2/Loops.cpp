#include <iostream>
using namespace std;

int main(){

    /*Se inicializan las variables a utilizar en el codigo*/
    int num_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y = 1;
    int x = 1;

    cout << "Primer for" << endl;
    /*El for va a recorrer el valor de i = 1 hasta i = 5, en cada ciclo se le suma 1 a i*/
    for (int i = 1; i <= 5; ++i) {
        cout << i << endl;
    }

    cout << "\nSegundo for" << endl;
    /*El for recorre todos los valor del array num_array*/
    for (int n : num_array) {
        cout << n << endl;
    }

    cout << "\nWhile" << endl;
    /**While toma una variable inicializa, se le da una condicion de salida y en cada ciclo se busca 
    llegar a esta condicion en el cuerpo del while se da la condicion**/
    while (y <= 5) {
        cout << y << endl;
        ++y;
    }
    
    cout << "\ndo-While" << endl;
    /*El do-while se ejecuta minimo una vez, luego revisa las condiciones*/
    do {
        cout << x <<  endl;
        ++x;
    }
    while (x <= 5);

    return 0;
}