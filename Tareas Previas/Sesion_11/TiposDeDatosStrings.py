# Variables string
name = "Python"
print(name)

message = "I love Python"
print(message)

'''
Acceder a un elemento del string
'''
greet = 'Hello'

#Acceder al primer elemento del string anterior
print(greet[0])

#Acceder al segundo elemento del string anterior
print(greet[-4])

#Acceder los elementos del primer al tercer elemento del string
print(greet[0:3])

'''
Los elementos de los string no pueden ser modificados
'''

'''
Si se lo puede caer encima a las variables de tipo string
'''
message1 = 'Hola Amigos'

message1 = 'Hello Friends'

# Se imprima Hello Friends, porque la variable fue modificada
print(message1)

'''
String multilinea
'''
message2 = """
Never gonna give you up
Never goona let you down
"""

'''
Se pueden comparar strings y obtener booleanos
'''
str1 = "Hello, world!"
str2 = "I love Python"
str3 = "Hello, world!"

print(str1 == str2) # Devolvera un false porque los strings no son iguales
print(str1 == str3) # Devolvera un true porque los string son iguales

'''
Unir strings con el operador +
'''

greet1 = "Hello "
name1 = "Jack"

# Se unen los dos string anteriores con +
result = greet1 + name1
print(result)

'''
Iterar elementos de un string
'''
greet2 = "Hello"
for letter in greet2:
    print(letter) # Se va a imprimer cada caracter de la palabra Hello

'''
Obtener el tamano de un string
'''
greet3 = "Hello"
print(len(greet2))

'''
Poder utilizar comillas dobles y sencillas en strings se utiliza \\
'''

#Para utilizar comillar dobles
example = "He said, \"What's there?\""
print(example)

#Para utilizar comillas simples
example2 = 'He said, "What\'s there?"'
print(example2)

'''
Colocar variables en string en prints
'''

name2 = 'Cathy'
country = 'UK'

print(f'{name2} is from {country}')