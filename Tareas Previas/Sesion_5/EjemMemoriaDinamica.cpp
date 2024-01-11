#include <iostream>
using namespace std;

int main() {

	// Se declaran un puntero tipo entero y uno tipo flotante
	int* pointInt;
	float* pointFloat;

	// Se aparte un espacio de memoria para las variables 
	pointInt = new int;
	pointFloat = new float;

	// Se guarda un valor en la direccion de memoria 
	*pointInt = 45;
    *pointFloat = 45.45f;

    // Se imprimen los valores almacenados
    cout << * pointInt << endl;
    cout << * pointFloat << endl;

    // Se liberan los espacios que no se necesitan mas
    delete pointInt;
    delete pointFloat;

return 0;

}
