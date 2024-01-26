'''
Manera de trabajar con iteradores en Python
se utilizan los metodos especiales __iter__()
y __next__()
'''
my_list = [4, 7, 0]

# Forma de crear un iterador de la lista anterior
iterator = iter(my_list)

# Se obtiene el primer elemento del iterador
print(next(iterator)) # Se obtiene 4

# Se obtiene el segundo elemento del iterador
print(next(iterator)) # Se obtiene 7

# Se obtiene el tercer elemento del iterador
print(next(iterator)) # Se obtiene 0