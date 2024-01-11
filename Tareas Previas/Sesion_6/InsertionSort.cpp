// Insertion sort en C++

#include <iostream>
using namespace std;

// Funcion utilizada para imprimir los valores del array
void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

// Funcion encargada del proceso de Insertion Sort
void insertionSort(int array[], int size) {
	for (int step = 1; step < size; step++) { //Se inicia en posicion 1 asumiendo que posicion cero esta correcta
		int key = array[step]; //Se obtiene el numero a analizar
		int j = step - 1; //Numero de comparacion a realizar
		
		//Se compara el valor hasta que se encuentre un valor menor que el
		while (key < array[j] && j >= 0) {
			array[j + 1] = array[j];
			--j;
		}
		array[j + 1] = key; //Se realiza el cambio de posicion
	}
}


int main() {
    //Se agregan datos al array
	int data[] = {9, 5, 1, 4, 3};

    // Se encuentra el tamano del array
	int size = sizeof(data) / sizeof(data[0]);

    // Se realiza el proceso del Selection Sort
	insertionSort(data, size);

    //Se imprime el array ordenado
	cout << "Sorted array in ascending order:\n";
	printArray(data, size);
} 
