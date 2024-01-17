/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

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
        virtual void ext();
        MaterialesCompl(string titulo, string grupo, string tipoDeMaterial, string autor, 
            string genero, string estado, string precio);
};




#endif