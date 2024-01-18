#include "biblioteca.hpp"

int main() {

    // Se instancia el objeto de la clase Biblioteca
    Biblioteca biblioteca;

    // Se llama al metodo de la clase Biblioteca que almacena la informacion de los libros en un vector
    biblioteca.agregarLibro("El Gran Gatsby", "F. Scott Fitzgerald");
    biblioteca.agregarLibro("1984", "George Orwell");

    // Se llama al metodo que muestra la informacion almacena en el vector
    biblioteca.mostrarCatalogo();
}