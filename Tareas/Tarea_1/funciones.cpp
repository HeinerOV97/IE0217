#include "funciones.hpp"
#include <string>
#include <random>

int gNumRandom;
int gNumIntentos;
int gPrimerValor;
int gSegValor;

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
            //definirDificultad();
            break;
        case 3: //Se inicia el juego
            
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
