/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Libro.cpp
 * @date 16/01/2024
 * @author Heiner Obando Vega
*/

#include "Libro.hpp"

// Se inicializa el constructor
Libro::Libro(string titulo, string grupo, string tipoDeMaterial, string autor, string editorial, 
    string genero, string estado, string cantidadHojas, string precio, string resumenCont, string materialRel) :
    MaterialLectura(titulo, grupo, tipoDeMaterial, autor, editorial, 
    genero, estado, cantidadHojas, precio),  resumenCont(resumenCont), materialRel(materialRel){}

/* 
Funcion que indica el tamano del libro, hace casting del string cantidadHojas recibido a un entero 
y realiza las comparaciones necesarias para comprobar el tamano del libro
*/
void Libro::ext(){

    if (stoi(cantidadHojas) <= 100){
        cout << "El libro es corto" << endl;
    } else if (stoi(cantidadHojas) > 100 && stoi(cantidadHojas) <= 200 ) {
        cout << "El libro es mediado" << endl;
    } else {
        cout << "El libro es largo" << endl;
    }
    
}

/*
Imprime la informacion del libro a partir de los strings entregados por el usuario
*/
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