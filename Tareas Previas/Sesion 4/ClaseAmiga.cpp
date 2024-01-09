#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    private:
        // Se declara un atributo privado
        int numA;
        // Se declara una clase amiga
        friend class ClassB;
    
    public:
        ClassA() : numA(12) {}
};

// B es una clase amiga A, por lo tanto tiene acceso a los atributos privados de A
class ClassB {
    private:
        int numB;
    public:
        ClassB() : numB(1) {}

        int add() {
            ClassA objectA;
            return objectA.numA + numB;
        }
};

int main() {
    //Se instancia el objeto clase B
    ClassB objectB;
    //Se utiliza un metodo de la clase amiga
    cout << "Sum: " << objectB.add();
    return 0;
}