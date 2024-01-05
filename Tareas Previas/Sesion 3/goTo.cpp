#include <iostream>
using namespace std;

int main() {
    /*Se inicializan las variables*/
    float num, average, sum = 0.0;
    int i, n;

    /*Se solicita al usuario el numero maximo de entradas*/
    cout << "Maximum number of inputs: ";
    cin >> n;

    /*El for termina cuando se alcanza el numero de entradas que declaro el usuario y se devuelvo el promedio*/
    for(i = 1; i <= n; ++i) {
        cout << "Enter n" << i << ": ";
        cin >> num;

        /*Si el valor que se ingresa es menor a 0 se realiza el goto*/
        if(num < 0.0) {
            goto jump;
        }
        sum += num;
    }

/*Se obtiene un promedio*/
jump:
    average = sum / (i - 1);
    cout << "\nAverage = " << average;
    return 0; 
}