#include <iostream>
using namespace std;

//Se crea una clase
class Student {
	private:
		int age;

	public:
		
		// El constructor se inicializa con la edad de 12
		Student() : age(12) {}

		void getAge() {
			cout << "Age = " << age << endl;
		}
};

int main() {

	// Se asigna memoria para un objeto
	Student* ptr = new Student();
	
	// Se llama el metodo getAge
	ptr->getAge(); 

	// Se libera la memoria
	delete ptr;

	return 0;
}