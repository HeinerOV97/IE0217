'''
Se imprime cada caracter dentro del string
'''
for x in 'Python':
    print(x)

'''
Se utiliza un rango de valores para iterarlo
'''
values = range(4)
#Se comprueba que es un rango, que es un tipo de dato
print('Values Type:', type(values))

#Si imprime cada valor del rango de valores
for i in values:
    print(i)

'''
For con lista
'''
languages = ['Swift', 'Python', 'Go']
for _ in languages: # Esto se utiliza para imprimir lo que esta dentro del for una vez, por cada elemento de la lista languages
    print('Hello')
    print('Hi')

'''
else con for
'''
digits = range(4)
# Uso de else en for, no es tipico
for i in digits:
    print(i)
else:
    print("No item left") # Este else se ejecutara luego de que todos las iteraciones del for se ejecuten
    # En este caso este if indica que no hay mas items por mostrar en el rango digits

