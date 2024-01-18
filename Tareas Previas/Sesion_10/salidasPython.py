# Sintaxis para imprimir en Python
# print(object= separator= end= file= flush=)
# Se tiene varias opciones para imprimir en pantalla,
# Reviar presentacion y documentacion

# Variable entera
number = 10.6

# Variable string
name = "IE0217"

# Se imprimen variables
print(number)
print(name)

# Se pueden unir strings
print('Este curso es ' + name)

# Opciones que se pueden utilizar en print
print('New Year', 2023, 'See you soon!', sep= '. ') # En este caso las variables se dividiran por un espacio

print('Good Morning!', end= ' ') # Se imprimira con un espacio al final
print('It is rainy today')

x = 5
y = 10
# Utilizar metodo .format en el print
print('The value of x is {} and y is {}'.format(x,y)) # Los valores x y y sustituyen las {} en el string


