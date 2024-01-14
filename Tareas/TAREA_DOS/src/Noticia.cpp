#include "Noticia.hpp"

Noticia::Noticia(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
    string genero, string estado, string cantidadHojas, string precio, string resumenContNot, string materialRelNot) :
    MaterialLectura(titulo, grupo, tipoDeMaterial, autor, editorial, 
    genero, estado, cantidadHojas, precio),  resumenContNot(resumenContNot), materialRelNot(materialRelNot){}

void Noticia::extNoticia(){

    if (stoi(cantidadHojas) <= 5){
        cout << "La noticia es corta" << endl;
    } else if (stoi(cantidadHojas) > 5 && stoi(cantidadHojas) <= 10 ) {
        cout << "La noticia es mediana" << endl;
    } else {
        cout << "La noticia es larga" << endl;
    }
}

void Noticia::imprimeInfNot(){
    cout << "La informacion de la noticia es la siguiente: " << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Material: " << tipoDeMaterial << endl;
    cout << "Autor: " << autor << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Cantidad de hojas: " << cantidadHojas << endl;
    cout << "Precio: " << precio << endl;
    cout << "Resumen: " << resumenContNot << endl;
    cout << "Material relacionado: " << materialRelNot << endl;
}