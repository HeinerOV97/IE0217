#include <iostream>
#include "estudiante.hpp"

int main() {
    // Se instancia el objeto de clase estudiante
    Estudiante estudiante("Juan", 20);

    // Se llama al metodo de la clase
    estudiante.mostrarDatos();
    return 0;
}