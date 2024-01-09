#include <iostream>
#include "persona.hpp"

using namespace std;

int main() {
    // Se instancia el objeto, y se utilizan los metodos, el codigo queda mas ordenado de esta manera
    Persona p("Juan", 25);

    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Edad: " << p.getEdad() << endl;

    // Para cambiar el valor edad se utiliza el metodo edad que trabaja con ella, ya que el atributo es privado
    p.setEdad(26);

    cout << "Nueva edad: " << p.getEdad() << endl;
    return 0;
}