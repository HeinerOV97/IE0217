# Se define una funcion que recibe otra funcion
def make_pretty(func):
    # Se define una funcion interna
    def inner():
        # Se realiza un agregado a la funcion por medio de la funcion decoradora
        print("I got decorated")

        # Se llama a la funcion original
        func()
    # Se devuelve una referencia a la funcion interna
    return inner

# Se define una funcion ordinaria
def ordinary():
    print("I am ordinary")

# Se decora la funcion ordinaria, se almacena en una variable una referencia a la funcion interna
decorated_func = make_pretty(ordinary)

decorated_func()

'''
Otra forma de decorar una funcion
'''

# Se define una funcion que recibe otra funcion
def make_pretty(func):
    # Se define una funcion interna
    def inner():
        # Se realiza un agregado a la funcion por medio de la funcion decoradora
        print("I got decorated")

        # Se llama a la funcion original
        func()
    # Se devuelve una referencia a la funcion interna
    return inner

# Se define una funcion ordinaria y por medio de la sintaxis @make_pretty se envia a la funcion decoradora
@make_pretty
def ordinary():
    print("I am ordinary")

ordinary()
