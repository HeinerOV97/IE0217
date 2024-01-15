#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

class Noticia : public MaterialLectura {
    public:
        Noticia(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio, string resumenContNot, string materialRelNot);
        void extNoticia();
        void imprimeInfo();
    protected:
        string resumenContNot;
        string materialRelNot; 
};

#endif