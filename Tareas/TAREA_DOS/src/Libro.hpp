#ifndef LIBRO_CPP
#define LIBRO_CPP

#include "MaterialLectura.hpp"

class Libro : public MaterialLectura {
    public:
        Libro(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, int cantidadHojas, double precio, string resumenCont, string materialRel);
        void extLibro();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel; 
};

#endif