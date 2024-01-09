#include <iostream>
using namespace std;

//Se crea la clase
class Fraccion {
    int numerador, denominador;
    public:
        Fraccion(int n, int d) : numerador(n), denominador(d) {}
        //Se crea una variable de tipo fraccion, que da una indicacion especial a cada vez que se utilice el simbolo + con objetos de tipo fraccion
        Fraccion operator+ (const Fraccion &f) {
            Fraccion resultado(
                //numerador y denominador pertenecen al primer objeto creado, f.numerador y f.denominador pertenecen al segundo
                numerador * f.denominador + f.numerador + denominador,
                denominador * f.denominador
            );
            return resultado;
        }
        //Se crea un metodo
        void imprimir() {
            cout << numerador << "/" << denominador << endl;
        }
};

int main() {
    //Se instacia un objeto
    Fraccion f1(1, 2);
    Fraccion f2(3, 4);
    //Se realiza una suma por medio de la sobrecarga de operadores donde se da una indicacion especial al signo +
    Fraccion f3 = f1 + f2;

    // Se llama al metodo imprimir
    f3.imprimir();

    return 0;
}