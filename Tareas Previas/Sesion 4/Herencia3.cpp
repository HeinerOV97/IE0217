#include <iostream>
using namespace std;

// Se define clase base
class Mammal {
    public:
        Mammal() {
            cout << "Mammals can give direct birth." << endl;
        }
};

// Se defin clase base 2
class WingedAnimal {
    public:
        WingedAnimal() {
            cout << "Winged animal can flap." << endl;
        }
};

//Ejemplo de herencia multiple, clase Bat, tiene acceso a clase Mammal y clase WingedAnimal
class Bat: public Mammal, public WingedAnimal {};

int main() {
    Bat b1;
    return 0;
}