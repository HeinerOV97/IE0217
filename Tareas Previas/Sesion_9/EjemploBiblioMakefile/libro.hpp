#ifndef LIBRO_HPP
#define LIBRO_HPP

#include <string>

// Se realiza la declaracion de la clase Libro, su constructor, las variables que recibe, su metodo para mostrar informacion y sus atributos
class Libro {
    public:
        Libro(const std::string& titulo, const std::string& autor);
        void mostrarInfo() const;

    private:
        std::string titulo;
        std::string autor;
};

#endif