#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP

#include "MaterialesCompl.hpp"
#include <iostream>
using namespace std;

class MaterialLectura : public MaterialesCompl {
    protected:
        string editorial;
        string cantidadHojas;
    public:
        virtual void imprimeInfo();
        MaterialLectura(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio);
};

#endif