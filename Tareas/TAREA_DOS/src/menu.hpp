/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file menu.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MENU_HPP
#define MENU_HPP

/* Se agregan encabezados comunes y encabezado de MaterialOrdenado.hpp para trabajar con las clases en el
el encabezado limits es llamado para utilizar el comando numeric_limits dentro del comando cin.ignore para vaciar el buffer*/
#include <string>
#include <iostream>
#include <limits>
#include "MaterialOrdenado.hpp"
using namespace std;

/**
 * @brief mostraMenu Muestra el menu de opciones al usuario no recibe parametros
*/
void mostrarMenu();

/**
 * @brief elegirOpcion Segun la solicitud escogida por el usuario llama a la funcion que cumpla esta solicitud
*/
void elegirOpcion();

/**
 * @brief AlmacenarDatos Consulta al usuarios si desea agregar material de lectura o audiovisual
*/
void almacenarDatos();

/**
 * @brief almacenarMatLec Recibe la informacion necesaria de parte del usuario y llama al metodo de la clase MaterialOrdenado para almacenar el material de lectura
*/
void almacenaMatLec();

/**
 * @brief almacenarMatAV Recibe la informacion necesaria de parte del usuario y llama al metodo de la clase MaterialOrdenado para almacenar el material de lectura
*/
void almacenaMatAV();

/**
 * @brief borrarMatPorTit Recibe el titulo del material que se desea eliminar y llama al metodo de la clase MaterialOrdenado para eliminarlo
*/
void borrarMatPorTit();

/**
 * @brief buscarMatPorTit Recibe el titulo del material que desea buscar y llama al metodo de la clase MaterialOrdenado, para buscarlo
*/
void buscarMatPorTit();

/**
 * @brief buscarMatPorTip Recibe el tipo de material que desea buscar y llama al metodo de la clase MaterialOrdenado, para buscarlo
*/
void buscarMatPorTip();

/**
 * @brief MostrarMatComp Muestra todos los materiales guardados
*/
void MostrarMatComl();

#endif