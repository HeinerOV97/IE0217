# Se declara una clase base con su metodo
class SuperClass:
    def super_method(self):
        print("Super Class method called")

# Se declara una clase que hereda de la clase base
class DerivedClass1(SuperClass):
    def derived1_method(self):
        print("Derived class 1 method called")

# Se declara una segunda clase que hereda de la primer clase derivada
class DerivedClass2(DerivedClass1):
    def derived2_method(self):
        print("Derived class 2 method called")

# Se instancia un objeto de la tercera clase creada que hereda de la segunda, y esta segunda hereda de la primera
d2 = DerivedClass2()

# Este objeto que se creo tiene acceso a los metodos de las clases que heredo en todos los niveles
d2.super_method() # Metodo de la clase base

d2.derived1_method() # Metodo de la clase derivada 1

d2.derived2_method() # Metodo de la clase derivada 2


