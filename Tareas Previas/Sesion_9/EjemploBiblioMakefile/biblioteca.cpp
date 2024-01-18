#include <iostream>
#include "biblioteca.hpp"

// Definicion del constructor
void Biblioteca::agregarLibro(
    const std::string& titulo,
    const std::string& autor
) {
    catalogo.emplace_back(titulo, autor); // Se crea un objeto dentro al final del vector, emplace_back crea el objeto, no realiza una copia
                                         // como el comando push_back
}

// Definicion del metodo encargado de mostrar todos los elementos del vector
void Biblioteca::mostrarCatalogo() {
    for (const auto& libro:catalogo) { //Recorre cada elemento dentro del vector y muestra su informacion con su propio metodo de mostrar info
        libro.mostrarInfo();
    }
}