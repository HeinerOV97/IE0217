#include <iostream>
#include "funciones.hpp"

int main() {

    datosJuego *ptr, datos; //Se crea la variable puntero de tipo datosJuegos y una variable tipo datosJuego
    ptr = &datos; //Se asigna al puntero la direccion en memorio de la variable datos

    while(1){
        mostrarMenu(); //Llama a la funcion encargada de mostrar el menu al usuario
        elegirOpcion(ptr, datos); //Llama a la funcion que permite al usuario elegir opciones en el menu
    }
    return 0;

}
