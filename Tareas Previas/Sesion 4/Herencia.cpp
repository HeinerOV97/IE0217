#include <iostream>
using namespace std;

//Se crea la clase
class Animal {
    //Se crean dos metodos de la clase animal
    public:
        void eat() {
            cout << "I can eat!" << endl;
        }

        void sleep() {
            cout << "I can sleep!" << endl;
        }
};

// Se crea la clase dog, que hereda los metodos de la clase Animal y ademas de esto crea su propio metodo 
class Dog : public Animal {
    public:
        void bark() {
            cout << "I can bark! Woof woof!!" << endl;
        }
};

int main() {
    //Se instancia el objeto dog1
    Dog dog1;

    //El objeto dog puede utilizar los metodos tanto de la clase base como de la clase derivada
    dog1.eat();
    dog1.sleep();

    dog1.bark();
}