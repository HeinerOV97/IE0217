// Implementacion de un stack en C++
#include <stdlib.h>
#include <iostream>

using namespace std;

//Se define una constante y una variable global
#define MAX 10 
int size = 0;

// Se crea un stack con una estructura
struct stack {
	int items[MAX];
	int top;
};
typedef struct stack st; //Se define un tipo st, significa un struct stack

//Se crea una pila vacia, recibe un puntero de tipo st
void createEmptyStack(st *s) {
	s->top = -1;
}

// Se verifica si el stack creado esta lleno
int isfull(st *s) {
	if (s->top == MAX - 1)
		return 1; //Es un true
	else
		return 0; // Es un false
}

// Se verifica si el stack creado esta vacio
int isempty(st *s) {
	if (s->top == -1)
		return 1;
	else
		return 0;
}

// Se agregan elementos al stack
void push(st *s, int newitem) {
    //Se verifica si esta llena
	if (isfull(s)) {
		cout << "STACK FULL";
    } else {
    //Si no esta llena se agrega el item
		s->top++;
        s->items[s->top] = newitem;
    }
    size++;
}

// Se eliminan elementos del stack
void pop(st *s) {
    //Se verifica si esta vacia
	if (isempty(s)) {
		cout << "\n STACK EMPTY \n";
    //Si no esta llena se elimina el ultimo elemento
	} else {
		cout << "Item popped = " << s->items[s->top];
        // El indice se top se disminuye en 1
		s->top--;
	}
	size--;
	cout << endl;
}

// Se imprimen elementos que se encuentran en el stack
void printStack(st *s) {
	printf("Stack: ");
	for (int i = 0; i < size; i++) {
		cout << s->items[i] << " ";
	}
	cout << endl;
} 

int main() {

	int ch;
    //Se asigna un bloque de memoria a un puntero la cantidad de bytes es de tamano del struck stack
	st *s = (st *)malloc(sizeof(st));

    //Se crea el stack vacio
    createEmptyStack(s);

    //Se agregan valores al stack
	push(s, 1);
	push(s, 2);
	push(s, 3);
	push(s, 4);

    //Se imprimen los valores
	printStack(s);

    //Se elimina un valor
	pop(s);

    // Se imprimen los valores despues de imprimir uno
	cout << "\nAfter popping out\n";
	printStack(s);
}    


