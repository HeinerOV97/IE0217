/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialLectura.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "MaterialLectura.hpp"

MaterialLectura::MaterialLectura(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
                            string genero, string estado, string cantidadHojas, string precio) :
                            MaterialesCompl(titulo, grupo, tipoDeMaterial, autor, genero, estado, precio), editorial(editorial), cantidadHojas(cantidadHojas){

    this->editorial = editorial; // Se almacena en editorial el string de editorial recibido 
    this->cantidadHojas = cantidadHojas; // Se almacena en cantidadHojas el string de cantidadHojas recibido 
    
}

// Se inicializan funciones virtuales
void MaterialLectura::imprimeInfo(){}
void MaterialLectura::ext(){}


