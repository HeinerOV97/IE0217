#include <iostream>
using namespace std;

//Este es un ejemplo muy sencillo de la herencia multinivel


class A {
    public:
        void display() {
            cout<<"Base class content.";
        }
};

// Clase B se deriva de A
class B : public A {};

// Clase C se deriva de B
class C : public B {};

int main() {
    //Objeto instanciado de C, tiene acceso al metodo de A
    C obj;
    obj.display();
    return 0;
}