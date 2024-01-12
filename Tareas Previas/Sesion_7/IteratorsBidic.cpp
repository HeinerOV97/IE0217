#include <iostream>
#include <list>
using namespace std;

int main() {

	// Se crea una lista de tipo entero con sus valores, es un iterador bidireccional
	list<int> nums {1, 2, 3, 4, 5};

	/*Se iniciliza el iterador apuntando al valor inicial de la forward list*/
	list<int>::iterator itr = nums.begin();

	cout << "Moving forward: " << endl;

	// Se imprimen los valores iterando hacia adelante, mientras el iterador no esta apuntnado al final se mantiene el while
	while (itr != nums.end()) {
		cout << *itr  << ", ";

		// Se indica al iterador que apunte al siguiente valor
		itr++;
	}

	cout << endl << "Moving backward: " <<endl;

	//Por el while anterior el itr quedo apuntando al final
	// Se imprimen los valores iterando hacia atras, mientras el iterador no esta apuntando al inicio se mantiene el while
	while (itr != nums.begin()) {
		if (itr != nums.end()) {
			cout << *itr << ", "; //Se imprimen todos los valores menos el primero
		}
		
		// Se indica al iterador que apunte al valor de atras
		itr--;
 	}
	
	cout << *itr << endl; //Se imprime el primer valor 

	return 0;
}  
