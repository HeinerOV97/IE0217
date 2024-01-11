#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    //Se declaran punteros
	float *ptr, *new_ptr;

    //Se asigna un bloque de memoria
	ptr = (float*) malloc(5 * sizeof(float)); //bytes = 5 por el tamano de un flotante
	//Si falla la asignacion de memoria se declara un error
    if(ptr == NULL) {
		cout << "Memory Allocation Failed";
		exit(1);
	}

	// Se inicializa cada elemento del bloque se memoria, se agregan datos en las direcciones
	for (int i = 0; i < 5; i++) {
		ptr[i] = i * 1.5;
	}

	// Se realiza una reasignacion de memoria utilizando realloc
	new_ptr = (float*) realloc(ptr, 10 * sizeof(float)); //bytes = 10 por el tamano de un flotante
	//Si falla la asignacion de memoria se declara un error
    if(new_ptr == NULL) { 
		cout << "Memory Re-allocation Failed";
		exit(1);
	}

	/* // Se inicializa cada elemento del bloque se memoria reasignado, se agregan datos en las direcciones */
	for (int i = 5; i < 10; i++) {
		new_ptr[i] = i * 2.5;
	}

    //Se imprimen los valores de las 10 secciones del bloque
	cout << "Printing Values" << endl;

	for (int i = 0; i < 10; i++){
		cout << new_ptr[i] << endl;
	}

    //Se libera la memoria
	free(new_ptr);

	return 0;
}
