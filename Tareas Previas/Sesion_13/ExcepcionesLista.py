'''
En este caso en la lista se buscara el elemento numero 5
de la lista en el bloque try, en este caso no funcionara
ya que su posicion maxima es 3, se colocan dos except,
Python entendera cual es el except que necesita
por lo que saltara al except IndexError, ya que es un error
de indice.
'''
try:
    even_numbers = [2, 4, 6, 8]
    print(even_numbers[5])

except ZeroDivisionError:
    print("Denominator cannot be 0.")

except IndexError:
    print("Index Out of Bound")