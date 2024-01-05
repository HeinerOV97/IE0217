#include <iostream>
using namespace std;

/*Prototipo de la funcion deberia ir en un archivo .hpp aparte*/
int factorial(int);

int main() {
    /*Se declaran las variables*/
    int n, result;
    cout << "Enter a non-negative number: ";
    cin >> n;

    /*Se llama a la funcion factorial*/
    result = factorial(n);
    /*Se imprime el resultado*/
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

/*Se llama a la funcion que obtiene el factorial utilizando recursividad*/
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1); //La funcion se llama asi misma con el valor dado -1, cada vez que se llama a si misma se resta -1
    } else {
        return 1;
    }
}