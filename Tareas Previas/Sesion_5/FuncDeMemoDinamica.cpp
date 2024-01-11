#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	// Se asigna un bloque de memoria de tamano enterno a un puntero, se hace casting a int* malloc devuelve un void*
	int* ptr = (int*) malloc(sizeof(int)); //Recibe en bytes el tamano de la memoria que quiere almacenar, sizeof recibe un tipo esto ayuda en diferentes arquitecturas

	// Se guarda un valor en el bloque de memoria asignado
	*ptr = 5;

    // Se imprime el valor
	cout << *ptr;

	return 0;
}


