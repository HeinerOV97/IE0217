'''
Funcion anidada
'''
def outer(x):
    def inner(y):
        return x + y
    return inner

# Se devuelve referencia a funcion interna y se almacena en una variable
add_five = outer(5)
# Se invocada la referencia a la funcion interna
result = add_five(6)

# Se imprime resultado
print(result)

'''
Funcion como argumento
'''
# Funcion que devuelve la suma de dos valores recibidos
def add(x, y):
    return x + y

# Funcion que recibe que operacion desea realizar con dos valores recibidos
def calculate(func, x, y):
    return func(x, y)

# Result llama a la funcion calculate y la indica que realice una operacion con la funcion add
result = calculate(add, 4, 6)
print(result)

'''
Retornar funcion
'''
def greeting(name):
    def hello():
        return "Hello, " + name + "!"
    return hello

# Se devuelve referencia a funcion interna y se almacena en una variable
greet = greeting("Atlantis")
# Se invocada la referencia a la funcion interna
print(greet())
