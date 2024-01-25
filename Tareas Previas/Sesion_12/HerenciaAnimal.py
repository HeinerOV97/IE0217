# Se define una clase base
class Animal:
    # Se declaran un atributo y un metodo
    name = ""

    def eat(self):
        print("I can eat")

# Se define una clase derivada
class Dog(Animal):
    # Se declara un metodo que pertenece a la clase derivada
    def display(self):
        #Se accede al atributo de la clase base utilizando self
        print("My name is ", self.name)
    
# Se instancia un objeto de la clase derivada
labrador = Dog()

# El objeto de la clase derivada tiene acceso a los atributos de la clase base
labrador.name = "Rohu"
labrador.eat()

# Ahora se llama al metodo propio de la clase derivada
labrador.display()

