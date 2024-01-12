#include <iostream>
#include <vector>
using namespace std;

/*Forma de declarar un iterador

// create a vector iterator
vector<int>: :iterator vec_itr;

//create a map iterator
Map<char, int>: :iterator map_itr;

*/

/*
// create vector of integer type
vector<int> num {1, 2, 3}

// Error: itr can only be used with integer vectors
vector<double>: :iteratir itr = num.begin();

Los iteradores solo pueden ser utilizados para vectores enteros
*/

/* Sintaxis moderna de C++, ambas lineas realizan los mismo

vector<string>: :iterator itr = languages.begin();
auto itr = languages.begin();

*/

//
int main() {

    // Se crea un vector de tipo entero
	vector <string> languages = {"Python", "C++", "Java"};

	// Es creado un iterador para el vector creado anteriormente, apunta a los elementos dentro del contenedor
	vector<string>::iterator itr;

	//Se muestran los elementos en el vector utilizandos iteradores
	for (itr = languages.begin(); itr != languages.end(); itr++) {
		cout << *itr << ", "; //Se imprime el contenido de la direccion a la que apunta el iterador
	}
	
return 0;
} 
