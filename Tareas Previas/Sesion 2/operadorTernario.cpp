#include <iostream>
using namespace std;


int main() {
    
    /*Se declaran variables*/
    int var1 = 0;
    int var2;

    /*Se utiliza operador ternario si var1 = 0 se asigna el valor de 15 a var2, de lo contrario se asigna el valor de 27*/
    var2 = (var1 == 0) ? 15 : 27;
    
    cout << "var2 = " << var2 << endl;

    return 0;
}