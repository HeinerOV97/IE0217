#include <iostream>
using namespace std;

/* Se crea un template de una clase, esta clase podra tener atributos de diferentes tipos asi como sus metodos trabajaran
con diferentes tipos de datos*/

template <class T> //T igualmente representa al argumento que soporta diferentes tipos de datos
class Number {
	private:
	// Se declara una variable de tipo T soporta diferentes tipos
	T num;

	public:
	Number(T n) : num(n) {}	// Se crea el constructor recibe un argumento de tipo T

    // Se crea un metodo que obtiene un numero, esto se hace para utilizar diferentes tipos de datos
	T getNum() {
		return num;
	}
};

int main() {
	
	// Se instancia un objeto de tipo entero
	Number<int> numberInt(7); //Sintaxis ClassName<Type> object name(arguments)

	// Se instancia un objeto de tipo double
	Number<double> numberDouble(7.7);

    //Se imprimen los valores con los que se instancia el objeto
	cout << "int Number = " << numberInt.getNum() << endl;
	cout << "double Number = " << numberDouble.getNum() << endl;

	return 0;
}
