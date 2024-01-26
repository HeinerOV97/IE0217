import os

'''
Se optiene la direccion donde se esta ubicado
'''
print(os.getcwd())

'''
Se cambia de direccion de la que se esta ubicado, equivale a un cd
'''
os.chdir('C:\\Users\\Usuario\\Desktop')
print(os.getcwd())

'''
Se puede borrar un archivo si se desea de la siguiente manera
entre comillas se coloca el nombre del archivo a eliminar
'''
#os.rmdir("mydir")

'''
Se puede obtener una lista de subdirectorios del directorio actual
entre parentesis se puede colocar una direccion exacta
'''
print(os.listdir())

'''
Se puede crear un archivo si se desea de la siguiente manera
entre comillas se coloca el nombre del archivo a crear
'''
#os.mkdir("test")

'''
Se puede renombrar un archivo si se desea de la siguiente manera
entre comillas se coloca el nombre actual del archivo, seguido
del nombre nuevo el la sintaxis es la siguiente
'''
#os.rename('nombre Actual', 'Nombre Nuevo')
