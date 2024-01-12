#include <iostream>
#include <vector>
using namespace std;

//Iteradores de acceso aleatorio tienen todas las propiedas de los iteradores bidireccionales y el acceso aleatorio
//Esto no quiere decir que da valores aleatorios, lo que significa es que el tiempo de acceso es constante

int main() {

	// Se crea un vector y se agregan valores
	vector<int> vec{1, 2, 3, 4};

	//  Se crea un iterador que apunte al inicio del vector
	vector<int>::iterator itr_first = vec.begin();
	//  Se crea un iterador que apunte al final del vector
	vector<int>::iterator itr_last= vec.end() - 1; // es - 1 porque end() apunta a un valor luego del ultimo valor del vector

	// Se imprimen valores dentro del vector utilizando los iteradores, se utilizan las dereferencias para obtener los valores
	cout << "First Element: " << *itr_first << endl; // Primer elemento
	cout << "Second Element: " << itr_first[1]<< endl; // Segundo elemento

	cout << "Second Last Element: " << *(itr_last - 1) << endl; //Penultimo valor
	cout << "Last Element: " << *(itr_last) << endl; //Ultimo valor

return 0;
}
