#include <iostream>
#include "funciones.hpp"

int main() {

    datosJuego *ptr, datos;
    ptr = &datos;

    while(1){
        mostrarMenu();
        elegirOpcion(ptr, datos);
    }
    return 0;

}
