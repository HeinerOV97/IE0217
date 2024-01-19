# Uso de break en los bucles
# El break rompe el for y continua con la siguiente linea
# El continue salta a la siguiente iteracion

'''
Uso de break en for
'''
for i in range(5): # Cuando i sea igual a tres se rompe el for y no se imprime el 3
    if i == 3:
        break
    print(i)

'''
Uso del continue en for
'''
for i in range(5):
    if i == 3: # Cuando i sea igual a tres se dara un salto a la siguiente iteracion, en este caso se imprime 0, 1, 2 y 4
        continue
    print(i)

'''
Uso del break en while
'''
i = 1
while i <= 10:
    print('6*', (i), '=', 6 * i)
    if i >= 5: # Cuando i sea mayor que 5, se saldra del bucle, por lo que mostrara los resultados de 1, 2, 3, 4, 5 el 5 se incluye porque el print esta antes del if
        break
    i = i + 1

'''
Uso del continue en while
'''
num = 0
while num < 10:
    num += 1

    if (num % 2) == 0: # Si el residuo de la division es cero, este valor no se imprime en pantalla, ya que el continue salta a la siguiente iteracion
        continue
    print(num)