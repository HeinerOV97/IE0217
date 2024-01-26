'''
Los generadores devuelven un iterador que
produce una secuencia de valores cuando este
se repite
'''

def my_generator(n):

    # Se define un contador inicial
    value = 0

    # Bucle que continuara mientras el contador sea menor
    # al argumento n recibido

    while value < n:
        yield value # yield produce un valor del generador y pausa la ejecucion de la 
                    # funcion del generador hasta que se solicite el siguiente valor

        #Se incrementa el contador en 1
        value += 1

# Cuando se llama al generador no se ejecuta el cuerpo de una funcion de inmediato.
# Sucede que se devuelve un objeto generador que se puede iterar para generar valores
# En este caso se itera sobre el objeto creado por el generador
for value in my_generator(3):
    # Se imprime el valor
    print(value)