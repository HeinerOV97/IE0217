#include "Libro.hpp"
#include "Noticia.hpp"

int main() {

    Libro miLibro("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", 10, 1590, "Resumen", "Material");

    Noticia miNoticia("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", 10, 1590, "Resumen", "Material");
   
   
    miLibro.extLibro();
    miLibro.imprimeInfo();

    miNoticia.extNoticia();
    miNoticia.imprimeInfNot();

    return 0;
}