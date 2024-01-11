#include <iostream>

int main() {

    // Se declara un puntero
    int* pointVar;

    // El comando new devuelve una direccion de memoria apartada para la variable por eso se guarda en un puntero
    pointVar = new int;

    // Se asigna un valor en la direccion de memoria
    *pointVar = 45;

    // Se imprime el valor guardado en memoria
    std::cout << *pointVar;

    // Se libera la memoria para que se utilice en otra cosa 
    delete pointVar;

    return 0;

}