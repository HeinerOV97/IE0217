#include <iostream>
#include "libro.hpp"

// Definicion del constructor, su inicializacion
Libro::Libro(
    const std::string& titulo, const std::string& autor 
) : titulo(titulo), autor(autor) {}

// Definicion del metodo para mostrar la informacion del objeto
void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << ", Autor: " << autor << std::endl;
}