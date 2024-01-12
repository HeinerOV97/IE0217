#include <iostream>
#include <stdexcept>

using namespace std;

//Se realiza la division de dos numeros sin excepcion, esto esta mal ya que el programa no es robusto, porque no sabe detectar problemas
int main() {

    //Se declaran variables
	 int numerador, denominador, resultado;

    //Se recibe el numerador
	 cout << "Ingrese el numerador: ";
	 cin >> numerador;

    //Se recibe el denominador
	 cout << "Ingrese el denominador: ";
	 cin >> denominador;

    // Se realiza la division y se imprime su resultado
    resultado = numerador / denominador;
	cout << "El resultado es: " << resultado << endl;

	 return 0;
}
