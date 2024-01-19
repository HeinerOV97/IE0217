#Diccionarios en Python

# Cada elemento de un dicionario tiene una clave asociada a un valor
# Las claves y los valores en los diccionarios pueden ser de tipos diferentes de datos

'''
Valores y claves de tipo string
'''
capital_city = {'Nepal': 'Kathmandu', 'Italy': 'Rome', 'England': 'London'}
print(capital_city)

'''
Valores y claves de tipo entero
'''
numbers = {1: "One", 2: "Two", 3: "Three"}
print(numbers)

'''
Adherir elementos a un diccionario
'''
capital_city2 = {'Nepal': 'Kathmandu', 'Italy': 'Rome', 'England': 'London'}
print("Initial Dictionary: ", capital_city2) # Se imprime el diccionario sin agregarle un elemento

# Sintaxis para agregar un elemento a un diccionario diccionario[Clave] = Valor
capital_city2["Japan"] = "Tokyo"

print("Updated Dictionary: ", capital_city2) # Se imprime el diccionario despues de agregarle un elemento

'''
Modificar un elementos en un diccionario
'''
student_id = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Initial Dictionary: ", student_id) # Se imprime el diccionario sin modificar un elemento

# Sintaxis para agregar un elemento a un diccionario diccionario[Clave] = Valor, igual que al agregar, solo se sobreescribe
student_id[112] = "Stan"

print("Updated Dictionary: ", student_id) # Se imprime el diccionario luego de modificar un elemento
# La clave ahora apuntara a un nuevo valor

# Para imprimir elementos de un diccionario sintaxis diccionario[clave]
print(student_id[111])
print(student_id[113])

'''
Eliminar un elemento del diccionario
'''
student_id2 = {111: "Eric", 112: "Kyle", 113: "Butters"}
print("Initial Dictionary: ", student_id) # Se imprime el diccionario sin borrar un elemento

# Comando del seguido de diccionario[clave] para eliminar un elemento
del student_id2[111]

print("Updated Dictionary: ", student_id) # Se imprime el diccionario luego de borrar un elemento

'''
Eliminar un diccionario
'''
student_id3 = {111: "Eric", 112: "Kyle", 113: "Butters"}
del student_id3
# print(student_id3) Este print daria error porque el diccionario ya no existe

'''
Verificar si un elemento existe en un diccionario
'''
squares = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}

# Se pregunta por los key, no por los values
print(1 in squares) # Devuelve un True porque hay un key 1 en el diccionario

print(2 not in squares) # evuelve un True porque NO hay un key 2 en el diccionario

print(49 in squares) # Devuelve un False porque NO hay un key 49 en el diccionario, si hay un valor pero esto no se revisa

'''
Iterar en los elementos de un diccionario
'''
squares2 = {1: 1, 3: 9, 5: 25, 7: 49, 9: 81}
for i in squares2:
    print(squares2[i]) # Se imprimen los valores del diccionario no los key