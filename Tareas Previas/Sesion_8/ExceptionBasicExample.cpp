#include <iostream>
using namespace std;

int main() {

    // Se declaran las variables
	double numerator, denominator, divide;

    // Se solicita al usuario el numerador y se almacena
	cout << "Enter numerator: ";
	cin >> numerator;

    // Se solicita al usuario el denominador y se almacena
	cout << "Enter denominator: ";
	cin >> denominator;

    // Se revisa si el denominador es 0
	try {
		if (denominator == 0)
			throw 0; //Si el denominador es 0 se mostrara una excepcion, en este caso el argumento de throw sera 0
                    // Con throw se brinca al bloque de catch que se encarga de manejar la excepcion

		//Si no hay ningun problema se realizara la division de valor
		divide = numerator / denominator;
		cout << numerator << " / " << denominator << " = " << divide << endl;
	}

    // Si throw no se lanza el bloque de catch no se ejecuta
	catch (int num_exception) { //Catch recibe el argumento que se "lanza" por el comando throw, el cual indica que fue el problema que sucedio 
		cout << "Error: Cannot divide by " << num_exception << endl; //Se imprime el problema que sucedio
	}

	return 0;
}
