#include <iostream>
using namespace std;

// Se crea una funcion que realiza el algoritmo de ordenamiento de Bubblesort
void bubbleSort(int array[], int size) {

// Este for accede a cada elemento  del array
    for (int step = 0; step < size; ++step) {
	    // Se utiliza este for para comparar cada elemento del array
	    for  (int i = 0; i < size - step; ++i) {

  		    // Compara los elementos y los intercambia si se cumple la condicion
		    if (array[i] > array[i + 1]) {
			    int temp = array[i];
			    array[i] = array[i + 1];
			    array[i + 1] = temp;
		    }
	    }
    }
}

//Se imprime el array y los datos en el
void printArray(int array[], int size) {
 	for  (int i = 0; i < size; ++i) {
		cout << " " << array[i];
	}
	cout << "\n";
}

int main() {
    //Se agregan datos al array
	int data[] = {-2, 45, 0, 11, -9};

	// Se encuentra el tamano del array
	int size = sizeof(data) / sizeof(data[0]);

    // Se realiza el proceso del Bubble Sort
	bubbleSort(data, size);

    //Se imprime el array ordenado
	cout << "Sorted Array in Ascending Order:\n";
	printArray(data, size);
}


