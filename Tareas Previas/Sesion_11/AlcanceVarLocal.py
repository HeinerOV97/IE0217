# Variables locales
def greet():
    
    #Variables local
    message = 'Hello'

    print('Local', message)

greet()

# No se podra acceder a la variable message porque pertenece a la funcion, su alcance termina cuando la funcion acaba 
print(message)

