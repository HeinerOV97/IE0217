/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file MaterialesCompl.hpp
 * @date 22/01/2024
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
        std::vector<std::vector<T>> matriz; /**< Se almacenara el vector bidimensional que almacena matrices. */
        size_t columnas; /**< Se almacenaran la cantidad de columnas de la matriz */
        size_t filas; /**< Se almacenaran la cantidad de filas de la matriz */
        std::string operacion; /**< Se almacenara la operacion escogida por el usuario */

    public: 
        /**
        * @brief Matriz: Constructor de la clase, inicializa los valores de filas y columnas en cero
        */
        Matriz();

        /**
        * @brief crearMatriz: Metodo encargado de crear la matriz a partir de los datos dados por el usuario
        */
        void crearMatriz();

        /**
        * @brief tipOper: Metodo que recibe la operacion que desea realizar el usuario
        */
        T tipOper(int opcion);

        /**
        * @brief getFilas: Metodo encargado de devolver la cantidad de filas de la matriz
        */
        T getFilas() const;

        /**
        * @brief getColumnas: Metodo encargado de devolver la cantidad de columnas de la matriz
        */
        T getColumnas() const;
};

// Se incluye el archivo cpp para evitar perdidas de referencias, esto es necesario al trabajar con templates
#include "Matriz.cpp"

#endif