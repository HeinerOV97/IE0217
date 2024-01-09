#include <iostream>
using namespace std;

class Base {
    public:
    //Se espera que esta metodo sea sobreescrito
        virtual void print() {
            cout << "Base Function" << endl;
        }
};
//Esta clase esta derivada de base y se espera que sobreescriba la funcion virtual
class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    //Se instancia objeto
    Derived derived1;

    //base1 almacena la direccion de memoria donde se almacena el objeto
    Base* base1 = &derived1;

    //Se llama al metodo print
    base1->print();

    return 0;
}