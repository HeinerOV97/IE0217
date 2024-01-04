#include <iostream>
using namespace std;

int main() {
    /*Se inicializan las variables*/
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    /*El codigo realiza la operacion indicada por el operador a traves del caracter elegido*/
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break; /*Se debe colocar el comando break en cada uno de los case*/
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
        /*Si el usuario no coloca un operador adecuado se muestra un mensaje de error*/
        cout << "Error! The operator is not correct";
        break;
    }
}