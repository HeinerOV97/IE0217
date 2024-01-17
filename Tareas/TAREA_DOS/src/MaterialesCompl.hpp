/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MATERIALESCOMPL_HPP
#define MATERIALESCOMPL_HPP

#include <iostream>
using namespace std;

/**
 * @brief MaterialesCompl: Clase padre que heredara a las clases MaterialLectura y MaterialAV, los atributos principales con los que trabajaran
*/
class MaterialesCompl {
    protected:
        string titulo; /**< Se almacenara el titulo del material. */
        string grupo; /**< Se almacenara el grupo del material. */
        string tipoDeMaterial; /**< Se almacenara el tipo de material. */
        string autor; /**< Se almacenara autor del material. */
        string genero; /**< Se almacenara el genero del material. */
        string estado; /**< Se almacenara el estado del material. */
        string precio; /**< Se almacenara el precio del material. */
        friend class MaterialOrdenado; // Se identifica la clase MaterialOrdenado como una clase amiga para que esta pueda trabajar con los elementos de esta clase
        
    public:
        /**
        * @brief imprimeInfo: Metodo virtual que sera sustituido por los metodos de las clases hijo segun corresponda
        */
        virtual void imprimeInfo();

        /**
        * @brief ext: Metodo virtual que sera sustituido por los metodos de las clases hijo segun corresponda
        */
        virtual void ext();
        
        /**
        * @brief MaterialesCompl: Constructor de la clase MaterialOrdenado
        * @param titulo titulo del material
        * @param grupo grupo del material
        * @param tipoDeMaterial tipoDeMaterial
        * @param autor Autor del material
        * @param genero genero del material
        * @param estado estado del material
        * @param precio precio del material
        */
        MaterialesCompl(string titulo, string grupo, string tipoDeMaterial, string autor, 
            string genero, string estado, string precio);
};




#endif