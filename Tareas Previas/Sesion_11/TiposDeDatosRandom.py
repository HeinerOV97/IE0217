import random # Se importa biblioteca random

# Se obtiene un numero random entre un rango de 10 y 20
print(random.randrange(10, 20))

# Se crea una lista
list1 = ['a', 'b', 'c', 'd', 'e']

#Se elige un elemento random de la lista list1
print(random.choice(list1))

# Se revuelven los elementos de la lista list1
random.shuffle(list1)

# Se imprime la lista list1 ya revuelta
print(list1)

# Solicito un numero random entre 0 y 1
print(random.random())