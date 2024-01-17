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

        /**
        * @brief Pelicula: Constructor de la clase Pelicula
        * @param titulo titulo del material
        * @param grupo grupo del material
        * @param tipoDeMaterial tipoDeMaterial
        * @param autor Autor del material
        * @param genero genero del material
        * @param duracion duracion del material 
        * @param estado estado del material
        * @param precio precio del material
        * @param resumenCont resumen del material
        * @param materialRel material relacionado
        */
        Pelicula(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel);

        /**
        * @brief ext: Metodo que indica el tamano de la noticia
        */
        void ext();

        /**
        * @brief imprimeInfo: Metodo que imprime la informacion de la noticia
        */
        void imprimeInfo();
    protected:
        string resumenCont; /**< Se almacenara el resumen del material. */
        string materialRel; /**< Se almacenara material relacionado al material. */
};

#endif