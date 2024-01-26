# Funcion saludo, recibe como argumento un nombre
def greet(name):

    # Funcion interna
    def display_name():
        print("Hi", name)

    # Se llama a la funcion interna
    display_name()

# Se llama a la funcion externa, esta a su vez llamara a la funcion interna
greet("John")

'''
Otra forma de realizar la misma funcion anterior
'''
def greet():
    # Variable que puede ser definida desde afuera de la funcion
    name = 'John'

    # Se devuelve una funcion lambda
    return lambda: "Hi " + name

# Como la funcion devuelve una referencia a la funcion lambda se almacena dentro de una variable
message = greet()

# Se imprime el mensaje
print(message()) # Este parentesis despues de message indica que es un valor invocable, en este caso se llama
                 # a la funcion lambda


