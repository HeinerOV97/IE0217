/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Pelicula.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"

/**
 * @brief Pelicula: Clase que hereda los atributos de la clase MaterialAV, agrega dos atributos y metodos para imprimir informacion y extension de la pelicula
*/
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