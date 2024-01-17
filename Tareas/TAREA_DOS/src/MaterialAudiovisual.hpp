/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialAudiovisual.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include "MaterialesCompl.hpp"
#include <iostream>
using namespace std;

/**
 * @brief MaterialAV: Clase que hereda los atributos de la clase MaterialesCompl, agrega un atributo y metodos virtuales para imprimir informacion y extension de las clases Pelicula y Podcast
*/
class MaterialAV : public MaterialesCompl {
    protected:
        string duracion;

    public:
        virtual void imprimeInfo();
        virtual void ext();
        MaterialAV(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio);
};

#endif