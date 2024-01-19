'''
While para mostrar los numeros del 1 al 5
'''
i = 1
n = 5

while i <= n: # Mientras i sea menor a n, el while hara una iteracion, cada vez sumando un 1 al i
    print(i)
    i = i + 1
'''
While para sumar numeros a un total mientras el numero 
recibido por el usuario sea diferente a cero
'''
total = 0

# Se recibe valor
number = int(input('Enter number'))

# Comienza y se mantiene el bucle mientras number sea diferente de cero
while number != 0:
    total += number # Se suma a total la variable number

    number = int(input('Enter a number: ')) # Se recibe un nuevo valor en cada iteracion

print('Total =', total) # Si se sale del iterador se imprime el total

'''
# While que siempre sera true
'''
'''
age = 32

while age > 18:
    print('You can vote')
'''
# Siempre se imprimira el texto You can vote, porque no hay nada que rompa el while
# Se puede restar un 1 a 32 en cada iteracion para que el bucle en un punto rompa

'''
Else con while
'''
# Al igual que con for, el else se imprimira luego del while
counter = 0
while counter < 3:
    print('Inside loop')
    counter = counter + 1
else:
    print('Inside else')