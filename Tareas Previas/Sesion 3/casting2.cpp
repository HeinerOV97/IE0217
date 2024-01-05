#include <iostream>
using namespace std;

/*Casting de tipo explicito*/

int main() {
    /*Se inicializa una variable de tipo double*/
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;

    /*Se realiza una conversion de tipo double a tipo entero*/
    int num_int1 = (int)num_double;
    cout << "num_int1 = " << num_int1 << endl;


    /*Se realiza de otra forma una conversion de tipo double a tipo entero*/
    int num_int2 = int(num_double);
    cout << "num_int2 = " << num_int2 << endl;

    return 0;

}