#include <iostream>
using namespace std;

//Se crea la clase con un atributo privado
class Distance {
    private:
        int meter;

        //Se declara la funcion amiga
        friend int addFive(Distance);

    public:
        Distance() : meter(0) {}
};

//Esta funcion tiene acceso a los atributos privados de la clase por ser una funcion amiga
int addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}

int main() {
    //Se instancia el objeto
    Distance D;
    //Se llama a la funcion amiga
    cout << "Distance: " << addFive(D);
    return 0;
}