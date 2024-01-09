#include <iostream>
using namespace std;

//Clase base
class Animal {
    public:
        void info() { cout << "I am an animal." << endl;}
};

//De la clase base se pueden derivar varias clases en este caso se derivan las clases Dog y Cat
class Dog : public Animal {
    public:
        void bark() { cout << "I am a Dog. Woof Woof." << endl;}
};

class Cat : public Animal {
    public:
        void meow() { cout << "I am a Cat. Meow." << endl;}
};

int main() {
    //Ambas clases tienen acceso al metodo info de la clase base
    Dog dog1;
    cout << "Dog Class: " << endl;
    dog1.info();
    dog1.bark();

    Cat cat1;
    cout << "Dog Class: " << endl;
    cat1.info();
    cat1.meow();

}