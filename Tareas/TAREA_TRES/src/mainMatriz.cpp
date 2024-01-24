/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file mainMatriz.cpp
 * @date 22/01/2024
 * @author Heiner Obando Vega
*/

#include "Matriz.hpp"

int main(){

    // Prueba de que la clase puede recibir enteros
    std::cout << "Ingrese los datos para su matriz de enteros" << std::endl;
    Matriz<int> matriz1; // Se instancia el objeto de tipo matriz de enteros
    matriz1.crearMatriz(); // Se llama al metodo encargado de crear la matriz
    
    std::cout << "Ingrese los datos para su matriz de flotantes" << std::endl;
    Matriz<float> matriz2; // Se instancia el objeto de tipo matriz de flotantes
    matriz2.crearMatriz(); // Se llama al metodo encargado de crear la matriz
    
    std::cout << "Ingrese los datos para su matriz de numeros complejos" << std::endl;
    Matriz<std::complex<float>> matriz3; // Se instancia el objeto de tipo matriz de numeros complejos
    matriz3.crearMatriz(); // Se llama al metodo encargado de crear la matriz

    return 0;
}