#ifndef FUNCIONES_HPP
#define FUNCIONES_HPP
#include <string>
#include <iostream>

/**
 * @brief datosJuego Estructura que almacenara los datos dados por el usuario asi como todas las variables necesarias para llevar acabo el juego
*/
struct datosJuego {
    int numRandom; /**< Numero aleatorio obtenido del intervalo dado por el usuario. */
    int numIntentos; /**< Numero de intentos que tendra el usuario, es una tercera parte del intervalo escogido por el usuario. */
    int primerValor; /**< Primer valor para el intervalo escogido por el usuario. */
    int segValor; /**< Segundo valor para el intervalo escogido por el usuario. */
    int dificultad; /**< Dificultad del juego escogida por el usuario. */
};

/**
 * @brief mostraMenu Muestra el menu de opciones al usuario no recibe parametros
*/
void mostrarMenu();

/**
 * @brief elegirOpcion Recibe la opcion escogida por el usuario en el menu y a partir de eso llama a la funcion indicada
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void elegirOpcion(datosJuego *ptr, datosJuego &datos);

/**
 * @brief definirIntervalo funcion encargada de crear un numero aleatorio a partir de un intervalo escogido por el usuario
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void definirIntervalo(datosJuego *ptr, datosJuego &datos);

/**
 * @brief definirDificultad funcion encargada de definir la dificultad del juego a partir de la desicion del usuario
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void definirDificultad(datosJuego *ptr, datosJuego &datos);

/**
 * @brief iniciaJuego Esta funcion lleva a cabo el juego, tiene los comandos necesarios para que el juego se lleve acabo en las 2 dificultades
 * @param ptr apunta a la direccion de almacenamiento de la variable datos creada a partir de la estructura datosJuego
 * @param datos se pasa la referencia a la variable datos creada a partir de la estructura datosJuego
*/
void iniciaJuego(datosJuego *ptr, datosJuego &datos);


#endif