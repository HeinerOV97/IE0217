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