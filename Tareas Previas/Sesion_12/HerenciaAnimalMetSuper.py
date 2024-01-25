# Se define una clase base
class Animal:
    # Se declaran un atributo y un metodo
    name = ""

    def eat(self):
        print("I can eat")

# Se define una clase derivada
class Dog(Animal):

    # Se sobreescribe el metodo eat de la clase base
    def eat(self):

        # De esta manera se llama al metodo eat de la clase base, utilizando el metodo super()
        super().eat()
        print("I like to eat bones")
    
# Se instancia un objeto de la clase derivada
labrador = Dog()

# Se llama al metodo eat, en este caso se llamara al metodo de la clase base animal
# por el metodo super, y luego se impirmira lo que se encuentra en el metodo eat de la 
# clase derivada.
labrador.eat()