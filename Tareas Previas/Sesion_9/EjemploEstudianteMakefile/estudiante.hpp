#ifndef ESTUDIANTE_HPP
#define ESTUDIANTE_HPP

#include <string>

// Se declara la clase, su constructor con las variables que este recibe, ademas de un metodo de la clase y sus atributos
class Estudiante {
    public:
        Estudiante(const std::string& nombre, int edad);
        void mostrarDatos();

    private:
        std::string nombre;
        int edad;
        int edad2;
};

#endif