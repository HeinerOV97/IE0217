#include <iostream>
using namespace std;

/*Uso de la sentencia return y el prototipo de la funcion*/

/**Se declara el prototipo de la funcion, esto permite colocar la funcion luego del main,
 indica como se llama la funcion y con que variables trabaja**/
int add(int, int);

int main() {

    int sum;

    /*Se llama a la funcion que devolvera la suma de dos numeros*/
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;

    return 0;
}

/*Se define la funcion que va a sumar dos numeros*/
int add(int a, int b) {
    /*La funcion va a devolver la suma de a + b debido a la manera en que se declaro el return*/
    return (a + b);
}