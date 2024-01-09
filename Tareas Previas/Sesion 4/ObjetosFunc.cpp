#include <iostream>
using namespace std;

// Se crea la clase
class Student {

    public:
        // Se crean los atributos
        double marks;
        // Se crean los metodos
        Student(double m) {
            marks = m;
        }
};

//Se crea una funcion que recibe como argumentos objetos instanciados de una clase
void calculateAverage(Student s1, Student s2) {

    double average = (s1.marks + s2.marks) / 2;

    cout << "Average Marks = " << average << endl;
}

int main() {
    // Se instancia un objeto
    Student student1(88.0), student2(56.0);

    // Se llama a la funcion calculateAverage y se envian como argumentos los objetos instanciados
    calculateAverage(student1, student2);

    return 0;
}