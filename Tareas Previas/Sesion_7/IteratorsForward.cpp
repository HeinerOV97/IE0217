#include <iostream>
#include <forward_list>
using namespace std;

int main() {

	//Se inicializa un forward list, el cual puede leer y escribir valores mientras itera hacia adelante
	forward_list<int> nums{1, 2, 3, 4};

	/*Se iniciliza el iterador apuntando al valor inicial de la forward list*/
	forward_list<int>::iterator itr = nums.begin();

	//Mientras el iterator es diferente al final del forwards list se realiza el siguiente proceso
	while (itr != nums.end()) {

		// Se accesa al valor al que apunta el iterador
		int original_value = *itr;  

		// Se asigna un nuevo valor al valor que apunta el iterador
		*itr = original_value * 2;

		// Se indica al iterador que apunte al siguiente valor
		itr++;
	}

	// Se imprimen los valores dentro de la lista
	for (int num: nums) {
		cout << num << ", ";
	}

	return 0;
}  
