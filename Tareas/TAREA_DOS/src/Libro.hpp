/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Libro.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"

/**
 * @brief Libro: Clase que hereda los atributos de la clase MaterialLectura, agrega dos atributos y metodos para imprimir informacion y extension del libro
*/
class Libro : public MaterialLectura {
    public:

        /**
        * @brief Libro: Constructor de la clase Libro
        * @param titulo titulo del material
        * @param grupo grupo del material
        * @param tipoDeMaterial tipoDeMaterial
        * @param autor Autor del material
        * @param editorial editorial del material
        * @param genero genero del material
        * @param estado estado del material
        * @param cantidadHojas cantidad de hojas del material 
        * @param precio precio del material
        * @param resumenCont resumen del material
        * @param materialRel material relacionado
        */
        Libro(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio, string resumenCont, string materialRel);
        
        /**
        * @brief ext: Metodo que indica el tamano del libro
        */
        void ext();
        
        /**
        * @brief imprimeInfo: Metodo que imprime la informacion del libro
        */
        void imprimeInfo();
    protected:
        string resumenCont; /**< Se almacenara el resumen del material. */
        string materialRel; /**< Se almacenara material relacionado al material. */
};

#endif