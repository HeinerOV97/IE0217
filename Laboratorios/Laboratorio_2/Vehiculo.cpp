#include "Vehiculo.hpp"

//Funcion alternativa para el constructor
//Vehiculo::Vehiculo(int velocidad) : velocidad(velocidad){}

Vehiculo::Vehiculo(int param_velocidad) {
    this->velocidad = param_velocidad;
}

void Vehiculo::acelerar() {
    cout << "Acelerando el vehiculo hasta " << velocidad << "km/h" << endl;
}

void Vehiculo::frenar() {
    cout << "Frenando el vehiculo" << endl;
}

