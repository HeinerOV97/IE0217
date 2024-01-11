// Implementacion de una cola en C++

#include <iostream>
#define SIZE 5

using namespace std;

//Clase cola
class Queue {
	private:
	int items [SIZE], front, rear;

	public:
    //El constructor inicia los valores front y rear en -1
	Queue() {
		front = -1;
		rear = -1;
	}

    //Se revisa si la cola esta llena
	bool isFull() {
		if (front == 0 && rear == SIZE -1) {
			return true;
 		}
		return false;
	}

    //Se revisa si la cola esta vacia
    bool isEmpty() {
	    if (front == -1)
		    return true;
	    else
		    return false;
	}

    // Se agrega un elemento en la cola
    void enQueue(int element) {
        //Se revisa si la cola esta llena
	    if (isFull()) {
		    cout << "Queue is full";
        //Si no esta lleno se agrega un elemento
	    } else {
		    if (front == -1) front = 0;
		    rear ++;
		    items[rear] = element;
		    cout << endl
			    << "Inserted " << element << endl;
	    }
    }

    //Se elimina un elemento de la lista
    int deQueue() {
	    int element;
        //Se revisa si la cola esta vacia
	    if (isEmpty ()) {
		    cout << "Queue is empty" << endl;
		    return (-1);
	    } else {
            //Si no esta vacia se elimina un elemento
		    element = items[front];
		    if (front >= rear) {
			    front = -1;
			    rear = -1;
		    } else {
			    front++;
		    }
		cout << endl
			<< "Deleted -> " << element << endl; //Se indica el elemento borrado
		return (element);
	    }
    }

    //Se muestran los elementos que se encuentran en la cola
    void display() {
		int i;
		if (isEmpty()) {
			cout << endl
				<< "Empty Queue" << endl;
		} else {
			cout << endl
				<< "Front index-> " << front;
			cout << endl
				<< "items -> ";
			for (i = front; i <= rear; i++) {
				cout << items[i] << " ";
			cout << endl
				<< "Rear index-> " << rear << endl;
		    }
        }     
    }    
};

int main() {
    
    //Se instancia el objeto 
	Queue q;
	
	//Se intenta eliminar un elemento de la cola, no se podra porque esta vacia
	q.deQueue();
	
	//Se agregan 5 elementos en la cola
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	q.enQueue(5);

	// Se intenta agregar un sexto elemento pero no se podra porque la cola esta llena
	q.enQueue(6);
	
    // Se muestran los elementos en la cola
    q.display();
	
	// Se elimina el primer elemento que entro en la cola
    q.deQueue();

    // Se muestran los elementos restantes en la cola
    q.display();	

    return 0;
}

