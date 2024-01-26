def calculate():
    num = 1
    def inner_func():
        nonlocal num # Se refiere a la variable num de la funcion exterior
        num += 2
        return num
    return inner_func # La funcion calculate devuelve una referencia a la funcion interna

# Se almacena en una variable la referencia a una funcion interna que devuelve la funcion externa
odd = calculate()

# Ahora se puede llamar a la funcion interna, cada vez que se llama suma dos
print(odd())
print(odd())
print(odd())

# Si se crea una segunda variable de referencia a la funcion interna
odd2 = calculate()
print(odd2()) # El conteo empezaria de nuevo, ya que es un nuevo closure