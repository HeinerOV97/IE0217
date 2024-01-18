# Esto es un comentario
'''
Comentario de 
mas de una
linea en python
'''

# Variables de python

# Variable de tipo entero
number = 10

# Variable de tipo string
site_name = 'eie.ucr.ac.cr'
print(site_name)

# Se asigna un nuevo valor a site_name
site_name = 'google.com'
print(site_name)

# Se puede asignar un valor a mas de una variable en una linea
a, b, c = 5, 3.2, 'Hello'

# Se imprimen las variables anteriores
print(a) # Se imprime 5
print(b) # Se imprime 3.2
print(c) # Se imprime Hello

# Se asigna el mismo valor a dos variables
site1 = site2 = 'eie.ucr.ac.cr'
print(site1) # Se imprime eie.ucr.ac.cr
print(site2) # Se imprime eie.ucr.ac.cr

#Booleanos
result1 = True

# Literal Null
value = None
print(value)

# Los import se colocan al principio del codigo en este caso se coloca aqui para hacerlo mas visual
# Se importa el modulo constanst con las constantes que se desea utilizar
import constanst 

'''
Uso de constantes, estas comunmente se declaran y asignan en un modelo, un archivo aparte que las contiene
Realmente no existen las constantes pero por convencion se busca que las variables en mayuscula no se modifiquen
'''
print(constanst.PI) # Se imprime el valor de PI ubicado en el archivo Constanst.py
print(constanst.GRAVITY) # Se imprime el valor de GRAVITY ubicado en el archivo Constanst.py