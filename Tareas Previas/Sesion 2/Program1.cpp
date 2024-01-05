#include <iostream>
using namespace std;

/*Inicio una variable que está en este codigo*/
int count;
/*Inicio una variable que está en otro archivo de codigo*/
extern void write_extern();

main() {
    /*Establezco un valor para la variable que está en el codigo*/
    count = 5;
    /*Llamo la función que se encuentra en otro archivo de codigo*/
    write_extern();
}