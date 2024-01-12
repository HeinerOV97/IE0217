#include <iostream>
#include <stack>
using namespace std;

int main() {

	// Se crea un stack de enteros, que es un ejemplo de contenedor adaptado
	stack<int> numbers;

	// Se agregan valores al stack por medio del comando push, en este caso el primero en salir seria el 10, por el comportamiento de los stack
    //Ultimo en entrar, primero en salir
	numbers.push(1); 
	numbers.push(100);
	numbers.push(10);

	cout << "Numbers are: ";

	//Este while verificara que el stack no este vacio, primeramente mostrara el valor en el top del stack y luego lo removera
	while(!numbers.empty()) {
		// Se imprime el elemento en el top del stack
		cout << numbers.top() << ", ";

		// Se elimina el elemento en el top del stack
		numbers.pop();
	}
	return 0;
}
