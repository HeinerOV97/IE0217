/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialOrdenado.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "MaterialOrdenado.hpp"

void MaterialOrdenado::AgregarMaterial(MaterialesCompl* mat) {
    material.push_back(mat);
}

void MaterialOrdenado::imprimirDatos() {
    for (const auto& mat : material) {
        mat->imprimeInfo();
        mat->ext();
    }
}

void MaterialOrdenado::borrarMaterial(string elemento) {

    int i=0; 
    for (const auto& mat : material) {
        if(mat->titulo == elemento){
            delete material[i];
            material.erase(material.begin() + i);
        }
        i = i + 1;
    }
}

void MaterialOrdenado::imprimirInformacionTit(string tituloMat) {

    for (const auto& mat : material) {
        if (mat->titulo == tituloMat){
            mat->imprimeInfo();
            mat->ext();
        }
    }
}

void MaterialOrdenado::imprimirInformacionTip(string tipoMat) {
        for (const auto& mat : material) {
        if (mat->tipoDeMaterial == tipoMat){
            mat->imprimeInfo();
            mat->ext();
        }
    }
}



