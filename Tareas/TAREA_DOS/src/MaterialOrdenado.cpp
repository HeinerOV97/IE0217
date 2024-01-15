#include "MaterialOrdenado.hpp"

void MaterialOrdenado::AgregarMaterial(MaterialesCompl* mat) {
    material.push_back(mat);
}

void MaterialOrdenado::imprimirDatos() {
    for (const auto& mat : material) {
        mat->imprimeInfo();
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

    /*
    if (elemento >= 0 && elemento < material.size()) {
    delete material[elemento];
    material.erase(material.begin() + elemento);
    */
}

