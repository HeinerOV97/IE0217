/*Se crea la declaracion de la funcion*/

/**Esto es una buena practica, si dos archivos .cpp estan llamando 
la encabezado el primer definira SUM_H, el segundo no, porque anteriormente se definio, esto ahorra tiempo y memoria**/

#ifndef SUM_H /*Si no hay una variable defina como SUM_H*/
#define SUM_H /*Se define una variable como SUM_H*/

/*Prototipo de la funcion*/
int sum(int a, int b);

#endif
