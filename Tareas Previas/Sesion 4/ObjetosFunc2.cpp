#include <iostream>
using namespace std;

// Se crea la clase
class Student {

    public:
        // Se crean los atributos
        double marks1, marks2;

};

//Se crea una funcion que va a crear un objeto
Student createStudent() {
    Student student;
    
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    cout << "Marks 1 = " << student.marks1 << endl;
    cout << "Marks 2 = " << student.marks2 << endl;

    return student;
}

int main() {
    // Se instancia un objeto
    Student student1;

    // Se llama a la funcion createStudent para que cree un objeto y lo retorne y guarde en student1
    student1 = createStudent();

    return 0;
}