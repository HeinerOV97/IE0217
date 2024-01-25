# Se define la clase
class Bike:
    # Se define el constructor de la clase
    def __init__(self, name = ""): # Se coloca un nombre por defecto, en este caso un string vacio
        self.name = name           # En caso de que el usuario ingrese un nombre este sera utilizado
                                   # Y almacenado en el atributo name

# Se crean dos objetos, uno que no recibe un paramtro para el contructor y otro que si
bike1 = Bike()
bike2 = Bike("Mountain Bike")

# Se imprime el atributo name de ambos objetos
print(bike1.name) # Se imprime un string vacio
print(bike2.name) # Se imprimie el string Mountain Bike