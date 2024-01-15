#include "MaterialAudiovisual.hpp"

MaterialAV::MaterialAV(string titulo, string grupo, string tipoDeMaterial, string autor,
    string genero, string duracion, string estado, string precio) :
    MaterialesCompl(titulo, grupo, tipoDeMaterial, autor, genero, estado, precio), duracion(duracion){
     
    this->duracion = duracion;
}

void MaterialAV::imprimeInfo(){}