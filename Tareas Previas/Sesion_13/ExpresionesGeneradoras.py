# Se crea un objeto generador, en este caso cada elemento en un
# rango de 5, se multiplicara por el mismo y se almacenara en
# la variable squares_generator 
squares_generator = (i * i for i in range(5))

# Iterador sobre el generador para mostrar los objetos obtenidos
for i in squares_generator:
    print(i)