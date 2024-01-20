/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.hpp
 * @date 20/01/2024
 * @author Heiner Obando Vega
*/

#ifndef REGEX_HPP
#define REGEX_HPP

#include <iostream>
#include <regex>

/**
 * @brief Regex: clase encarga de almacenar el correo en una variable y posee el método para verificar si cumple con ciertas caracteristicas
*/
class Regex {
    private:
        std::string email; /**< Se almacenara el correo digitado por el usuario. */
    public:
        /**
        * @brief Regex: Constructor de la clase recibe el correo y lo almacena en el atributo email
        */
        Regex(std::string email);

        /**
        * @brief VerifRegex: Metodo encargado de verificar el correo por medio de expresiones regulares
        */
        bool VerifRegex();
};

#endif