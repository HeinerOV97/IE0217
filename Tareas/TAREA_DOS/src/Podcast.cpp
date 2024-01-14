#include "Podcast.hpp"

Podcast::Podcast(string titulo, string grupo, string autor, string tipoDeMaterial,
            string genero, int duracion, string estado, double precio, string resumenContPod, string materialRelPod) :
            MaterialAV(titulo, grupo, autor, tipoDeMaterial, genero, duracion, estado, precio), resumenContPod(resumenContPod), materialRelPod(materialRelPod){}

void Podcast::extPod(){

    if (duracion <= 30){
        cout << "El podcast es corto" << endl;
    } else if (duracion > 30 && duracion <= 90 ) {
        cout << "La podcast es mediano" << endl;
    } else {
        cout << "La podcast es largo" << endl;
    }
    
}

void Podcast::imprimeInfoPod(){
    cout << "La informacion del podcast es la siguiente: " << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Material: " << tipoDeMaterial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion << endl;
    cout << "Estado: " << estado << endl;
    cout << "Precio: " << precio << endl;
    cout << "Resumen: " << resumenContPod << endl;
    cout << "Material relacionado: " << materialRelPod << endl;
}