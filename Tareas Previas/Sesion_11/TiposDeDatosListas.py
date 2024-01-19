# Defincion de lista
numbers = [1, 2, 3]
print(numbers)

#Como acceder a los elementos de una lista
languages = ["Python", "Swift", "C++"]

# Para acceder al primer elemento
print(languages[0])


# Para acceder al ultimo elemento
print(languages[2])

'''
Como acceder a los elementos de una lista con indices negativos
'''
# Para acceder al primer elemento
print(languages[-3])


# Para acceder al ultimo elemento
print(languages[-1])

'''
Acceder a partes especificas de la lista
'''

my_list = ['p', 'r', 'o', 'g', 'r', 'a', 'm', 'i', 'z']

#imprimir del indice 2 al 4
print(my_list[2:5])

#imprimir del indice 5 al final
print(my_list[5:])

#imprimir toda la lista
print(my_list[:])

'''
Modificar las listas
Agregar un elemento a la lista
'''

numbers2 = [21, 34, 54, 12]

print("Before Append:", numbers2)

numbers2.append(32) # Se adjunta un valor al final de la lista

print("After Append:", numbers2)

'''
Cambiar el valor en una lista
'''
languages2 = ["Python", "Swift", "C++"]

# Se cambia el tercer valor de la lista
languages2[2] = 'C'

# Se imprime la lista luego de cambiar el tercer el valor
print(languages2)

'''
Unir dos listas
'''
prime_numbers = [2, 3, 5]
print("List1:", prime_numbers)

even_numbers = [4, 6, 8]
print("List2:", even_numbers)

# Se unen las dos listas
prime_numbers.extend(even_numbers)

# Se imprimen las listas unidas
print("Lista after append:", prime_numbers)


'''
Eliminar elementos de una lista
'''
languages3 = ["Python", "Swift", "C++", "C", "Java", "Rust", "R"]

# Se elimina el segundo elemento de la lista
del languages3[1]
print(languages3)

# Se elimina el ultimo elemento de la lista
del languages3[-1]
print(languages3)

# Se eliminan los primeros dos elementos de la lista
del languages3[0 : 2]
print(languages3)

'''
Comando remove para elimiar elementos de una lista
'''
languages4 = ["Python", "Swift", "C++", "C", "Java", "Rust", "R"]
languages4.remove("Python") # El comando busca el elementos que se desea eliminar
print(languages4)

'''
Iterar los elementos de una lista
'''
languages5 = ["Python", "Swift", "C++"]
for language in languages5: # Se imprimen todos los elementos dentro de la lista
    print(language)

'''
Comprobar si un elemento esta dentro de una lista o no
'''
languages6 = ["Python", "Swift", "C++"]
print("C" in languages6) # Se imprime un booleano False
print("Python" in languages6) # Se imprime un booleano True

'''
Obtener el largo de una lista
'''
languages7 = ["Python", "Swift", "C++"]
print("Total Elements: ", len(languages7))

'''
Aplicar operaciones matematicas a elementos que entregamos y crear una lista 
'''
numbers3 = [number*number for number in range(1, 6)] # Se multiplica cada numero por si mismo en un rango de 1 a 6 y se crea una lista con los resultados
print(numbers3)

