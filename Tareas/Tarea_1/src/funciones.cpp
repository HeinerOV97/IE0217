/**
 * \copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
 * @file main.cpp
 * @date 09/01/2024
 * @author Heiner Obando Vega
*/

#include "funciones.hpp"
#include <string>
#include <time.h>

/**
 * @brief mostraMenu Muestra el menu de opciones al usuario no recibe parametros
*/
void mostrarMenu(){
    std::cout << "\n --- Menu ---\n";
    std::cout << "1. Intervalo para adivinar el numero\n";
    std::cout << "2. Indique la dificultad del juego\n";
    std::cout << "3. Inicio del juego\n";
    std::cout << "4. Salir\n";
}

/**
 * @brief elegirOpcion Recibe la opcion escogida por el usuario en el menu y a partir de eso llama a la funcion indicada
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void elegirOpcion(datosJuego *ptr, datosJuego &datos){

    int opcion; // Se declara la variable local opcion, donde se almacenara la opcion elegida por el usuario en el menu
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion; //Se recibe la opcion escogida por el usuario

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
        default: //Opcion incorrecta
            std::cout << "Opcion no valida. Intente de nuevo...\n";
    }
}

/**
 * @brief definirIntervalo funcion encargada de crear un numero aleatorio a partir de un intervalo escogido por el usuario
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void definirIntervalo(datosJuego *ptr, datosJuego &datos){
    
    int valorRandom; //Se declara la variable al usurio donde se guardara el valor aleatorio
    
    //Se solicita al usuario el primero numero del intervalo
    std::cout << "Defina el primer valor del intervalo" << std::endl;
    std::cin >> ptr->primerValor;

    //Se solicita al usuario el segundo numero del intervalo
    std::cout << "Defina el segundo valor del intervalo" << std::endl;
    std::cin >> ptr->segValor;

    /*Si el valor ingresado por el usuario de primero es mayor que el segundo se invierten, esto para evitar conflictos
    al obtener el numero aleatorio*/
    if(datos.primerValor > datos.segValor){
        int cambioPos = datos.primerValor;
        datos.primerValor = datos.segValor;
        datos.segValor = cambioPos;
    }

    //Se utiliza el metodo rand() para obtener el numero aleatorio
    srand(time(0)); //srand crea la semilla para obtener el numero aleatorio
    //Sintaxis para obtener un numero aleatorio entre un intervalo
    valorRandom = (rand() % (datos.segValor - datos.primerValor + 1)) + datos.primerValor; 
    datos.numRandom = valorRandom; //Se almacena el numero aleatorio en un dato de la variable estructura
    datos.numIntentos = (datos.segValor - datos.primerValor) / 3; //Se calcula el numero de intentos que tendra el usuario

}

