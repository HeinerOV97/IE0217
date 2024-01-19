# Variables globales
message = 'Hello' # Se declara una variable global

# En este caso tanto dentro como fuera de la funcion se tendra acceso a la variable, ya que esta es global
def greet():
    
    print('Local', message) # Este print funciona

greet()

print('Global', message) # Este print funciona

'''
Mas ejemplos de diapositivas
'''
#Variable global
c = 1

def add():

    print(c) # Variable global puede ser utilizada dentro de la funcion

add()

'''
El siguiente comando no funcionara porque se quiere modificar 
una variable global sin especificar en codigo que es global
'''

'''
#Variable global
c = 1

def add():

    c = c + 2

add()
'''

'''
La forma correcta de modificar una variable global es la siguiente
'''

def addGlobal():

    global c # Se indica que la variable a utilizar es global

    c = c + 2

    print("Al modificar la variable global sumandole 2, se obtiene", c)

addGlobal()
