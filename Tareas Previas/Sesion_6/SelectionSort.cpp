//  Selection sort en C++

#include <iostream>
using namespace std;

// Esta funcion intercambia la posicion de dos valores 
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Funcion utilizada para imprimir los valores del array
void printArray(int array[], int size) {
	for (int i = 0; i < size; i ++) {
		cout << array[i] << " "; 
	}
	cout << endl;
}

// Funcion encargada del proceso de Selection Sort
void selectionSort(int array[], int size) {
    // Revisa los valores dentro del arreglo
	for (int step = 0; step < size - 1; step++) {
		int min_idx = step; //Ubica el indice menor
        //Este for compara los valores en el array
		for (int i = step + 1; i < size; i++) {

			// Condicional para ubicar el valor menor en cada ciclo.
			if (array[i] < array[min_idx])
				min_idx = i;
		}

		// Coloca el valor menor en el indice indicado
		swap(&array[min_idx], &array[step]);
	}
}

int main() {
    //Se agregan datos al array
	int data[] = {20, 12, 10, 15, 2};

    // Se encuentra el tamano del array
	int size = sizeof(data) / sizeof(data[0]);
    
    // Se realiza el proceso del Selection Sort
	selectionSort(data, size);

    //Se imprime el array ordenado
	cout << "Sorted array in Acsending Order:\n";
	printArray(data, size);
}