/**
 * @brief definirDificultad funcion encargada de definir la dificultad del juego a partir de la desicion del usuario
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void definirDificultad(datosJuego *ptr, datosJuego &datos){
    int opcion; // Se declara la variable local opcion, donde se almacenara la opcion elegida por el usuario para la dificultad
    //Se explican al usuario los dos modos de juego
    std::cout << "Defina la dificultad con la que desea jugar:\n" << std::endl;
    std::cout << "1. Facil: Tendra un tercio del intervalo escogido de oportunidades para adivinar el numero."
                << " El juego le indicara si el numero que prueba es mayor o menos al numero objetivo.\n" << std::endl;
    std::cout << "2. Dificil: Tendra un tercio del intervalo escogido de oportunidades para adivinar el numero."
                << " El juego le indicara si el numero que prueba es cercano o no al numero objetivo por medio de palabras clave."
                << " Estas seran: Congelado, Frio, Caliente o hirviendo\n" << std::endl;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion; // Se recibe la opcion escogida por el usuario
    
    // Se define la dificultad a partir de la opcion dada por el usuario
    switch (opcion){
        case 1: //Definir intervalo del juego
            datos.dificultad = 1;
            break;
        case 2: //Definir la dificultad del juego
            datos.dificultad = 2;
            break;
        default:
            std::cout << "Opcion no valida. Intente de nuevo...\n\n"; //Si no define un valor adecuado se le solicita de nuevo
            definirDificultad(ptr, datos);
    }
}

/**
 * @brief iniciaJuego Esta funcion lleva a cabo el juego, tiene los comandos necesarios para que el juego se lleve acabo en las 2 dificultades
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void iniciaJuego(datosJuego *ptr, datosJuego &datos){
    int numeroPrueba; //Variable donde se almacena el numero que intenta el usuario
    int opcion; // Se declara la variable local opcion, donde se almacenara la opcion de reintentar o volver al menu principal

    //Se verifica si el usuario escogio un intervalo valido
    if(datos.primerValor == 0 && datos.segValor == 0){
        std::cout << "No a seleccionado un rango correcto para iniciar el juego" << std::endl;
        return;
    } else if (datos.primerValor == datos.segValor) {
        std::cout << "Los valores ingresados para el intervalo son iguales, seleccione un rango correcto para iniciar el juego" << std::endl;
        return;
    } else {
        std::cout << "\n---Hora de iniciar el juego---\n" << std::endl; //Se inicia el juego
        if (datos.dificultad == 1){ //Modo facil
            for(int i = 0; i < datos.numIntentos; ++i){ //Se hace un for que se repita el numero de intentos que posee el usuario
                std::cout << "Ingresa un numero he intenta llegar al numero objetivo" << std::endl;
                std::cin >> numeroPrueba; //Se recibe el valor indicado por el usuario para intentar adivinar
                if (numeroPrueba > datos.segValor || numeroPrueba < datos.primerValor){ //Se verifica si el valor esta dentro del rango
                    std::cout << "Escogio un valor fuera del rango, ha perdido un turno" << std::endl;
                    continue; //Si el valor esta fuera del rango pierde un turno
                } else {
                    if (numeroPrueba > datos.numRandom){ //Se verifica si el valor es mayor al numero buscado
                        std::cout << "Escogio un valor mayor que el numero objetivo, ha perdido un turno, le quedan " << std::endl;
                        continue; //Si el valor es mayor pierde un turno
                    } else if (numeroPrueba < datos.numRandom) { //Se verifica si el valor es menor al numero buscado
                        std::cout << "Escogio un valor menor que el numero objetivo, ha perdido un turno, le quedan " << std::endl;
                        continue; //Si el valor es mayor pierde un turno
                    } else if (numeroPrueba == datos.numRandom){ //Se verifica si el valor es igual al numero buscado
                        std::cout << "Felicidades a escogido el numero objetivo" << std::endl;
                        std::cout << "Volviendo al menu principal..." << std::endl;
                        return; //Si gana vuelve al menu principal
                    }
                }
            }
            //Si pierde se le avisa que ha perdido, y se le da oportunidad de reintentar o volver al menu principal
            std::cout << "Ha perdido su oportunidad para adivinar el numero" << std::endl;
            std::cout << "1. Para reintertarlo" << std::endl;
            std::cout << "2. Volver al menu principal" << std::endl;
            std::cin >> opcion; //Se recibe decision del usuario
                
            switch (opcion){
            case 1: //Reintentar adivinar
                iniciaJuego(ptr, datos);
                break;
            case 2: //Volver al menu principal
                break;
            default:
                std::cout << "Opcion no valida. Volviendo al menu principal...\n\n";
            }
        // Modo dificil
        } else if (datos.dificultad == 2) {
            for(int i = 0; i < datos.numIntentos; ++i){  //Se hace un for que se repita el numero de intentos que posee el usuario
                std::cout << "Ingresa un numero he intenta llegar al numero objetivo" << std::endl;
                std::cin >> numeroPrueba; //Se recibe el valor indicado por el usuario para intentar adivinar
                if (numeroPrueba > datos.segValor || numeroPrueba < datos.primerValor){ //Se verifica si el valor esta dentro del rango
                    std::cout << "Escogio un valor fuera del rango, ha perdido un turno" << std::endl;
                    continue; //Si el valor esta fuera del rango pierde un turno
                } else {
                    //Se verifica si el numero escogido es mayor o menor por 1 al numero objetivo, esto indica que esta hirviendo
                    if (numeroPrueba == datos.numRandom + 1 || numeroPrueba == datos.numRandom - 1){
                        std::cout << "¡Esta hirviendo! " << std::endl;
                        continue; //Pierde un turno
                    /*Se verifica si el numero escogido es mayor o menor por una diferencia entre 2 y 4 al numero objetivo,
                    esto indica que esta caliente*/
                    } else if ((numeroPrueba <= datos.numRandom - 2 && numeroPrueba >= datos.numRandom - 4) || 
                                (numeroPrueba >= datos.numRandom + 2 && numeroPrueba <= datos.numRandom + 4)) {
                        std::cout << "¡Esta caliente!" << std::endl;
                        continue; //Pierde un turno
                    /*Se verifica si el numero escogido es mayor o menor por una diferencia entre 5 y 8 al numero objetivo,
                    esto indica que esta frio*/
                    } else if ((numeroPrueba < datos.numRandom - 4 && numeroPrueba >= datos.numRandom - 8) || 
                                (numeroPrueba > datos.numRandom + 4 && numeroPrueba <= datos.numRandom + 8)) {
                        std::cout << "¡Esta frio!" << std::endl; //Pierde un turno
                    /*Se verifica si el numero escogido es mayor o menor por una diferencia de 8 o mas al numero objetivo,
                    esto indica que esta congelado*/
                    } else if (numeroPrueba < datos.numRandom - 8 || numeroPrueba > datos.numRandom + 8) {
                        std::cout << "¡Esta congelado!" << std::endl; //Pierde un turno
                    } else if (numeroPrueba == datos.numRandom){ // Se verifica si el valor es igual al numero buscado
                        std::cout << "Felicidades a escogido el numero objetivo" << std::endl;
                        std::cout << "Volviendo al menu principal..." << std::endl;
                        return; // Si gana vuelve al menu principal
                    }
                }
            }
            //Si pierde se le avisa que ha perdido, y se le da oportunidad de reintentar o volver al menu principal
            std::cout << "Ha perdido su oportunidad para adivinar el numero" << std::endl;
            std::cout << "1. Para reintertarlo" << std::endl;
            std::cout << "2. Volver al menu principal" << std::endl;
            std::cin >> opcion; //Se recibe decision del usuario
            
            switch (opcion){
            case 1: //Reintentar adivinar
                iniciaJuego(ptr, datos);
                break;
            case 2: //Volver al menu del juego
                break;
            default:
                std::cout << "Opcion no valida. Volviendo al menu principal...\n\n";
            }
            
        }
    }
}
