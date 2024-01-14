#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP

#include <iostream>
using namespace std;

class MaterialLectura {
    protected:
        string titulo;
        string grupo;
        string tipoDeMaterial;
        string autor;
        string editorial;
        string genero;
        string estado;
        int cantidadHojas;
        double precio;
    public:
        MaterialLectura(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, int cantidadHojas, double precio);
};

#endif