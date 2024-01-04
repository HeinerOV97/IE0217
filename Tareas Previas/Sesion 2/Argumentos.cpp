#include <iostream>
using namespace std;

/*De esta manera se obtienen argumentos desde la linea de comandos argc es cantidad de argumentos argv muestra el valor de los argumentos*/
int main(int argc, char* argv[] ) {
    /*Ejemplo del profesor*/
    cout << "argc: " << argc << endl;
    cout << "argv[0]: " << argv[0] << endl;
    cout << "argv[1]: " << argv[1] << endl;
    cout << "argv[2]: " << argv[2] << endl;
    cout << "argv[3]: " << argv[3] << endl;

    /*Ejemplo en la presentacion*/
    if(argc > 1) {
        cout << "Argumentos adicionales: " << endl;
        for (int i = 1; i < argc; ++i) {
            cout << "argv[" << i << "]: " << argv[i] << endl;
        }
    }

    return 0;
}