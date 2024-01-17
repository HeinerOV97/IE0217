/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialAudiovisual.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "MaterialAudiovisual.hpp"

MaterialAV::MaterialAV(string titulo, string grupo, string tipoDeMaterial, string autor,
    string genero, string duracion, string estado, string precio) :
    MaterialesCompl(titulo, grupo, tipoDeMaterial, autor, genero, estado, precio), duracion(duracion){
     
    this->duracion = duracion;
}

void MaterialAV::imprimeInfo(){}
void MaterialAV::ext(){}