#include <iostream>
using namespace std;

// Se crea la clase con la palabra reservada class y el nombre que queremos para el molde
class Molde {

    // Se indica el generador de acceso
    public:
        // Se colocan los atributos de la clase
        double largo;
        double ancho;
        double alto;

        // Se crea el constructor de la clase, funcion que se ejecuta cuando se instancia la clase
        Molde(double largo_p, double ancho_p, double alto_p) : largo(largo_p), ancho(ancho_p), alto(alto_p) {
            cout << "Probando si se puede imprimir" << endl;
        }

        ~Molde(){
            cout << "Saludos desde el destructor de la clase Molde" << endl;
        }


        // Se crean los métodos de la clase, estos trabajan con los objetos de las clases, estos pueden recibir argumentos al llamarse
        double calcularArea() {
            return largo * ancho;
        }

        double calcularVolumen() {
            return largo * ancho * alto;
        }
};

int main() {
    
    /*Como se instancia el objeto si es utilizada la forma 1 o 2 de crear el construcor*/
    Molde pared(10.0, 20.0, 35.0); //tienen que pasarse argumentos al constructor

    /*Se Asignan valores al objeto pared. */
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.alto = 315.2;

    /*Se Calcula y muestra el area y el volumen. */
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0; //En este punto se llama al destructor ya que se detecta que el objeto pared tipo Molde no se utilizara mas
}