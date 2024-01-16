#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialLectura.hpp"
#include "menu.hpp"


int main() {

    while(1){
        mostrarMenu(); //Llama a la funcion encargada de mostrar el menu al usuario
        elegirOpcion(); //Llama a la funcion que permite al usuario elegir opciones en el menu
    }

    //Libro miLibro("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material");

    //Noticia miNoticia("Titulo", "grupo", "TipoDeMaterial", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material");
   
    //Pelicula miPelicula("Titulo", "Grupo", "Autor", "Material", "Genero", "120", "Estado", "2000", "Resumen", "Material");

    //Podcast miPodcast("Titulo", "Grupo", "Autor", "Material", "Genero", "120", "Estado", "2000", "Resumen", "Material");

    /*
    MaterialOrdenado Prueba;

    Prueba.AgregarMaterial(new Libro("Titulo1", "grupo", "Libro", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material"));
    Prueba.AgregarMaterial(new Noticia("Titulo2", "grupo", "Noticia", "Autor", "Editorial", "Genero", "Estado", "10", "1590", "Resumen", "Material"));
    Prueba.AgregarMaterial(new Podcast("Titulo4", "grupo", "Podcast", "Autor", "Genero", "120", "Estado", "2560", "Resumen", "Material"));
    Prueba.AgregarMaterial(new Pelicula("Titulo3", "grupo", "Pelicula", "Autor", "Genero", "120", "Estado", "2560", "Resumen", "Material"));
   
    
    Prueba.imprimirDatos();
    Prueba.borrarMaterial("Titulo1");
    Prueba.imprimirDatos();
    Prueba.imprimirInformacionTit("Titulo2");
    Prueba.imprimirInformacionTip("Podcast");
    */

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