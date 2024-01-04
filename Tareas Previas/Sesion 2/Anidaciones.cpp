#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    /*Se digita una condicion if externa confirma si el numero es diferente de cero*/
    if (num != 0) {
        /*Condicion if interna, confirma si el numero es positivo*/
        if (num > 0) {
            cout << "The number is positive." << endl;
        }
        /*Condicion else interna, confirma si el numero es negativo*/
        else {
            cout << "The number is negative." << endl;
        }
    }
    /*Condicion else externa, se ejeuta si el numero es 0*/
    else {
        cout << "The number is 0 and it is neither positive nor negative." << endl;
    }
    cout << "This line is always printed." << endl;

    return 0;
}