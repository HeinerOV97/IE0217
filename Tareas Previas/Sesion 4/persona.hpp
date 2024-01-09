#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

//Se declara la clase a utilizar en el programa
class Persona {
    private:
        string nombre;
        int edad;

    public:
        Persona(string nombre, int edad);
        string getNombre();
        int getEdad();
        void setEdad(int edad);
};

#endif