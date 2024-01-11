// Listas enzaladas en C++

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Se crea el nodo utilizando clases
class Node {
	public:
	int value;
	Node* next; //Apunta al siguiente nodo
};

int main() {
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;

	// Se asigna memoria a los tres nodos utilizandos en el heap, utilizando el operador new
	one = new Node();
	two = new Node();
	three = new Node();

	// Se asignan valores a los nodos
	one->value = 1;
 	two->value = 2;
	three->value = 3;

	// Se conectan los nodos
	one->next = two;
	two->next = three;
	three->next = NULL;

	// Se imprimen los valores de los nodos, se igual head a one que es el primer valor
	head = one;
	while (head != NULL) {
		cout << head->value; //Se imprime valor
		head = head->next; //Se pasa al siguiente nodo
	}
}
