# Se puede abrir un archivo para tener acceso al contenido
# Se realiza de las siguientes maneras si se desea abrir para lectura
# file1 = open("test.txt")
# file1 = open("test.txt", "r")

# Para poder escribir en el archivo se hace de la siguiente manera
# file1 = open("test.txt", "w")

# Si se deseara se podria abrir para leer y escribir en modo binario
# file1 = open("img.bmp", "r+b")

'''
Ejemplo de lectura del archivo
'''

# Se abre el archivo
file1 = open("test.txt", "r")

# Se lee el archivo, se guarda su contenido en una variable
read_content = file1.read()
print(read_content)

# Se cierra el archivo
file1.close

'''
Otra manera de abrir el archivo
'''
with open("test.txt", "r") as file1:
    read_content = file1.read()
    print(read_content)

'''
Una manera de asegurarnos que el archivo se cierre,
cuando el bloque try termine sin errores, se saltara
al bloque finally que cerrara el archivo
'''
try:
    # Se abre el archivo
    file1 = open("test.txt", "r")

    # Se lee el archivo, se guarda su contenido en una variable
    read_content = file1.read()
    print(read_content)

finally:
    file1.close

'''
Escribir en un archivo, en este caso
se intenta abrir el archivo test2.txt
para escribir en el, en caso de que no
exista se crea el archivo
'''

with open('test2.txt', 'w') as file2:
    file2.write('Programming is Fun')