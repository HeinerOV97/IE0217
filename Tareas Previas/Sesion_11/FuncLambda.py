# lambda se utiliza para definir una funcion dentro del codigo, mas compacta

# Se declara una funcion lambda
greet = lambda : print('Hello World')

# Se llama a la funcion lambda
greet()

# Lo anterior es como hacer lo siguiente
def greet2():
    print("Hello World 2")

greet2()

'''
Lambda con argumentos
'''
# Se declara una funcion lambda que recibe argumentos
greet_user = lambda name : print('Hey there,', name)
# Se llama la funcion lambda con sus parametros
greet_user('Delilah')