#include <iostream>
using namespace std;

/*Inicio una variable que está en otro archivo de codigo*/
extern int count;

/*Creo una función que será llamada en Program1.cpp*/
void write_extern(void) {
    cout << "Count is " << count << endl;
}