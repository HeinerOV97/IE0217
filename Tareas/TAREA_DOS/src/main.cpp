#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"


int main() {

    Libro miLibro("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", 10, 1590, "Resumen", "Material");

    Noticia miNoticia("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", 10, 1590, "Resumen", "Material");
   
    Pelicula miPelicula("Titulo", "Grupo", "Autor", "Material", "Genero", 120, "Estado", 2000, "Resumen", "Material");

    Podcast miPodcast("Titulo", "Grupo", "Autor", "Material", "Genero", 120, "Estado", 2000, "Resumen", "Material");



    miLibro.extLibro();
    miLibro.imprimeInfo();

    miNoticia.extNoticia();
    miNoticia.imprimeInfNot();

    miPelicula.extPeli();
    miPelicula.imprimeInfoPeli();

    miPodcast.extPod();
    miPodcast.imprimeInfoPod();

    return 0;
}