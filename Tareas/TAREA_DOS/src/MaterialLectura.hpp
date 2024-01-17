/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialLectura.hpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP

#include "MaterialesCompl.hpp"
#include <iostream>
using namespace std;

/**
 * @brief MaterialLectura: Clase que hereda los atributos de la clase MaterialesCompl, agrega dos atributos y metodos virtuales para imprimir informacion y extension de clase Libro y Noticia
*/
class MaterialLectura : public MaterialesCompl {
    protected:
        string editorial; /**< Se almacenara la editorial del material. */
        string cantidadHojas; /**< Se almacenara la cantidad de hojas del material. */
    public:

        /**
        * @brief imprimeInfo: Metodo virtual que sera sustituido por los metodos de las clases hijo segun corresponda
        */
        virtual void imprimeInfo();
        
        /**
        * @brief imprimeInfo: Metodo virtual que sera sustituido por los metodos de las clases hijo segun corresponda
        */
        virtual void ext();

        /**
        * @brief MaterialLectura: Constructor de la clase MaterialLectura
        * @param titulo titulo del material
        * @param grupo grupo del material
        * @param tipoDeMaterial tipoDeMaterial
        * @param autor Autor del material
        * @param editorial editorial del material
        * @param genero genero del material
        * @param estado estado del material
        * @param cantidadHojas cantidad de hojas del material 
        * @param precio precio del material
        */
        MaterialLectura(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
            string genero, string estado, string cantidadHojas, string precio);
};

#endif