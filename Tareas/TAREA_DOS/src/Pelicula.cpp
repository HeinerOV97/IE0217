#include "Pelicula.hpp"

Pelicula::Pelicula(string tituloAV, string grupoAV, string autorAV, string tipoDeMaterialAV,
            string generoAV, string duracionAV, string estadoAV, string precioAV, string resumenContAVPeli, string materialRelAVPeli) :
            MaterialAV(tituloAV, grupoAV, autorAV, tipoDeMaterialAV, generoAV, duracionAV, estadoAV, precioAV), resumenContAVPeli(resumenContAVPeli), materialRelAVPeli(materialRelAVPeli){}

void Pelicula::extPeli(){

    if (stoi(duracionAV) <= 90){
        cout << "La pelicula es corta" << endl;
    } else if (stoi(duracionAV) > 90 && stoi(duracionAV) <= 150 ) {
        cout << "La pelicula es mediana" << endl;
    } else {
        cout << "La pelicula es corta" << endl;
    }
    
}

void Pelicula::imprimeInfoPeli(){
    cout << "La informacion de la pelicula es la siguiente: " << endl;
    cout << "Titulo: " << tituloAV << endl;
    cout << "Grupo: " << grupoAV << endl;
    cout << "Autor: " << autorAV << endl;
    cout << "Material: " << tipoDeMaterialAV << endl;
    cout << "Genero: " << generoAV << endl;
    cout << "Duracion: " << duracionAV << endl;
    cout << "Estado: " << estadoAV << endl;
    cout << "Precio: " << precioAV << endl;
    cout << "Resumen: " << resumenContAVPeli << endl;
    cout << "Material relacionado: " << materialRelAVPeli << endl;
}