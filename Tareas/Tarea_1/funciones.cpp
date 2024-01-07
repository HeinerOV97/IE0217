#include "funciones.hpp"
#include <string>
#include <random>

int gNumRandom;
int gNumIntentos;
int gPrimerValor;
int gSegValor;
int gDificultad;

void mostrarMenu(){
    std::cout << "\n --- Menu ---\n";
    std::cout << "1. Intervalo para adivinar el número\n";
    std::cout << "2. Indique la dificultad del juego\n";
    std::cout << "3. Inicio del juego\n";
    std::cout << "4. Salir\n";
}

void elegirOpcion(){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
        case 1: //Definir intervalo del juego
            definirIntervalo();
            break;
        case 2: //Definir la dificultad del juego
            definirDificultad();
            break;
        case 3: //Se inicia el juego
            iniciaJuego();
            break;
        case 4: //Salir
            std::cout << "Saliendo del programa...\n";
            exit(0);
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

void definirIntervalo(){
    
    int gPrimerValor, gSegValor, valorParaAdvinar, numRandom;
    
    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> gPrimerValor;

    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> gSegValor;

    std::cout << gPrimerValor << " " << gSegValor << std::endl;

    if(gPrimerValor > gSegValor){
        int cambioPos = gPrimerValor;
        gPrimerValor = gSegValor;
        gSegValor = cambioPos;
        std::cout << gPrimerValor << gSegValor << std::endl;
    }

    numRandom = (rand() % (gSegValor - gPrimerValor + 1)) + gPrimerValor;
    
    gNumRandom = numRandom;

    gNumIntentos = (gSegValor - gPrimerValor) / 3;

}

void definirDificultad(){
    int opcion;
    std::cout << "Defina la dificultad con la que desea jugar:\n" << std::endl;
    std::cout << "1. Facil: Tendrá un tercio del intervalo escogido de oportunidades para adivinar el número."
                << " El juego le indicará si el numero que prueba es mayor o menos al numero objetivo." << std::endl;
    std::cout << "2. Dificil: Tendrá un tercio del intervalo escogido de oportunidades para adivinar el número."
                << " El juego le indicará si el numero que prueba es cercano o no al numero objetivo por medio de palabras clave."
                << " Estas serán: Congelado, Frio, Caliente o hirviendo" << std::endl;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;
                
    switch (opcion){
        case 1: //Definir intervalo del juego
            gDificultad = 1;
            break;
        case 2: //Definir la dificultad del juego
            gDificultad = 2;
            break;
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n\n";
            definirDificultad();
    }
}
