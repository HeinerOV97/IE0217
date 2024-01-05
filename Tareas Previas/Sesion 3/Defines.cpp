#include <iostream>
using namespace std;

/**Por convencion se utiliza mayusculas en las "variables" dadas por define, esto es valor constante, 
los define se utilizan en tiempo de pre compilacion, en todos los sitios donde este el nombre del 
define se cambiara por su valor para la compilacion**/
#define BOOK_ID_MAX 10 

/*El define es un caso parecido al define, es para valores mantenidos*/
enum {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX
} casas_t;

/*Ejemplo extra dado por el profesor para explicar los enums, lo dio al explicar define*/
enum enumcito {
    carro = 40,
    casa,
    arbol,
    patio
};

int main() {

    /*El valor de BOOK_ID_MAX es PRE procesado, para la compilacion BOOK_ID_MAX sera cambiado por 10 en este caso.*/
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout << "La cantidad de casas en el condominio es: " << CASA_MAX << endl;

    /*En este caso arbol es igual a 42, ya que el conteo comienza en 40, por el valor dado a carro*/
    cout << "arbol: " << arbol << endl;

    return 0;
}