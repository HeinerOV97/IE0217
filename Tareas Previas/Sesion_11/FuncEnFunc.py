# Se crea una funcion externa
def outer():
    message = 'local' # Se declara esta variable

    # Se declara una funcion pero aun no hace nada 
    def inner():

        # Variable nonlocal, esto quiere decir que hace referencia a una variable fuera de la funcion actual
        nonlocal message

        message = 'nonlocal' # Le cambia el valor a la variable
        print("inner:", message) # imprime su valor
    
    inner() # La funcion inner comienza a funcionar cuando es llamada en este punto
    print("outer:", message) # Ahora la variable en la funcion externa tendra el valor que se le asigno en la funcion interna

outer()

num = 30

def outer_function():
    num = 20 # Esto al no indicarse como global, no modifica la variable num global

    def inner_function():
        global num # Aqui se declara el num dentro de esta funcion como global, por lo que se modificara el num global no el de la funcion externa
        num = 25
    
    print("Before calling inner_function(): ", num) # Aqui num vale 20 antes de llamar funcion interna
    inner_function()
    print("After calling inner_function(): ", num) # Aqui num vale 20 despues de llamar funcion interna, esto porque el no modifica el num de la funcion externa si no el global

print("Before outer", num) # Num global 30
outer_function()
print("Outside both function: ", num) # Hasta este punto la variable global sera modificada