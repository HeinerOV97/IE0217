#include <iostream>
#include <vector>
using namespace std;

int main() {

	//Se crea un vector de tipo entero y se agrega la informacion que tendra, este almacena la informacion de forma secuencial
	vector<int> numbers = {1, 100, 10, 70, 100};

	// Esto imprime los valores dentro del vector
	cout << "Numbers are: ";
	for(auto &num: numbers) { //Sintaxis moderna de C++ por medio de esta se acceda a cada uno de los elementos en el vector
		cout << num << ", "; //Se imprime el valor
	}

	return 0;
}
