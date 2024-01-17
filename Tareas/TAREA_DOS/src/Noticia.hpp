/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Noticia.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

class Noticia : public MaterialLectura {
    public:
        Noticia(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio, string resumenContNot, string materialRelNot);
        void ext();
        void imprimeInfo();
    protected:
        string resumenContNot;
        string materialRelNot; 
};

#endif