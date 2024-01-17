/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Pelicula.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

class Pelicula : public MaterialAV {
    public:
        Pelicula(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel);
        void ext();
        void imprimeInfo();
    protected:
        string resumenCont;
        string materialRel;
};

#endif