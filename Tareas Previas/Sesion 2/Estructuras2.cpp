#include <iostream>
using namespace std;

/*Se crea la estructura para almacenar la informacion de diferentes variables*/
struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    /*Se crea la variable de tipo person*/
    Person p1;
    /*Se solicita al usuario ingresar sus datos*/
    cout << "Enter Full name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;
    
    /*Se imprimen los datos del usuario*/
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}