#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

class Pelicula : public MaterialAV {
    public:
        Pelicula(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel);
        void extPeli();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel;
};

#endif