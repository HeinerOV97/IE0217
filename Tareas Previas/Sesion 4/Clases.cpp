#include <iostream>
using namespace std;

// Se crea la clase con la palabra reservada class y el nombre que queremos para el molde
class Molde {

    // Se indica el generador de acceso
    public:
        // Se colocan los atributos de la clase
        double largo;
        double ancho;
        double altura;

        // Se crea el constructor de la clase, funcion que se ejecuta cuando se instancia la clase
        // Aqui se puede definir si se desea que el objeto instanciado posee un valor inicial
        Molde(){
            cout << "Esto se ejecuta en cada instanciacion" << endl;
            cout << "Iniciando un objeto de la clase Room" << endl;
            //Podría agregar valores iniciales al objeto, por ejemplo:
            //pared.largo = 15;
            //pared.ancho = 12;
            //pared.altura = 21;
            //Estos valores iniciales se pueden cambiar luego de instanciar el objeto     
        }
        // Otras formas de declarar el constructor, se solicitan parametros al usuario, si se desea se puede imprimir tambien
        //Forma 1
        //Molde(double largo_p, double ancho_p, double altura_p) : largo(largo_p), ancho(ancho_p), altura(altura_p) {}
        //Forma 2
        //Molde(double largo_p, double ancho_p, double altura_p) {
            //pared.largo = largo_p;
            //pared.ancho = ancho_p;
            //pared.altura = altura_p;
        //}


        // Se crean los métodos de la clase, estos trabajan con los objetos de las clases, estos pueden recibir argumentos al llamarse
        double calcularArea() {
            return largo * ancho;
        }

        double calcularVolumen() {
            return largo * ancho * altura;
        }
};

int main() {
    
    /*Se Instancia un objeto llamado pared basado en la clase Molde.*/
    Molde pared;
    /*Como se instancia el objeto si es utilizada la forma 1 o 2 de crear el construcor*/
    //Molde pared(10.0, 20.0, 35.0); tienen que pasarse argumentos al constructor

    /*Se Asignan valores al objeto pared. */
    pared.largo = 400.5;
    pared.ancho = 20.8;
    pared.altura = 315.2;

    /*Se Calcula y muestra el area y el volumen. */
    cout << "Area = " << pared.calcularArea() << endl;
    cout << "Volumen = " << pared.calcularVolumen() << endl;

    return 0;
}