#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    public:
        //Se crea el constructor
        ClassA() : numA(12) {}
    private:
        //Se crea un atributo privado
        int numA;
        //Se declara la funcion amiga
        friend int add(ClassA, ClassB);
};

class ClassB {
    public:
        //Se crea el constructor
        ClassB() : numB(1) {}
    private:
        //Se crea un atributo privado
        int numB;
        //Se declara la funcion amiga
        friend int add(ClassA, ClassB);
};

//Funcion amiga que tiene acceso a los atributos privados
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    //Se instancian los objetos
    ClassA objectA;
    ClassB objectB;
    //Se llama a la funcion amiga
    cout << "Sum: "<< add(objectA, objectB);
    return 0;
}