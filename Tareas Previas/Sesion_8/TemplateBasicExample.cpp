#include <iostream>
using namespace std;

//Se crea un template que da la oportunidad de pasar a una funcion diferentes tipos de datos
template <typename T>
T add(T num1, T num2) { //T es el argumento de un template que acepta tipos diferentes de datos, no es una letra especial, puede ser cualquier cosa
	return (num1 + num2);
}

int main() {

    // Se declaran variables que almacenaran los resultados datos por la funcion
	int result1;
	double result2;

	// Se llama la funcion con enteros la sintaxis es functionName(type)(arguments) 
	result1 = add<int>(2, 3);
	cout << result1 << endl; // Se imprime el resultado

	// Se llama la funcion con enteros la sintaxis es functionName(type)(arguments) 
	result2 = add<double>(2.2, 3.3);
	cout << result2 << endl; // Se imprime el resultado

	return 0;
}
