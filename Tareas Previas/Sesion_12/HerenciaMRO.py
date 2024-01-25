# Se crea una primera clase base posee un metodo llamado igual al de la clase base 2
class SuperClass1:
    def info(self):
        print("Super Class 1 method called")

# Se crea una segunda clase base posee un metodo llamado igual al de la clase base 1
class SuperClass2:
    def info(self):
        print("Super Class 2 method called")

# Se crea una clase que deriva de las dos clases anteriores
class Derived(SuperClass1, SuperClass2):
    pass

# Se crea un objeto de la clase derivada
d1 = Derived()

# Se llama al metodo que heredo la clase derivada, en este caso el metodo de la segunda clase
# derivada no sobreescribe al de la primera, ya que esta segunda NO hereda de la primera
# el metodo utilizado por la clase derivada, es el de la primer clase que se llamo
d1.info()

