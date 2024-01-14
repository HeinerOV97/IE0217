#include "MaterialAudiovisual.hpp"

MaterialAV::MaterialAV(string tituloAV, string grupoAV, string autorAV, string tipoDeMaterialAV,
    string generoAV, int duracionAV, string estadoAV, double precioAV){
    
    this->tituloAV = tituloAV;
    this->grupoAV = grupoAV;
    this->autorAV = autorAV; 
    this->tipoDeMaterialAV = tipoDeMaterialAV;
    this->generoAV = generoAV;       
    this->duracionAV = duracionAV;
    this->estadoAV = estadoAV;
    this->precioAV = precioAV;

}
