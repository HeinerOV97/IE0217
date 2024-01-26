'''
El siguiente codigo mostrara un error y parara el codigo porque
no se puede dividir entre 0 se comenta el codigo para que no falle
al ejecutar el programa con los siguientes ejemplos
'''
# divide_numbers = 7 / 0
# print(divide_numbers)

'''
Uso de Excepciones en Python
'''
'''
El programa intentara realizar una division entre 0
dentro del bloque try, en este bloque se define codigo que
puede causar una excepcion, en este caso la division no va a
funcionar, por loque saltara al bloque except, este bloque corre
si sucede una excepcion, en este caso este bloque indica que la
division no es posible de realizar
'''
try:
    numerator = 10
    denominator = 0

    result = numerator/denominator

    print(result)

except ZeroDivisionError:
    print("Error: Denominator cannot be 0.")
