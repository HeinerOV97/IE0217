#include <iostream>
using namespace std;

int main() {
    
    //Se declaran las variables a utilizar en el codigo
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    //Se solicita al usuario el indice del arreglo
    cout << "Enter array index: ";
    cin >> index;

    try {

        //Se lanza un error si se elige un arreglo fuera de los limites
        if (index >= 4)
            throw "Error: Array out of bounds!"; //Si el indice esta fuera de los limites este sera el mensaje de error enviado
                                                // Con throw se brinca al bloque de catch que se encarga de manejar la excepcion

        //Si el indice no es mayor se reciben el numerador y el denominador y se almacenan
        cout << "Enter numerator: ";
        cin >> numerator;

    	cout << "Enter denominator: ";
	    cin >> denominator;

        // Se revisa si el denominador es 0
        if (denominator == 0)
			throw 0; //Si el denominador es 0 se mostrara una excepcion, en este caso el argumento de throw sera 0
                    // Con throw se brinca al bloque de catch que se encarga de manejar la excepcion

        // Si no sucede ningun problema se guardara en el indice del array elegido la division
		arr[index] = numerator / denominator;
        cout << arr[index] << endl;
    }

    //Se sabe que catch llamar por el tipo de variable que se utiliza
    //Este catch es llamado si el indice elegido para el arreglo excedio el limite
    catch (const char* msg) {
        cout << msg << endl;
    }

    //Este catch es llamado si el denominador es cero
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;
    }

    //Este catch funciona si sucede alguna excepcion no esperada, alguna "alocacion de memoria" por ejemplo
    catch (...) {
        cout << "Unexpected exception!" << endl;
    }
}