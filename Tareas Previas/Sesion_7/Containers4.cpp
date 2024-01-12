#include <iostream>
#include <map>
using namespace std;

int main() {

    //Se crea un map donde el key sera un entero y el valor sera un string
    //Sintaxis del map std::map<key_type, value_type> map_name = {{key1, value1},{key2, value2}, …};
	map<int, string> student;

	//Se utiliza el operador [] para agregar elementos al map
	student[1] = "Jacqueline";
	student[2] = "Blake";

	// el metodo insert() se utiliza para agregar elementos al map
	student.insert(make_pair(3, "Denise")); //El make_pair me relaciona los dos argumentos dados
	student.insert(make_pair(4, "Blake"));

	// Se agregan elementos con keys repetidos, lo que pasara es que el string Aaron le caera encima al string Timothy con el key 5
	student[5] = "Timothy";
	student[5] = "Aaron";

    // Se imprimen los keys con sus valores
	for (int i = 1; i <= student.size(); ++i) {
		cout << "Student[" << i << "]: " << student[i] << endl;
	}

    return 0;
}
