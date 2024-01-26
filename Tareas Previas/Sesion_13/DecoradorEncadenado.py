'''
Se pueden encadenar decoradores, en este caso uno de los 
decoradores se encargara de colocar 15 * abajo y arriba del mensaje
y el otro colocara 15 % abajo y arriba
'''
def star(func):
    def inner(*args, **kwargs):
        print("*" * 15) # Se imprimen los primeros 15 *
        func(*args, **kwargs) # Se llama a la funcion indicando que siga pasando los argumentos y la cantidad no definidad de ellos
        print("*" * 15) # Se imprimen los otros 15 *
    return inner # Se devuelve una referencia a inner

def percent(func):
    def inner(*args, **kwargs):
        print("%" * 15) # Se imprimen los primeros 15 %
        func(*args, **kwargs) # Se llama a la funcion indicando que siga pasando los argumentos y la cantidad no definidad de ellos
        print("%" * 15) # Se imprimen los otros 15 %
    return inner # Se devuelve una referencia a inner

# Se encadenan los decoradores
@star
@percent
def printer(msg):
    print(msg)

printer("Hello")