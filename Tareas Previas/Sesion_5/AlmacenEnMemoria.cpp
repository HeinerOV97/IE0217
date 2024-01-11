#include <iostream>

/* Se inicializa una variable global y se almacena en el segmento de data. */
int globalVariable = 42;

int main() {
    
    /* Se inicializa una variable local y se almacena en el segmento de stack. */
    int stackVariable = 10;

    /* Se almacena una variable en el heap, por medio de la sentencia heap*/
    int* heapVariable = new int(20);

    std::cout << "Valor de globalVariable: " << globalVariable << std::endl;
    std::cout << "Valor de stackVariable: " << stackVariable << std::endl;
    std::cout << "Valor de heapVariable: " << *heapVariable << std::endl;

    /* Liberar la memoria asignada en el heap. Esto se realiza cuando ya el proceso fue terminado. 
    Se libera para que se utilice para otra cosa */
    delete heapVariable;

    /*Return se guarda en el segmento de memoria de codigo*/
	return 0;
}
