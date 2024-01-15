#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialLectura.hpp"


int main() {

    //Libro miLibro("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material");

   //Noticia miNoticia("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material");
   
    //Pelicula miPelicula("Titulo", "Grupo", "Autor", "Material", "Genero", "120", "Estado", "2000", "Resumen", "Material");

    //Podcast miPodcast("Titulo", "Grupo", "Autor", "Material", "Genero", "120", "Estado", "2000", "Resumen", "Material");

    MaterialOrdenado Prueba;

    Prueba.AgregarMaterial(new Libro("Titulo2", "grupo", "Libro", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material"));
    Prueba.AgregarMaterial(new Noticia("Titulo", "grupo", "Noticia", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material"));
    Prueba.AgregarMaterial(new Pelicula("Titulo2", "grupo", "Pelicula", "Autor", "Genero", "120", "Estado", "2560", "Resumen", "Material"));
    Prueba.AgregarMaterial(new Podcast("Titulo", "grupo", "Podcast", "Autor", "Genero", "120", "Estado", "2560", "Resumen", "Material"));
    
    Prueba.imprimirDatos();
    Prueba.borrarMaterial("Titulo2");
    Prueba.imprimirDatos();

    /*
    miLibro.extLibro();
    miLibro.imprimeInfo();

    miNoticia.extNoticia();
    miNoticia.imprimeInfo();

    miPelicula.extPeli();
    miPelicula.imprimeInfoPeli();

    miPodcast.extPod();
    miPodcast.imprimeInfoPod();
    */

    return 0;
}