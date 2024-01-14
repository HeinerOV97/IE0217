#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include <iostream>
using namespace std;

class MaterialAV {
    protected:
        string titulo;
        string grupo;
        string autor;
        string tipoDeMaterial;
        string genero;
        int duracion;
        string estado;
        double precio;
    public:
        MaterialAV(string titulo, string grupo, string autor, string tipoDeMaterial,
            string genero, int duracion, string estado, double precio);
};

#endif