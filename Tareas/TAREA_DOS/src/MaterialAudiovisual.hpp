#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include "MaterialesCompl.hpp"
#include <iostream>
using namespace std;

class MaterialAV : public MaterialesCompl {
    protected:
        string duracion;

    public:
        virtual void imprimeInfo();
        MaterialAV(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio);
};

#endif