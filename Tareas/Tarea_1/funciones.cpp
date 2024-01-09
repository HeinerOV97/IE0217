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
    
    int valorParaAdvinar, valorRandom;
    
    
    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> ptr->primerValor;

    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> ptr->segValor;

    std::cout << datos.primerValor << " " << datos.segValor << std::endl; //Borrar es para pruebas

    if(datos.primerValor > datos.segValor){
        int cambioPos = datos.primerValor;
        datos.primerValor = datos.segValor;
        datos.segValor = cambioPos;
        std::cout << datos.primerValor << datos.segValor << std::endl; //Borrar es para pruebas
    }

    srand(time(0));
    valorRandom = (rand() % (datos.segValor - datos.primerValor + 1)) + datos.primerValor;
    datos.numRandom = valorRandom;
    datos.numIntentos = (datos.segValor - datos.primerValor) / 3;

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
            datos.dificultad = 1;
            break;
        case 2: //Definir la dificultad del juego
            datos.dificultad = 2;
            break;
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n\n";
            definirDificultad(ptr, datos);
    }
}

void iniciaJuego(datosJuego *ptr, datosJuego &datos){
    int numeroPrueba;
    int opcion;

    if(datos.primerValor == 0 && datos.segValor == 0){
        std::cout << "No a seleccionado un rango correcto para iniciar el juego" << std::endl;
        return;
    } else if (datos.primerValor == datos.segValor) {
        std::cout << "Los valores ingresados para el intervalo son iguales, seleccione un rango correcto para iniciar el juego" << std::endl;
        return;
    } else {
        std::cout << "\n---Hora de iniciar el juego---\n" << std::endl;
        if (datos.dificultad == 1){
            std::cout << "Numero para adivinar: " << datos.numRandom << "\n"; //borrar
            std::cout << "Numero de intentos: " << datos.numIntentos << std::endl; //borrar
            for(int i = 0; i < datos.numIntentos; ++i){
                std::cout << "Ingresa un numero he intenta llegar al numero objetivo" << std::endl;
                std::cin >> numeroPrueba;
                if (numeroPrueba > datos.segValor || numeroPrueba < datos.primerValor){
                    std::cout << "Escogio un valor fuera del rango, ha perdido un turno" << std::endl;
                    continue;
                } else {
                    if (numeroPrueba > datos.numRandom){
                        std::cout << "Escogio un valor mayor que el numero objetivo, ha perdido un turno, le quedan " 
                                << datos.numIntentos - i << std::endl;
                        continue;
                    } else if (numeroPrueba < datos.numRandom) {
                        std::cout << "Escogio un valor menor que el numero objetivo, ha perdido un turno, le quedan "
                                << datos.numIntentos - i << std::endl;
                        continue;
                    } else if (numeroPrueba == datos.numRandom){
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
        } else if (datos.dificultad == 2) {
            std::cout << "Numero para adivinar: " << datos.numRandom << "\n";
            std::cout << "Numero de intentos: " << datos.numIntentos << std::endl;
            for(int i = 0; i < datos.numIntentos; ++i){
                std::cout << "Ingresa un numero he intenta llegar al numero objetivo" << std::endl;
                std::cin >> numeroPrueba;
                if (numeroPrueba > datos.segValor || numeroPrueba < datos.primerValor){
                    std::cout << "Escogio un valor fuera del rango, ha perdido un turno" << std::endl;
                    continue;
                } else {
                    if (numeroPrueba == datos.numRandom + 1 || numeroPrueba == datos.numRandom - 1){
                        std::cout << "¡Esta hirviendo! " << std::endl;
                        continue;
                    } else if ((numeroPrueba <= datos.numRandom - 2 && numeroPrueba >= datos.numRandom - 4) || 
                                (numeroPrueba >= datos.numRandom + 2 && numeroPrueba <= datos.numRandom + 4)) {
                        std::cout << "¡Esta caliente!" << std::endl;
                        continue;

                    } else if ((numeroPrueba < datos.numRandom - 4 && numeroPrueba >= datos.numRandom - 8) || 
                                (numeroPrueba > datos.numRandom + 2 && numeroPrueba <= datos.numRandom + 8)) {
                        std::cout << "¡Esta frio!" << std::endl;

                    } else if (numeroPrueba < datos.numRandom - 8 || numeroPrueba > datos.numRandom + 8) {
                        std::cout << "¡Esta congelado!" << std::endl;

                    } else if (numeroPrueba == datos.numRandom){
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
