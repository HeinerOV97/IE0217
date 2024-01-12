#include <iostream>		// std: :cout
#include <algorithm>	// std: :sort
#include <vector>		// std: :vector

// Funcion que devuelve un booleado comparando dos valores
bool  myfunction (int i,int j) { return (i<j); }

//Se crea una estructura dentro tiene un operador y retorna un booleado
struct myclass {
	bool operator() (int i,int j) { return (i<j); }
} myobject;

int main() {
	int myints[] = {32,71,12,45,26,80,53,33}; //Se crea un arreglo de enteros
    
    // Se crea un vector que comienza en el primer valores del arreglo anterior hasta el ultimo valor del mismo arreglo
	std::vector<int> myvector (myints, myints+8);		// 32 71 12 45 26 80 53 33

	// el comando sort ordena el vector desde el primer elemento hasta el cuarto elemento (utiliza el operador < por defecto)
	std::sort (myvector.begin(), myvector.begin()+4);	// (12 32 45 71) 26 80 53 33

	// Se le indica que ordene los numeros del cuarto valor al final de mayor a menor pero utilizando una funcion auxiliar
	std::sort (myvector.begin()+4, myvector.end(), myfunction);	 // 12 32 45 71 (26 33 53 80)

	// Se le indica que ordene todo el vector utilizando una estructura de comparasion como auxiliar
	std::sort (myvector.begin(), myvector.end(), myobject);  // (12 26 32 33 45 53 71 80)

	// Se imprimen los valores dentro del vector utilizando un iterador
	std::cout << "myvector contains:" ;
	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
		std::cout << " "<< *it;
	std::cout << "\n";

	return 0;
} 
