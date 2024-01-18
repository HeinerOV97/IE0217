#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <vector>
#include "libro.hpp" // Se incluye libro para trabajar con sus metodos y atributos

/* Se realiza la declaracion de la clase Biblioteca, su constructor, las variables que recibe, su metodo para mostrar todos los objetos almacenados
y sus atributos */
class Biblioteca {
    public:
        void agregarLibro(
            const std::string& titulo,
            const std::string& autor
        );
        void mostrarCatalogo();
    private:
        std::vector<Libro> catalogo; //Vector que almacenara objetos de la clase libro
};

#endif