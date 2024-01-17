/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialLectura.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

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
        virtual void ext();
        MaterialLectura(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio);
};

#endif