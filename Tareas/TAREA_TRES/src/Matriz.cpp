/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file Matriz.cpp
 * @date 22/01/2024
 * @author Heiner Obando Vega
*/

// Se inicializa el constructor, este coloca los valores de filas y columnas en ceros.
template <typename T>
Matriz<T>::Matriz() : columnas(0), filas(0) {}

template <typename T>
void Matriz<T>::crearMatriz(){

    int filasRec; /**< Se almacenaran la cantidad de filas de la matriz dadas por el usuario */
    int columnasRec; /**< Se almacenaran la cantidad de columnas de la matriz dadas por el usuario */
    T valorPorPos; /*Se almacenara el valor que el usuario desea colocar en las posiciones de la matriz*/

    // Se solicita al usuario la cantidad de filas y columnas que desea que tenga la matriz
    std::cout << "Ingrese el numero de filas del programa" << std::endl;
    std::cin >> filasRec;
    std::cout << "Ingrese el numero de columnas del programa" << std::endl;
    std::cin >> columnasRec;

    // Se guardan los valores de las dimensiones de la matriz dados por el usuario
    columnas = columnasRec;
    filas = filasRec;
    matriz.resize(filas, std::vector<T>(columnas, T())); // Se redimensiona el tamaño del vector ajustado al tamaño dado por el usuario

    // Se crea un iterador de un vector bidimensional, el cual correspondera a las filas de la matriz
    typename std::vector<std::vector<T> >::iterator fila;
    for(fila = matriz.begin(); fila != matriz.end(); ++fila){ // Se crea un bucle que revise todas las filas de la matriz
        typename std::vector<T>::iterator columna; // Iterador de tipo vector, que corresponde a las columnas de la matriz
        for(columna = fila->begin(); columna != fila->end(); ++columna){ // Se crea un bucle que revise todas las columnas de la matriz
            // Se solicita en pantalla que se ingrese un valor por posicion en la matriz
            std::cout << "Ingrese el valor para la posicion (" << fila - matriz.begin() << ", " << columna - fila->begin() << "): ";
            std::cin >> valorPorPos; // Se asigna el valor recibo a la variabel valorPorPos
            *columna = valorPorPos; // Se almacena este valor en la posicion que se revisa
        }
    }

    /*Se crea un bucle que revise cada posicion de la matriz e imprima en pantalla 
    su valor, esto para comprobar que la matriz se crea con exito*/
    for (size_t fila = 0; fila < filas; ++fila) {
        for (size_t columna = 0; columna < columnas; ++columna) {
            std::cout << matriz[fila][columna] << " ";
        }
        std::cout << std::endl;
    }
}

// Metodo para acceder al valor de filas desde fuera de la clase
template <typename T>
T Matriz<T>::getFilas() const {
    return filas;
}

// Metodo para acceder al valor de columnas desde fuera de la clase
template <typename T>
T Matriz<T>::getColumnas() const {
    return columnas;
}