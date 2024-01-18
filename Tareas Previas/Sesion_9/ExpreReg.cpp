#include <iostream>
#include <regex> // Para utilizar expresiones regulares en C++

int main() {
    auto const regex = std::regex("my|your regex"); // Solicitamos al compilador que interprete el dato, ya que esto es un regex
                                                   // Se utiliza la expresion regular con el pipe ya que se puede utilizar my o your en el string seguido de regex

    auto const myText = std::string("A piece of text that contains my regex."); // Se guarda un string normal en una variable
    auto const myTextContainsRegex = std::regex_search(myText, regex); // regex_search busca la expresion regular que se desea 
                                                                      // comparar en el texto, nos da verdadero o falso

    auto const yourText = std::string("A piece of text that contains your regex."); // Se guarda un string normal en una variable
    auto const yourTextContainsRegex = std::regex_search(yourText, regex); // regex_search busca la expresion regular que se desea 
                                                                           // comparar en el texto, nos da verdadero o falso

    auto const theirText = std::string("A piece of text that contains their regex.");
    auto const theirTextContainsRegex = std::regex_search(theirText, regex); // regex_search busca la expresion regular que se desea 
                                                                            // comparar en el texto, nos da verdadero o falso

    std::cout << std::boolalpha
              << myTextContainsRegex << '\n' // Se debe obtener verdadero ya que coincide la expresion regular
              << yourTextContainsRegex << '\n' // Se debe obtener verdadero ya que coincide la expresion regular
              << theirTextContainsRegex << '\n'; // Se debe obtener falso ya que no coincide la expresion regular
}