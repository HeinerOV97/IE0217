#include <iostream>
using namespace std;

/*.data section. Este variable puede ser modificable*/
int variableGlobal = 10;

/* .text section. Las funciones no cambian porque siempre haran lo mismo*/
void funcionGlobal() {

    /*.data section*/
    static int variableLocalEstatica = 5; //static quiere decir que esta declaracion se realiza una vez, 
                                          //si la funcion es llamada dos veces solo la primera de declara

    /*stack section. Guarda variables locales, solo se utilizan dentro de la funcion*/
    int variableLocal = 20;

    /*Mostrar el valor de las variables*/
    cout << "Variable global: " << variableGlobal << endl;
    cout << "Variable local estatica " << variableLocalEstatica << endl;
    cout << "Variable local: " << variableLocal << endl;

} 

int main(){

    int variableLocalMain = 15;

    funcionGlobal();

    cout << "Variable local en main: " << variableLocalMain << endl;

    /* heap section */
    int* variableDinamica = new int;
    *variableDinamica = 25;

    cout << "Variable dinamica: " << *variableDinamica << endl;

    delete variableDinamica;

    return 0;
}