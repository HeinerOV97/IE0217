#include <iostream>
#include <set>
using namespace std;

int main() {

/* Se crea un set de tipo entero. Y se agrega su informacion. Este almacena los elementos en orden, 
pero esta estructura no permite numeros repetidos dentro de el se guardaria los valors 1, 10, 70, 100 */
	set<int> numbers = {1, 100, 10, 70, 100};

	// Esto imprime los valores dentro del set
	cout << "Numbers are: ";
	for(auto &num: numbers) { //Sintaxis moderna de C++ por medio de esta se acceda a cada uno de los elementos en el vector
		cout << num << ", "; //Se imprime el valor
	}

	return 0;
}
