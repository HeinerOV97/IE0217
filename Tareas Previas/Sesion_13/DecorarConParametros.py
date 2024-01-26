# Funcion decoradora que va a agregar a la funcion divide el metodo para saber si esta dividiendo entre cero
def smart_divide(func):
    def inner(a, b):
        print("I am going to divide", a, "and", b)
        if b == 0:
            print("Whoops! cannot divide")
            return

        return func(a, b)
    return inner # Se devuelve una referencia a la funcion interna

# Esta funcion solo puede dividir valores, por lo que se decora para que se de cuenta que hay un error si divide entre 0
@smart_divide
def divide(a, b):
    print(a/b)

# Se llama a la funcion ordinaria, que por la sintaxis utilizada llama a la funcion smart_divide para que revise el denominador
divide(2,5)

# Se llama a la funcion ordinaria, que por la sintaxis utilizada llama a la funcion smart_divide para que revise el denominador
divide(2,0)