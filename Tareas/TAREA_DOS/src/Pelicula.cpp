#include "Pelicula.hpp"

Pelicula::Pelicula(string titulo, string grupo, string autor, string tipoDeMaterial,
            string genero, int duracion, string estado, double precio, string resumenContPeli, string materialRelPeli) :
            MaterialAV(titulo, grupo, autor, tipoDeMaterial, genero, duracion, estado, precio), resumenContPeli(resumenContPeli), materialRelPeli(materialRelPeli){}

void Pelicula::extPeli(){

    if (duracion <= 90){
        cout << "La pelicula es corta" << endl;
    } else if (duracion > 90 && duracion <= 150 ) {
        cout << "La pelicula es mediana" << endl;
    } else {
        cout << "La pelicula es corta" << endl;
    }
    
}

void Pelicula::imprimeInfoPeli(){
    cout << "La informacion de la pelicula es la siguiente: " << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Material: " << tipoDeMaterial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: " << precio << endl;
    cout << "Resumen: " << resumenContPeli << endl;
    cout << "Material relacionado: " << materialRelPeli << endl;
}