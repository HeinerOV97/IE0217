# Se define una funcion externa
def make_multiplier_of(n): # Recibe un valor n y devuelve una referencia a la funcion interna
    def multiplier(x):
        return x * n 
    return multiplier

# Se almacena la referencia con n=3
times3 = make_multiplier_of(3)


# Se almacena la referencia con n=5
times5 = make_multiplier_of(5)

# Se invoca a la funcion interna con n=3 y se envia de argumento 9, resultado 27
print(times3(9))

# Se invoca a la funcion interna con n=5 y se envia de argumento 3, resultado 15
print(times5(3))


# Se invoca a la funcion interna con n=5 y se envia de argumento 3*2 utilizando de nuevo la funcion externa, resultado 30
print(times5(times3(2)))