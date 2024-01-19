# Uso de comando pass

# Se le indica al interprete que no hay nada dentro del if, que solo pase a la linea despues del if
# Si esto no se realiza se produce un error
n = 10
if n > 10:
    pass

# Ejemplo en funcion sucede lo mismo que con el if
def function(args):
    pass

# Ejemplo en clase sucede lo mismo que con el if
class Example:
    pass

# Al ejecutar solo se hara el print, ya que se indico que no habra nada dentro de los bloques anteriores
print('Hello')

