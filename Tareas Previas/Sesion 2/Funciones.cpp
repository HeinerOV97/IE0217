#include <iostream>
using namespace std;

/*Se crea una función para mostrar valores*/
void displayNum(int n1, float n2) {
    cout << "The int number is: " << n1 << endl;
    cout << "The double number is: " << n2 << endl;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;

    /*Se llama la funcion creada*/
    /*Los nombres de las variables enviadas a la funcion y los que reciba la funcion, no necesariamente deben ser iguales*/
    displayNum(num1, num2);

    return 0;
}
