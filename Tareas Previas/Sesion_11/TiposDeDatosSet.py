'''
Set en Python
'''
# Se declara set
numbers = {2, 4, 6, 6, 2, 8} # No se guardan numeros repetidos ni en orden
print(numbers)

'''
Adherir un elemento en un set
'''
# Se adhiere un elemento al set
numbers2 = {21, 34, 54, 12}
print('Initial Set:', numbers2)
# El metodo add adhiere un elemento al final del set
numbers.add(32)
print('Updated Set:', numbers)

'''
Se adhieren elementos de una lista al set
'''
companies = {'Lacoste', 'Ralph Lauren'}
tech_companies = ['apple', 'google',  'apple']
# El metodo update adhiere los elemenots de una lista a un set, en este caso por ser un set, solo guarda una vez el string apple
companies.update(tech_companies)
print(companies)

'''
Eliminar un elemento de un set
'''

languages = {'Swift', 'Java', 'Python'}
print('Initial Set:', languages)

# Se elimina el elemento Java del set anterior con el metodo discard()
removedValue = languages.discard('Java')
print('Set after discard():', languages)


'''
Un set de enteros
'''
student_id = {112, 114, 116, 118, 115}
print('Student ID:', student_id)

'''
Un set de strings
'''
vowel_letters = {'a', 'e', 'i', 'o', 'u'}
print('Student ID:', vowel_letters)

'''
Un set con variables mixtas
'''
mixed_set = {'Hello', 101, -2, 'Bye'}
print('Student ID:', mixed_set)

'''
Crear un set vacio
'''
empty_set = set()
# Verificar el tipo de dato de la variable anterior
print('Data type of empty_set', type(empty_set))

'''
Crear un diccionario vacio
'''
empty_dictionary = {}
# Verificar el tipo de dato de la variable anterior
print('Data type of empty_set', type(empty_dictionary))

'''
Iterar un set
'''
fruits = {"Apple", "Peach", "Mango"}
for fruit in fruits:
    print(fruit)

'''
Obtener el tamano de un set
'''
even_numbers = {2, 4, 6, 8}
print('Total elements:', len(even_numbers))