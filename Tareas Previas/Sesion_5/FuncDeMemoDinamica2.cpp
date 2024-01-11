#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //Se declara un pointer
	int *ptr;
    // Se inicializa un pointer, se le asigna un bloque de memoria en el heap iniciadose en cero
	ptr = (int *)calloc(5, sizeof(int)); //(Cuantos elementos quiere asignar, de que tamano(Entero de la arquitectura donde se trabaja))
	//Si no es un valor correcto se presenta un error
    if (!ptr) {
		cout << "Memory Allocation Failed";
		exit(1); //Sistema operativo reconoce un error
	}

    // Se inicializan los valores
	cout << "Initializing values…" << endl
		<< endl;
	for (int i = 0; i < 5; i++) {
		ptr[i] = i * 2 + 1;
	}

    //Se imprimen los contenidos de los elementos
	cout << "Initialized values" << endl;
	for (int i = 0; i < 5; i++) {
		/* ptr[i] and *(ptr+1) can be used interchangeably */
		cout << *(ptr + i) << endl;
	}

    // Se libera la memoria para reutilizarse
	free(ptr);
	return 0;
}
