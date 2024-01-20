/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.hpp
 * @date 20/01/2024
 * @author Heiner Obando Vega
*/

#include "Regex.hpp"

// Se inicializa el constructor
Regex::Regex(std::string email) {

    // Se almacena el string recibido en el atributo email de la clase
    this->email = email;
}

bool Regex::VerifRegex(){

    // Solicitamos al compilador que interprete el dato por medio de auto, ya que esto es un regex
    /*
    Se explica la expresion regular a continuación por segmentos:
    R: Esta es una expresión utilizada en los string para indicar que este es un string raw, es decir
    los caracteres de escape se toman como lo que son caracteres y no indican ninguna accion de escape
    por ejemplo, dentro del string se podría indicar un \n y este no indicaria un salto de linea, solo se
    indicaria que deben estar los caracteres \n en el string.

    - [a-zA-Z0-9]: Indica que se puede colocar un caracteres como letra, mayuscula y minuscula, asi como numeros
    en el primer caracter del nombre.

    - [a-zA-Z0-9._-]{0,13}: Indica que se puede colocar un caracteres como letra, mayuscula y minuscula, asi como numeros,
    puntos, guiones y guiones bajos se pueden colocar de 0 a 13 de ellos.

    - [a-zA-Z0-9]: Indica que se puede colocar un caracteres como letra, mayuscula y minuscula, asi como numeros
    en el ultimo caracter del nombre.

    - Se debe colocar un @ luego del nombre.

    [a-zA-Z]+\.: El dominio solo podra contener letras y minimo un punto al final, no se indica el limite de letras del dominio
    el mas(+) indica que minimo debe haber una letra en el dominio.

    [a-zA-Z]{2,4}: La extension solo puede contener entre 2 y 4 caracteres que sean letras minusculas o mayusculas
    */
    auto const regex = std::regex (R"([a-zA-Z0-9][a-zA-Z0-9._-]{0,13}[a-zA-Z0-9]@[a-zA-Z]+\.[a-zA-Z]{2,4})");
    
    //El metodo regex_match indica si el string revisado coincide con las pautas de la expresion regular dictada
    auto const revEmail = std::regex_match(email, regex);

    return revEmail; //Se devuelve el booleano que indica si el correo cumple con lo estipulado 
}