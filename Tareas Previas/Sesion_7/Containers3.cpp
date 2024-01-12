#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

	/* Se crea un unordered_set de tipo entero. Guarda los numeros sin un sentido de orden. En este caso no se repiten los numeros en el
    porque es de categoria set */
	unordered_set<int> numbers = {1, 100, 10, 70, 100};

	// print the unordered_set
	cout << "Numbers are: ";
	for(auto &num: numbers) {
		cout << num << ", ";
	}

	return 0;
}
