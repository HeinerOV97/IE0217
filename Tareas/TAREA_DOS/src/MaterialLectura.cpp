#include "MaterialLectura.hpp"

MaterialLectura::MaterialLectura(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
                            string genero, string estado, string cantidadHojas, string precio) :
                            MaterialesCompl(titulo, grupo, tipoDeMaterial, autor, genero, estado, precio), editorial(editorial), cantidadHojas(cantidadHojas){

    this->editorial = editorial;
    this->cantidadHojas = cantidadHojas;
    
}

void MaterialLectura::imprimeInfo(){}


