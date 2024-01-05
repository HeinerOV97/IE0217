#include <iostream>
using namespace std;

/*Se declaran las enumeraciones, permiten un mejor orden en los codigos*/
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};
enum week { Sunday, Monday, Tuesday, Wendnesday, Thursday, Friday, Saturday};
enum suit {
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;


int main() {

    /*Se declaran variables que poseen los valores de los enums*/
    seasons s;
    week today;

    /*Se asigna a la variable un valor dentro del enum, en este caso a s no se le puede asignar un valor que no este en enum*/
    s = summer;
    cout << "Summer = " << s << endl;

    /*Se asigna a la variable un valor dentro del enum, en este caso a today no se le puede asignar un valor que no este en enum*/
    today = Wendnesday;
    cout << "Day " << today+1 << endl; /*Para imprimir que dia es wendnesday se suma 1 porque el conteo comienza en cero*/

    card = club;
    cout << "Size of enum variable " << sizeof(card) << " bytes."; /*Se imprime el tamano en bytes de la variable*/

    return 0;
}