'''
El programa intentara realizar una division entre 0
dentro del bloque try, en este bloque se define codigo que
puede causar una excepcion, en este caso la division no va a
funcionar, por loque saltara al bloque except, este bloque corre
si sucede una excepcion, en este caso este bloque indica que la
division no es posible de realizar, esto es una excepcion que
es sabe que puede suceder.
Agregado a esto a ahora se utiliza el bloque finally, este bloque
se ejecutara luego del bloque finally, en este caso en finally se
pueden agregar comentarios extras al usuario, o realizar algun
postprocesamiento para manejar el error
'''
try:
    numerator = 10
    denominator = 0

    result = numerator/denominator

    print(result)

except ZeroDivisionError:
    print("Error: Denominator cannot be 0.")

finally:
    print("This is finally block")