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
        string duracion; /**< Se almacenara la distancia del material. */

    public:
        /**
        * @brief ext: Metodo virtual que sera sustituido por los metodos de las clases hijo segun corresponda
        */
        virtual void imprimeInfo();
        
        /**
        * @brief ext: Metodo virtual que sera sustituido por los metodos de las clases hijo segun corresponda
        */
        virtual void ext();

        /**
        * @brief MaterialAV: Constructor de la clase MaterialAV
        * @param titulo titulo del material
        * @param grupo grupo del material
        * @param tipoDeMaterial tipoDeMaterial
        * @param autor Autor del material
        * @param genero genero del material
        * @param duracion duracion del material
        * @param estado estado del material
        * @param precio precio del material
        */
        MaterialAV(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio);
};

#endif