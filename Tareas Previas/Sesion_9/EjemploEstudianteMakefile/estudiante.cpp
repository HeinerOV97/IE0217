#include <iostream>>
#include "estudiante.hpp"

// Se inicializa el constructor, se realiza la definicion del constructor
Estudiante::Estudiante(
    const std::string& nombre, int edad) :
    nombre(nombre), edad(edad) {}

// Se realiza la deficion del metodo
void Estudiante::mostrarDatos(){
    std::cout << "Nombre: " << nombre;
    std::cout << ", Edad: " << edad << std::endl;
}