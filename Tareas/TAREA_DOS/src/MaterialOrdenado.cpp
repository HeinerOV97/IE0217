/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialOrdenado.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "MaterialOrdenado.hpp"

void MaterialOrdenado::AgregarMaterial(MaterialesCompl* mat) {
    material.push_back(mat); // Se agrega un elemento al final del vector
}

void MaterialOrdenado::imprimirDatos() {
    /*
    Se realiza un recorrido por todos los elementos del vector para imprimir su informacion a partir del metodo imprimeInfo que trabaja con el
    metodo imprimeInfo virtual de las clases padre para ser sustituido dependiento de la clase hijo que lo llame
    ademas tambien se imprime la extension del material a partir de la informacion solicita
    */
    for (const auto& mat : material) {
        mat->imprimeInfo();
        mat->ext();
    }
}

void MaterialOrdenado::borrarMaterial(string elemento) {

    /*
    Se crea una variable igual cero que acompane a cada uno de los elementos del recorrido que se realiza de manera automatica
    por todos los elementos del vector con el comando auto, esto para ubicar el elementos que se desea eliminar del vector, 
    ademas de limpiar el espacio de memoria utilizado para el elemento. Para ubicar que elementos se desea borrar se recibe
    el titulo del elementos que se desea borrar y se compara por cada uno de los elementos de la base de datos
    */
    int i=0; 
    for (const auto& mat : material) {
        if(mat->titulo == elemento){
            delete material[i]; // Este y el siguiente comando van acompanados para limpiar el espacio del vector que se desea
            material.erase(material.begin() + i);
        }
        i = i + 1;
    }
}

void MaterialOrdenado::imprimirInformacionTit(string tituloMat) {

    /*
    Se recibe el titulo del elemento que se desea buscar, luego este se compara con el titulo de cada uno de los elementos
    y si coincide se imprime la informacion del material, ademas de su extension. El recorrido se realiza con el comando auto que
    recorre cada elemento del vector de manera automatica 
    */
    for (const auto& mat : material) {
        if (mat->titulo == tituloMat){
            mat->imprimeInfo();
            mat->ext();
        }
    }
}

void MaterialOrdenado::imprimirInformacionTip(string tipoMat) {

    /*
    Se recibe el tipo del elemento que se desea buscar, luego este se compara con el tipo de cada uno de los elementos
    y si coincide se imprime la informacion del material, ademas de su extension. El recorrido se realiza con el comando auto que
    recorre cada elemento del vector de manera automatica 
    */    
    for (const auto& mat : material) {
        if (mat->tipoDeMaterial == tipoMat){
            mat->imprimeInfo();
            mat->ext();
        }
    }
}



