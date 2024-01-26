'''
Se pueden crear excepciones personalizas
por medio del uso de clases
'''

# Se llama a la clase Exception, para tener acceso a las excepciones
class InvalidAgeException(Exception):
    # En este caso se levanta cuando el valor de entrada en menor de 18
    pass

# Se crea la variable a comparar
number = 18

'''
En el bloque try se le pedira al usuario un numero,
si el valor es menor a 18 se llamara a la excepcion
creada, en este caso InvalidAgeException, por lo que
el codigo saltara al bloque except y mostrara un
error, indicando que el valor es menor a 18
'''
try:
    input_num = int(input("Enter a number: "))
    if input_num < number:
        raise InvalidAgeException #Si el valor es menor a 18 se levanta la excepcion creada
    else:
        print("Eligible to Vote")

except InvalidAgeException:
    print("Exception ocurred: Invalid Age")