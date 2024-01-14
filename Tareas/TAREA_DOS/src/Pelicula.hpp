#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

class Pelicula : public MaterialAV {
    public:
        Pelicula(string titulo, string grupo, string autor, string tipoDeMaterial,
            string genero, int duracion, string estado, double precio, string resumenContPeli, string materialRelPeli);
        void extPeli();
        void imprimeInfoPeli();
    protected:
        string resumenContPeli;
        string materialRelPeli;
};

#endif