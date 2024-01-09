#include "persona.hpp"
using namespace std;

//Se declara en el metodo con la siguiente sintaxis, para indicar a que clase pertenece
Persona::Persona(string nombre, int edad) {
    this->nombre = nombre; // El comando this hace referencia a la clase Persona
    this->edad = edad;
}

//Se declaran los metodos con los cuales se va a trabajar, la siguiente sintaxis indica a cual clase pertenece
string Persona::getNombre() {
    return nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}