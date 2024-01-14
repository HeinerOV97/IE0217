#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

class Pelicula : public MaterialAV {
    public:
        Pelicula(string tituloAV, string grupoAV, string autorAV, string tipoDeMaterialAV,
            string generoAV, int duracionAV, string estadoAV, double precioAV, string resumenContAVPeli, string materialRelAVPeli);
        void extPeli();
        void imprimeInfoPeli();
    protected:
        string resumenContAVPeli;
        string materialRelAVPeli;
};

#endif