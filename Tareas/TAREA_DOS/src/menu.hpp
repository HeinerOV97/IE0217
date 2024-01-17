/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file menu.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MENU_HPP
#define MENU_HPP
#include <string>
#include <iostream>
#include <limits>
#include "MaterialOrdenado.hpp"
using namespace std;

/**
 * @brief mostraMenu Muestra el menu de opciones al usuario no recibe parametros
*/
void mostrarMenu();
void elegirOpcion();
void almacenarDatos();
void almacenaMatLec();
void almacenaMatAV();
void borrarMatPorTit();
void buscarMatPorTit();
void buscarMatPorTip();

#endif