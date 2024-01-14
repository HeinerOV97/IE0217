#include "Libro.hpp"

Libro::Libro(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
    string genero, string estado, string cantidadHojas, string precio, string resumenCont, string materialRel) :
    MaterialLectura(titulo, grupo, tipoDeMaterial, autor, editorial, 
    genero, estado, cantidadHojas, precio),  resumenCont(resumenCont), materialRel(materialRel){}

void Libro::extLibro(){

    if (stoi(cantidadHojas) <= 100){
        cout << "El libro es corto" << endl;
    } else if (stoi(cantidadHojas) > 100 && stoi(cantidadHojas) <= 200 ) {
        cout << "El libro es mediado" << endl;
    } else {
        cout << "El libro es largo" << endl;
    }
    
}

void Libro::imprimeInfo(){
    cout << "La informacion del libro es la siguiente: " << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Grupo: " << grupo << endl;
    cout << "Material: " << tipoDeMaterial << endl;
    cout << "Autor: " << autor << endl;
    cout << "Editorial: " << editorial << endl;
    cout << "Genero: " << genero << endl;
    cout << "Estado: " << estado << endl;
    cout << "Cantidad de hojas: " << cantidadHojas << endl;
    cout << "Precio: " << precio << endl;
    cout << "Resumen: " << resumenCont << endl;
    cout << "Material relacionado: " << materialRel << endl;
}