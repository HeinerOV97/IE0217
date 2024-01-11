#include <iostream>
using namespace std;

int main() {

	int num;
	cout << "Enter total number of students: ";
	cin >>num;
	float* ptr;
	
	// Se aparta un espacio de memoria para un numero de estudiantes dado por el usuario, es un array
	ptr = new float[num]; //Nos da la direccion del primer elemento, el de indice cero

    // Se ingresa el GPA por estudiante
	cout << "Enter GPA of students." << endl;
	for (int i = 0; i < num; ++i) {
		cout << "Student" << i + 1 << ": ";
		cin >> *(ptr + i); //Muestra la siguiente ubicacion del siguiente flotante
	}

    //Se muestra el GPA de los estudiantes
	cout << "\nDisplaying GPA of students." << endl;
	for (int i = 0; i < num; ++i) {
		cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
	}
	// Se libera todo el espacio de memoria que se habia almacenado para el array
	delete[] ptr;

	return 0;
}
