#include "Podcast.hpp"

Podcast::Podcast(string tituloAV, string grupoAV, string autorAV, string tipoDeMaterialAV,
            string generoAV, string duracionAV, string estadoAV, string precioAV, string resumenContAVPod, string materialRelAVPod) :
            MaterialAV(tituloAV, grupoAV, autorAV, tipoDeMaterialAV, generoAV, duracionAV, estadoAV, precioAV), resumenContAVPod(resumenContAVPod), materialRelAVPod(materialRelAVPod){}

void Podcast::extPod(){

    if (stoi(duracionAV) <= 30){
        cout << "El podcast es corto" << endl;
    } else if (stoi(duracionAV) > 30 && stoi(duracionAV) <= 90 ) {
        cout << "La podcast es mediano" << endl;
    } else {
        cout << "La podcast es largo" << endl;
    }
    
}

void Podcast::imprimeInfoPod(){
    cout << "La informacion del podcast es la siguiente: " << endl;
    cout << "Titulo: " << tituloAV << endl;
    cout << "Grupo: " << grupoAV << endl;
    cout << "Autor: " << autorAV << endl;
    cout << "Material: " << tipoDeMaterialAV << endl;
    cout << "Genero: " << generoAV << endl;
    cout << "Duracion: " << duracionAV << endl;
    cout << "Estado: " << estadoAV << endl;
    cout << "Precio: " << precioAV << endl;
    cout << "Resumen: " << resumenContAVPod << endl;
    cout << "Material relacionado: " << materialRelAVPod << endl;
}