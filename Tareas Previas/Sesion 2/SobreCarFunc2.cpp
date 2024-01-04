#include <iostream>
using namespace std;

/*Funcion display con 2 parametros*/
void display(int var1, double var2) {
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

/*Funcion display con un parametro tipo double*/
void display(double var) {
    cout << "Double number: " << var << endl;
}

/*Funcion display con un parametro tipo entero*/
void display(int var) {
    cout << "Integer number: " << var << endl;
}

int main() {

    int a = 5;
    double b = 5.5;

    /*Sabe que debe llamar a la funcion con el parametro de tipo entero*/
    display(a);

    /*Sabe que debe llamar a la funcion con el parametro de tipo double*/
    display(b);

    /*Sabe que debe llamar a la funcion con dos parametros*/
    display(a, b);

    return 0;

}