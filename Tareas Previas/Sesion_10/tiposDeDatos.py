'''
Todo en python es un objeto, los tipos de datos son clases
y los variables son instancias de estas clases
'''

'''
Variables numericas en Python
'''
# Variables de tipo entero
num1 = 5
print(num1, 'is of type', type(num1)) #type() es una funcion que devuelve el tipo de dato de la variable

# Variable de tipo flotante
num2 = 2.0
print(num2, 'is of type', type(num2)) #type() es una funcion que devuelve el tipo de dato de la variable

# Variable de tipo complejo
num3 = 1+2j
print(num3, 'is of type', type(num3)) #type() es una funcion que devuelve el tipo de dato de la variable

'''
String en Python
'''
# String en python se distinguen por las comillas
name = 'Python'
print(name)

message = 'Python for beginners'
print(message)


'''
Listas en Python
'''
# Lista en python, es equivalente a los arreglos
languages = ["Swift", "Java", "Python"]

# Para acceder al primer elemento de la lista anterior
print(languages[0]) # Imprime Swift

# Para accedeer al ultimo elemento de la lista anterior
print(languages[2]) # Imprime Python

'''
Tuplas en Python
'''
# Tuplas en python, son listas que no pueden ser modificadas
product = ('Microsoft', 'Xbox', 499.99)

# Para acceder al primer elemento de la tupla anterior
print(product[0]) # Imprime Microsoft

# Para accedeer al segundo elemento de la tupla anterior
print(product[2]) # Imprime Xbox

'''
Diccionarios en Python
'''
# Se coloca una clave y un valor, se accede al valor por medio de la clave
capital_city = {'Nepal': 'Kathmandu', 'Italy': 'Rome', 'England': 'London'}

# Se imprime el diccionarios
print(capital_city)

# Se imprimen valores del diccionario
print(capital_city['Nepal']) # Este key nos devuelve el valor Kathmandu
# print(capital_city['Kathmandu']) # Esto dara un mensaje de error, que es un valor

'''
Set en Python
'''

# Un set es un grupo de elementos unicos entre si, no se puede repetir un elemento, 
# si se repite solo se guarda uno
student_id = {112, 114, 116, 118, 115}

# Se imprime el set
print(student_id)

# Se comprueba que es un set
print(type(student_id))

