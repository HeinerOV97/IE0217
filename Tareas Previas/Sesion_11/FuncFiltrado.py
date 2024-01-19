'''
Funcion de filtrado, numeros pares
'''

my_list = [1, 5, 4, 6, 8, 11, 3, 12]

# En este caso se coloca el filtro que se utilizara, el cual
# indica que el filtro sera para todos los valores que son pares,
# y en cual lista se aplicara el filtrado
new_list = list(filter(lambda x: (x%2 == 0), my_list))

print(new_list)

'''
Se crea una lista a partir de otra
'''
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

# En este caso el mapeo se realizara de la siguiente manera,
# cada elementos de la lista anterior lo multiplicara por
# y creara una nueva lista
new_list = list(map(lambda x: x*2, my_list))

print(new_list)