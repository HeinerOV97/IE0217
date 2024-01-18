'''
Hay conversiones implicitas y 
explicitas en python
La implicita es automatica, lo hace el interprete
La explicita, es manual
'''

integer_number = 123
float_number = 1.23

'''
Python hace por si solo la conversion, 
en este caso el resultado sera un flotante
por lo tanto de manera implicita
new_number se devuelve como un flotante
'''
new_number = integer_number + float_number

# Se muestra el resultado
print("Value:", new_number)
print("Data Type:", type(new_number))


'''
No se puede sumar un string con un entero
en este caso se usa la conversion explicita
'''
num_string = '12'
num_integer = 23

print("Data type of num_string before Type Casting:", type(num_string)) # Se imprime tipo de dato de num_string antes del casting

# Se realiza una conversion explicita
num_string = int(num_string)

print("Data type of num_string after Type Casting:", type(num_string)) # Se imprime tipo de dato de num_string despues del casting

# Ahora se puede realizar la suma ya que se hizo el casting de string a entero
num_sum = num_integer + num_string

# Se imprime resultado
print("Sum:", num_sum)

# Se imprime el tipo de dato de la suma, este deberia ser un entero
print("Data Type of num_sum:", type(num_sum))
