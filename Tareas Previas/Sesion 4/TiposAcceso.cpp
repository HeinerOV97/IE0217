#include <iostream>
using namespace std;

// Se crea la clase con atributos con diferentes tipos de acceso
class Animal {
    // Public: Se puede acceder a los atributos desde funciones o objetos fuera de la clase, asi como de la misma clase y clases derivadas
    public:
        void setEdad(int age) {
            edad = age;
        }
        int getEdad() {
            return edad;
        }
    // Protected: Se puede acceder a los atributos, desde la misma clase y de clases derivadas.    
    protected:
        string nombre;
    // Private: Se puede acceder a los atributos, desde la misma clase.    
    private:
        int edad;
};

// Herencia, la clase tendra los atributos de otra clase, mas los que ella tenga
class Perro : public Animal {
    public:
        void setNombre(string n) {
            nombre = n;
        }
        string getNombre() {
            return nombre;
        }
};

int main() {
    // Se instancia un objeto
    Perro miPerro;
    miPerro.setNombre("Toby");
    miPerro.setEdad(3);

    // Se accede a los metodos de la clase
    cout << "Mi perro se llama " << miPerro.getNombre() << endl;
    cout << "y tiene " << miPerro.getEdad() << " anios." << endl;

    return 0;
}