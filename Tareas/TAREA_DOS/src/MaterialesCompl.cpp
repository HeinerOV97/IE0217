/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "MaterialesCompl.hpp"

MaterialesCompl::MaterialesCompl(string titulo, string grupo, string tipoDeMaterial, string autor, 
            string genero, string estado, string precio){
    
    this->titulo = titulo;
    this->grupo = grupo;
    this->tipoDeMaterial = tipoDeMaterial;
    this->autor = autor;
    this->genero = genero;
    this->estado = estado;
    this->precio = precio;

}

void MaterialesCompl::imprimeInfo(){}
void MaterialesCompl::ext(){}