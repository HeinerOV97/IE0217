#include "Matriz.hpp"

template <typename T>
Matriz<T>::Matriz() : columnas(0), filas(0) {}

template <typename T>
void Matriz<T>::crearMatriz(){

    int filasRec;
    int columnasRec;
    T valorPorPos;

    std::cout << "Ingrese el numero de filas del programa" << std::endl;
    std::cin >> filasRec;
    std::cout << "Ingrese el numero de columnas del programa" << std::endl;
    std::cin >> columnasRec;

    const std::type_info& TipoFilasRec = typeid(filasRec);
    const std::type_info& TipoColumnasRec = typeid(columnasRec);
    
    

   /* try {
        if(TipoFilasRec != typeid(int) || TipoColumnasRec != typeid(int)){
            throw std::invalid_argument("Error: El tipo de dato de las filas y columnas debe ser un entero"); 
        }
    */
        columnas = columnasRec;
        filas = filasRec;
        matriz.resize(filas, std::vector<T>(columnas, T()));
    /*
    } catch (const std::exception& e) {
        	std::cerr << e.what() << std::endl;
            return;
    }
    */

    typename std::vector<std::vector<T> >::iterator fila;
    for(fila = matriz.begin(); fila != matriz.end(); ++fila){
        typename std::vector<T>::iterator columna;
        for(columna = fila->begin(); columna != fila->end(); ++columna){
            std::cout << "Ingrese el valor para la posición (" << fila - matriz.begin() << ", " << columna - fila->begin() << "): ";
            std::cin >> valorPorPos;
            /*try {
                if (typeid(valorPorPos) != typeid(int) || typeid(valorPorPos) != typeid(float))
                throw std::invalid_argument("Error: El tipo de dato no es aceptado"); 
            } catch (const std::exception& e) {
        	std::cerr << e.what() << std::endl;
            }
            */
            *columna = valorPorPos; 
        }
    }

    for (size_t fila = 0; fila < filas; ++fila) {
        for (size_t columna = 0; columna < columnas; ++columna) {
            std::cout << matriz[fila][columna] << " ";
        }
        std::cout << std::endl;
    }
}