'''
Primer ejemplo de una clase
'''

# Se define la clase
class Bike:
    name = ""
    gear = 0

# Se crea un objeto de la clase Bike
bike1 = Bike() # bike1 tiene los atributos de la clase Bike

# Ahora se accede a los atributos de la clase y se asignan nuevos valores
bike1.gear = 11
bike1.name = "Mountain Bike"

print(f"Name: {bike1.name}, Gears: {bike1.gear}")

# Se crea un segundo ejemplo de acuerdo al ejemplo dado por el profesor

# Se crea un objeto de la clase Bike
bike2 = Bike() # bike2 tiene los atributos de la clase Bike

# Ahora se accede a los atributos de la clase y se asignan nuevos valores
bike2.gear = 7
bike2.name = "BMX"

print(f"Name: {bike2.name}, Gears: {bike2.gear}")