#include <iostream>
using namespace std;

/*Llega el valor de la variable*/
void func1(int numVal) {

    cout << "El valor de la variable recibida es: " << numVal << endl;

}

/*Llega una referencia de la variable*/
void func2(int &numRef) {

    /*Se coloca asi en pantalla para entender que llego una referencia, si no se coloca el & muestra en valor de la variable*/
    cout << "La direccion en memoria de la variable recibida es: " << &numRef << endl;

}

int main() {
    int num = 5;

    func1(num);

    func2(num);

    return 0;
}