# Funciones en python
'''
Ejemplo Sencillo de funcion
'''
# Primero se define la funcion
def greet():
    print('Hello World')
# Luego se llama la funcion
greet()
# Este print se ejecutara luego del llamado de la funcion
print('Outside function')

'''
Funcion con argumentos
'''
# Ahora se utiliza una funcion con argumentos, primero se define
def add_numbers(num1, num2):
    sum = num1 + num2
    print("La Suma de", num1, "con", num2, "es:", sum)

# Ahora se llama la funcion 
add_numbers(5, 6)

'''
Funcion con argumentos predeterminados
'''
#Si una funcion espera argumentos y estos no son enviados dara error, por lo que se pueden poner valores por defecto
def greetEjmProfe(name = "Sin nombre"):
    print("Hola mops de IE0217, especialmente a", name)

greetEjmProfe() # Si se llama asi se utilizara el nombre por defecto es decir Sin nombre
greetEjmProfe("Heiner") # Si se llama asi se utilizara el nombre enviado    

# Ejemplo de diapositivas
def add_numbers2(a = 7, b = 8):
    sum = a + b
    print ('Sum:', sum)

# Se proporcionan argumentos a la funcion
add_numbers2(2, 3)

# Se proporciona solo el valor de a, a la funcion
add_numbers2(a = 2)

# La funcion utilizara los valores por defecto
add_numbers2()

# Se puede pasar strings a una funcion
def display_info(firts_name, last_name):
    print('First Name:', firts_name)
    print('Last Name:', last_name)

# Si defino el nombre de la variable que envio, puedo cambiar el orden
display_info(last_name = 'Cartman', firts_name = 'Eric') 

'''
Funcion que devuelve un valor
'''
# Ahora se utiliza una funcion para que devuelva un valor
def find_square(num):
    result = num * num 
    return num # Si no indico que devuelve, devolvera un None

# Se llama a la funcion y se guarda su resultado en una variable
square = find_square(3)

# Ahora la variable square tendra el valor devuelto por la funcion find_square
print('Square:', square)

'''
Manera de que una funcion reciba una cantidad indeterminada de argumentos
'''
def find_sum(*numbers): # Son el * la funcion sabe que recibira cualquier cantidad de argumentos
    result = 0
    
    # Se realiza un bucle que revise todos los valores recibidos y los sume
    for num in numbers:
        result = result + num
    
    print("Sum = ", result)

find_sum(1, 2, 3) # Se llama la funcion con 3 argumentos

find_sum(4, 9) # Se llama la funcion con 2 argumentos

'''
Recursividad en funciones
'''
# Se calcula el factorial de 3 que seria 3*2*1 = 6
def factorial(x):

    if x == 1:
        return 1
    else:
        return (x * factorial(x-1)) # La funcion se llama a si misma para lograr obtener el factorial del numero recibido

# Se indica el numero a utilizar
num = 3
print("The factorial of", num, "is", factorial(num)) # Se llama a la funcion dentro del print con el valor a revisar