/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file main.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

// Encabezados necesarios para ejecutar el programa
#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialLectura.hpp"
#include "menu.hpp"


int main() {

    while(1){
        mostrarMenu(); //Llama a la funcion encargada de mostrar el menu al usuario
        elegirOpcion(); //Llama a la funcion que permite al usuario elegir opciones en el menu
    }

    return 0;
}