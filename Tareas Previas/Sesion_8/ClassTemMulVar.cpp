#include <iostream>
using namespace std;

// Se crea una clase template, que posee la posibilidad de ingresar diferentes argumentos que pueden tener diferentes tipos de datos
template <class T, class U, class V = char> //V por defecto será char si no se declara nada
class ClassTemplate {

    //Se declaran las variables de diferentes tipos
    private:
 	    T var1;
	    U var2;
	    V var3;
    public:
	    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {} //Se declara el constructor que recibirá valores

        //Metodo que imprimira las variables almacenadas, a este metodo no le importan los tipos de variables
	    void printVar() {
		    cout << "var1 = " << var1 << endl;
		    cout << "var2 = " << var2 << endl;
		    cout << "var3 = " << var3 << endl;
	    }
};

int main() {

	// Se instancia un objeto que tendra variables de tipos entero y double, el V asignara el tipo char por defecto a la tercer variable
	ClassTemplate<int, double> obj1(7, 7.7, 'c');
	//Se imprimen los valores guardados en la clase
    cout << "obj1 values: " << endl;
	obj1.printVar();

	// Se instancia un objeto que tendra variables de tipos double, char y bool
	ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
	//Se imprimen los valores guardados en la clase
    cout << "\nobj2 values: " << endl;
	obj2.printVar();

	return 0;
}
