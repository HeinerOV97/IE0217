/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Podcast.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "Podcast.hpp"

Podcast::Podcast(string titulo, string grupo, string tipoDeMaterial, string autor,
            string genero, string duracion, string estado, string precio, string resumenCont, string materialRel) :
            MaterialAV(titulo, grupo, tipoDeMaterial, autor, genero, duracion, estado, precio), resumenCont(resumenCont), materialRel(materialRel){}


void Podcast::ext(){

    if (stoi(duracion) <= 30){
        cout << "El podcast es corto" << endl;
    } else if (stoi(duracion) > 30 && stoi(duracion) <= 90 ) {
        cout << "La podcast es mediano" << endl;
    } else {
        cout << "La podcast es largo" << endl;
    }
    
}

void Podcast::imprimeInfo(){
    cout << "La informacion del podcast es la siguiente: " << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Material: " << tipoDeMaterial << endl;
    cout << "Autor: " << autor << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion << " min" << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: " << precio << endl;
    cout << "Resumen: " << resumenCont << endl;
    cout << "Material relacionado: " << materialRel << endl;
}