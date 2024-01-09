#include <iostream>
#include <fstream>

// Se crea la clase con la palabra reservada class y el nombre que queremos para el molde
// Con esta clase se va a tener acceso a un archivo sobre el cual se trabajara
class Archivo {
    private:
        std::fstream archivo;

    public:
        Archivo(std::string nombre_archivo) {
            archivo.open(nombre_archivo, std::ios::in | std::ios::out | std::ios::app);
            if (!archivo.is_open()) {
                std::cout << "No se pudo abrir el archivo " << nombre_archivo << std::endl;
            }
        }

        // Se crea el destructor de la clase, funciona cuando el programa detecta, que los objetos utilizados se dejan de utilizar
        // En este caso ayuda a cerrar el archivo utilizado
        ~Archivo() {
            if (archivo.is_open()) {
                archivo.close();
            }
        }
};

int main(){
    Archivo mi_archivo("datos.txt");

    // Se puede realizar algo con el archivo

    return 0; //En este punto entra en accion el destructor, cuando el programa detecta que el uso del objeto termino
}