#include "MaterialAudiovisual.hpp"

MaterialAV::MaterialAV(string titulo, string grupo, string autor, string tipoDeMaterial,
    string genero, int duracion, string estado, double precio){
    
    this->titulo = titulo;
    this->grupo = grupo;
    this->autor = autor; 
    this->tipoDeMaterial = tipoDeMaterial;
    this->genero = genero;       
    this->duracion = duracion;
    this->estado = estado;
    this->precio = precio;

}
