/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Libro.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

class Libro : public MaterialLectura {
    public:
        Libro(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio, string resumenCont, string materialRel);
        void ext();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel; 
};

#endif