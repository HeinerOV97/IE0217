/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "MaterialesCompl.hpp"

// Se iniciliza el constructor
MaterialesCompl::MaterialesCompl(string titulo, string grupo, string tipoDeMaterial, string autor, 
            string genero, string estado, string precio){
    
    this->titulo = titulo; // Se almacena en titulo el string de titulo recibido 
    this->grupo = grupo; // Se almacena en grupo el string de grupo recibido 
    this->tipoDeMaterial = tipoDeMaterial; // Se almacena en tipoDeMaterial el string de tipoDeMaterial recibido
    this->autor = autor; // Se almacena en autor el string de autor recibido 
    this->genero = genero; // Se almacena en genero el string de genero recibido 
    this->estado = estado; // Se almacena en estado el string de estado recibido 
    this->precio = precio; // Se almacena en precio el string de precio recibido 

}

// Se inicializan funciones virtuales
void MaterialesCompl::imprimeInfo(){}
void MaterialesCompl::ext(){}