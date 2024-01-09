#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>


struct datosJuego {
    int numRandom;
    int numIntentos;
    int primerValor;
    int segValor;
    int dificultad;
};

void mostrarMenu();
void elegirOpcion(datosJuego *ptr, datosJuego &datos);
void definirIntervalo(datosJuego *ptr, datosJuego &datos);
void definirDificultad(datosJuego *ptr, datosJuego &datos);
void iniciaJuego(datosJuego *ptr, datosJuego &datos);


#endif