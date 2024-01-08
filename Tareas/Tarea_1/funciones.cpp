#include "funciones.hpp"
#include <string>
#include <random>
#include <time.h>

void mostrarMenu(){
    std::cout << "\n --- Menu ---\n";
    std::cout << "1. Intervalo para adivinar el número\n";
    std::cout << "2. Indique la dificultad del juego\n";
    std::cout << "3. Inicio del juego\n";
    std::cout << "4. Salir\n";
}

void elegirOpcion(datosJuego *ptr, datosJuego &datos){
    int opcion;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    switch (opcion){
        case 1: //Definir intervalo del juego
            definirIntervalo(ptr, datos);
            break;
        case 2: //Definir la dificultad del juego
            definirDificultad(ptr, datos);
            break;
        case 3: //Se inicia el juego
            iniciaJuego(ptr, datos);
            break;
        case 4: //Salir
            std::cout << "Saliendo del programa...\n";
            exit(0);
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

void definirIntervalo(datosJuego *ptr, datosJuego &datos){
    
    int valorParaAdvinar, numRandom;
    
    
    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> ptr->gPrimerValor;

    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> ptr->gSegValor;

    std::cout << datos.gPrimerValor << " " << datos.gSegValor << std::endl; //Borrar es para pruebas

    if(datos.gPrimerValor > datos.gSegValor){
        int cambioPos = datos.gPrimerValor;
        datos.gPrimerValor = datos.gSegValor;
        datos.gSegValor = cambioPos;
        std::cout << datos.gPrimerValor << datos.gSegValor << std::endl; //Borrar es para pruebas
    }

    srand(time(0));
    numRandom = (rand() % (datos.gSegValor - datos.gPrimerValor + 1)) + datos.gPrimerValor;
    datos.gNumRandom = numRandom;
    datos.gNumIntentos = (datos.gSegValor - datos.gPrimerValor) / 3;

}

void definirDificultad(datosJuego *ptr, datosJuego &datos){
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
            datos.gDificultad = 1;
            break;
        case 2: //Definir la dificultad del juego
            datos.gDificultad = 2;
            break;
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n\n";
            definirDificultad(ptr, datos);
    }
}

void iniciaJuego(datosJuego *ptr, datosJuego &datos){
    int numeroPrueba;
    int opcion;

    if(datos.gPrimerValor == 0 && datos.gSegValor == 0){
        std::cout << "No a seleccionado un rango correcto para iniciar el juego" << std::endl;
        return;
    } else if (datos.gPrimerValor == datos.gSegValor) {
        std::cout << "Los valores ingresados para el intervalo son iguales, seleccione un rango correcto para iniciar el juego" << std::endl;
        return;
    } else {
        std::cout << "\n---Hora de iniciar el juego---\n" << std::endl;
        if (datos.gDificultad == 1){
            std::cout << "Numero para adivinar: " << datos.gNumRandom << "\n";
            std::cout << "Numero de intentos: " << datos.gNumIntentos << std::endl;
            for(int i = 0; i < datos.gNumIntentos; ++i){
                std::cout << "Ingresa un numero he intenta llegar al numero objetivo" << std::endl;
                std::cin >> numeroPrueba;
                if (numeroPrueba > datos.gSegValor || numeroPrueba < datos.gPrimerValor){
                    std::cout << "Escogio un valor fuera del rango, ha perdido un turno" << std::endl;
                    continue;
                } else {
                    if (numeroPrueba > datos.gNumRandom){
                        std::cout << "Escogio un valor mayor que el numero objetivo, ha perdido un turno, le quedan " 
                                << i-datos.gNumIntentos << std::endl;
                        continue;
                    } else if (numeroPrueba < datos.gNumRandom) {
                        std::cout << "Escogio un valor menor que el numero objetivo, ha perdido un turno, le quedan "
                                << i-datos.gNumIntentos << std::endl;
                        continue;
                    } else if (numeroPrueba == datos.gNumRandom){
                        std::cout << "Felicidades a escogido el numero objetivo" << std::endl;
                        std::cout << "Volviendo al menu principal..." << std::endl;
                        return;
                    }
                }
            }
            std::cout << "Ha perdido su oportunidad para adivinar el numero" << std::endl;
            std::cout << "1. Para reintertarlo" << std::endl;
            std::cout << "2. Volver al menu principal" << std::endl;
            std::cin >> opcion;
                
            switch (opcion){
            case 1: //Definir intervalo del juego
                iniciaJuego(ptr, datos);
                break;
            case 2: //Definir la dificultad del juego
                break;
            default:
                std::cout << "Opcion no valida. Intente de nuevo...\n\n";
            }
        // Modo dificil
        } else if (datos.gDificultad == 2) {
            std::cout << "Numero para adivinar: " << datos.gNumRandom << "\n";
            std::cout << "Numero de intentos: " << datos.gNumIntentos << std::endl;
            for(int i = 0; i < datos.gNumIntentos; ++i){
                std::cout << "Ingresa un numero he intenta llegar al numero objetivo" << std::endl;
                std::cin >> numeroPrueba;
                if (numeroPrueba > datos.gSegValor || numeroPrueba < datos.gPrimerValor){
                    std::cout << "Escogio un valor fuera del rango, ha perdido un turno" << std::endl;
                    continue;
                } else {
                    if (numeroPrueba == datos.gNumRandom + 1 || numeroPrueba == datos.gNumRandom - 1){
                        std::cout << "¡Esta hirviendo! " << std::endl;
                        continue;
                    } else if ((numeroPrueba <= datos.gNumRandom - 2 && numeroPrueba >= datos.gNumRandom - 4) || 
                                (numeroPrueba >= datos.gNumRandom + 2 && numeroPrueba <= datos.gNumRandom + 4)) {
                        std::cout << "¡Esta caliente!" << std::endl;
                        continue;

                    } else if ((numeroPrueba < datos.gNumRandom - 4 && numeroPrueba >= datos.gNumRandom - 8) || 
                                (numeroPrueba > datos.gNumRandom + 2 && numeroPrueba <= datos.gNumRandom + 8)) {
                        std::cout << "¡Esta frio!" << std::endl;

                    } else if (numeroPrueba < datos.gNumRandom - 8 || numeroPrueba > datos.gNumRandom + 8) {
                        std::cout << "¡Esta congelado!" << std::endl;

                    } else if (numeroPrueba == datos.gNumRandom){
                        std::cout << "Felicidades a escogido el numero objetivo" << std::endl;
                        std::cout << "Volviendo al menu principal..." << std::endl;
                        return;
                    }
                }
            }
            std::cout << "Ha perdido su oportunidad para adivinar el numero" << std::endl;
            std::cout << "1. Para reintertarlo" << std::endl;
            std::cout << "2. Volver al menu principal" << std::endl;
            std::cin >> opcion;
                
            switch (opcion){
            case 1: //Definir intervalo del juego
                iniciaJuego(ptr, datos);
                break;
            case 2: //Definir la dificultad del juego
                break;
            default:
                std::cout << "Opcion no valida. Intente de nuevo...\n\n";
            }
            
        }
    }
}
