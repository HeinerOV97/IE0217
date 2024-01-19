'''
Ejemplo del profesor
'''
contador = 15
if (contador > 10): # Sintaxis del if
    print('Contador es mayor a 10') # Print dentro del if
    print('Hola desde el if') # Print dentro del if
    if(contador < 18): # if dentro del otro if, se utiliza para ver el uso de la identacion en python
        print('Y ademas es menor que 18') # print dentro del segundo if
print('Print afuera del if') # Print fuera del if

'''
Ejemplo de las diapositivas uso de if y el else
'''
number = 10
# Si no se cumple el if saltara al else, luego el print de abajo siempre se ejecutara
if number > 0:
    print('Number is positive')
else:
    print('Number is negative')
print('This statement is always executed')

'''
Ejemplo de las diapositivas uso de if, else y elif
'''
number = 0
# Si no se cumple el if saltara al elif, y si tampoco se cumple salta al else luego el print de abajo siempre se ejecutara
if number > 0:
    print('Number is positive')
elif number == 0:
    print('Zero')
else:
    print('Number is negative')
print('This statement is always executed')

