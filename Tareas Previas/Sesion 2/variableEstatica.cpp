#include <iostream>
using namespace std;

void test() {

    /*Se declara una variable estatica, esta persiste en todo el codigo*/
    static int var = 0;
    ++var;

    cout << var << endl;
}

int main() {

    /*Se llama a la funcion por primera vez, la variable tendra el valor con que se inicializo*/
    test();
    /*Se llama a la funcion por segunda vez, la varible tendra el valor modificado*/
    test();

    return 0;
}