class PowTwo:
    """
    Esta clase implementara un iterador
    de potencias de dos
    """
    # Se recibe el maximo de iteraciones que se realizaran
    def __init__(self, max=0):
        self.max = max
    
    # Se inicia el iterador
    def __iter__(self):
        self.n = 0
        return self
    
    # Se indica que se hara en cada iteracion
    def __next__(self):
        if self.n <= self.max: # Si no se ha superado el numero de iteraciones
            result = 2 ** self.n # Tome el valor del iterador y potencie a la 2
            self.n += 1 # Se aumenta el iterador en 1
            return result # Se devuelve el valor de la potencia
        else:
            raise StopIteration # Si se supera el iterador se levanta una excepcion

# Se crea un objeto de la clase PowTwo
numbers = PowTwo(3)

# Se crea un iterador del objeto de la clase PowTwo
i = iter(numbers)

# Se imprimen los valores del iterador
print(next(i)) # Se imprime 1
print(next(i)) # Se imprime 2
print(next(i)) # Se imprime 4
print(next(i)) # Se imprime 8
print(next(i)) # Se levanta la excepcion
