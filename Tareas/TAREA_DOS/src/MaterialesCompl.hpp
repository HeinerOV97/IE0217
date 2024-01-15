#ifndef MATERIALESCOMPL_HPP
#define MATERIALESCOMPL_HPP

#include <iostream>
using namespace std;

class MaterialesCompl {
    protected:
        string titulo;
        string grupo;
        string tipoDeMaterial;
        string autor;
        string genero;
        string estado;
        string precio;
        friend class MaterialOrdenado;
        
    public:
        virtual void imprimeInfo();
        MaterialesCompl(string titulo, string grupo, string tipoDeMaterial, string autor, 
            string genero, string estado, string precio);
};




#endif