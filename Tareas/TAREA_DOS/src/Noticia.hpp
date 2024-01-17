/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Noticia.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"

/**
 * @brief Noticia: Clase que hereda los atributos de la clase MaterialLectura, agrega dos atributos y metodos para imprimir informacion y extension de la noticia
*/
class Noticia : public MaterialLectura {
    public:
        /**
        * @brief Noticia: Constructor de la clase Noticia
        * @param titulo titulo del material
        * @param grupo grupo del material
        * @param tipoDeMaterial tipoDeMaterial
        * @param autor Autor del material
        * @param editorial editorial del material
        * @param genero genero del material
        * @param estado estado del material
        * @param cantidadHojas cantidad de hojas del material 
        * @param precio precio del material
        * @param resumenContNot resumen del material
        * @param materialRelNot material relacionado
        */
        Noticia(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio, string resumenContNot, string materialRelNot);
        
        /**
        * @brief ext: Metodo que indica el tamano de la noticia
        */
        void ext();

        /**
        * @brief imprimeInfo: Metodo que imprime la informacion de la noticia
        */
        void imprimeInfo();
    protected:
        string resumenContNot; /**< Se almacenara el resumen del material. */
        string materialRelNot; /**< Se almacenara material relacionado al material. */
};

#endif