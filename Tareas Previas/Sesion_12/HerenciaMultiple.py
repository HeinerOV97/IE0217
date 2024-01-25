# Se crea una clase con un metodo
class Mammal:
    def mammal_info(self):
        print("Mammals can give direct birth.")

# Se crea una segunda clase con un metodo
class WingedAnimal:
    def winged_animal_info(self):
        print("Winged animals can flap.")

# Se crea una tercer clase que hereda de las primeras dos clases heredadas
class Bat(Mammal, WingedAnimal):
    pass

# Se crea un objeto de la clase Bat
b1 = Bat()

# Este objeto tiene acceso a los metodos de ambas clases de las cuales heredo
b1.mammal_info()
b1.winged_animal_info()