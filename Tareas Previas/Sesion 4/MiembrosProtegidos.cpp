#include <iostream>
#include <string>
using namespace std;

//Se crea la clase base
class Animal {
    private:
        string color;

    protected:
        string type;

    public:
        //Se crean los metodos de la clase base
        void run() { cout << "I can run -- BASE!" << endl; }
        void eat() { cout << "I can eat!" << endl; }
        void sleep() { cout << "I can sleep!" << endl; }
        void setColor(string clr) { color= clr; }
        string getColor() { return color; }
};

//Se crea una clase derivada de la clase base
class Dog : public Animal {
    public:
        // Se crean los metodos de la clase base
        void run() { cout << "I can run -- DERIVED!" << endl; }
        void setType(string tp) { type = tp; }
        void displayInfo(string c) {
            cout << "I am a " << type << endl;
            cout << "My color is " << c << endl;
        }
        /* void setColor(string clr) { color= clr; } */
        void bark() { cout << "I can bark! Woof woof!!" << endl; }
};

int main() {
    // Se instancia el objeto de la clase dog, la cual es derivada de la clase animal
    Dog dog1;

    //El objeto posee los metodos tanto de la clase base como de la derivada
    //Se utiliza el metodo run de la clase derivada, ya que sobreescribe al metodo de la clase base
    //Se utilizan todos los metodos
    dog1.run();
    dog1.eat();
    dog1.sleep();
    dog1.setColor("Black");

    dog1.bark();
    dog1.setType("Doberman");
    dog1.displayInfo(dog1.getColor());
    return 0;
}