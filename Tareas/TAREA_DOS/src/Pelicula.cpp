#include "Pelicula.hpp"

Pelicula::Pelicula(string titulo, string grupo, string autor, string tipoDeMaterial,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel) :
            MaterialAV(titulo, grupo, autor, tipoDeMaterial, genero, duracion, estado, precio), resumenCont(resumenCont), materialRel(materialRel){}

void Pelicula::extPeli(){

    if (stoi(duracion) <= 90){
        cout << "La pelicula es corta" << endl;
    } else if (stoi(duracion) > 90 && stoi(duracion) <= 150 ) {
        cout << "La pelicula es mediana" << endl;
    } else {
        cout << "La pelicula es corta" << endl;
    }
    
}

void Pelicula::imprimeInfo(){
    cout << "La informacion de la pelicula es la siguiente: " << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Material: " << tipoDeMaterial << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: " << precio << endl;
    cout << "Resumen: " << resumenCont << endl;
    cout << "Material relacionado: " << materialRel << endl;
}