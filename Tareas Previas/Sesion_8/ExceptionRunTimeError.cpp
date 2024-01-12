#include <iostream>
#include <stdexcept>

using namespace std;

//Otra forma de excepciones al dividir dos numeros
int main() {
    
    // Se declaran las variables
	 int numerador, denominador, resultado;

    // Se solicita al usuario el numerador
	 cout << "Ingrese el numerador: ";
	 cin >> numerador;
    // Se solicita al usuario el denominador
	 cout << "Ingrese el denominador: ";
	 cin >> denominador;

    //Se comprueba si el denominador es 0
	 try {
			if (denominador == 0) {
				 throw runtime_error("Error: el denominador no puede ser cero."); //Se dispara un error en tiempo de ejecucion (runtime_error)
			}                                                                    //Error por defecto que tiene C++

            //Si no hay error se realiza la division y se imprime el resultado
			resultado =  numerador / denominador;
			cout << "El resultado es : " << resultado << endl;
	 
     } catch (const exception& e) { //En este caso catch utiliza esta nomenclatura para entender las excepciones por defecto que tiene c++
			cerr << e.what() << endl; //cerr: para imprimir un error, e es el nombre que se asigna al error recibido puede ser cualquier nombre
	 }                               // e.what() averigua cual fue el error

	 return 0; 
} 
