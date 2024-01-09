#include <iostream>
using namespace std;

// Se crea una clase Base con el metodo print
class Base {
    public:
        void print() {
            cout << "Base Function" << endl;
        }
};

// Se crea una clase Derivada de la clase Base con una funcion llamada print igual
class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    //Se instancia el objeto
    Derived derived1, derived2;
    //Se llama al metodo print, en este caso el metodo print de la clase derivada sobreescribe al de la clase base
    derived1.print();

    //Para acceder al print de la clase Base se utiliza lo siguiente
    derived2.Base::print();
}