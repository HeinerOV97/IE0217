/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.hpp
 * @date 20/01/2024
 * @author Heiner Obando Vega
*/

#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <iostream>
#include <vector>
#include <complex>
#include <typeinfo>

template <typename T>
class Matriz {
    private:
        std::vector<std::vector<T>> matriz;
        size_t columnas;
        size_t filas;
        std::string operacion; 

    public: 
        Matriz();
        void crearMatriz();
        T tipOper(int opcion);
};

#include "Matriz.cpp"

#endif