/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file main.cpp
 * @date 09/01/2024
 * @author Heiner Obando Vega
*/

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
