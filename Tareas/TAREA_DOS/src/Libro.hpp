#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

class Libro : public MaterialLectura {
    public:
        Libro(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio, string resumenCont, string materialRel);
        void extLibro();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel; 
};

#endif