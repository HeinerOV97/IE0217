from math import pi 

# Se crea una clase Shape
class Shape:
    # Inicializador de la clase
    def __init__(self, name):
        self.name = name

    # Metodo de area
    def area(self):
        pass

    # Hecho de la formula
    def fact(self):
        return "I am a two dimensional shape"

    # Se imprime el nombre, yo lo defino como yo desee
    def __str__(self):
        return self.name
    
# Clase que hereda de shape
class Square(Shape):
    # Inicializador, llama al inicializador de la clase Shape, y le indica que se creara un cuadrado con el metodo super()
    def __init__(self, length):
        super().__init__("Square")
        self.length = length # Se define el lado del cuadrado

    # Se define la formula del area del cuadrado
    def area(self):
        return self.length**2

    # Se define un hecho del cuadrado
    def fact(self):
        return "Squares have each angle equal to 90 degrees"

# Clase que hereda de shape 
class Circle(Shape):
    # Inicializador, llama al inicializador de la clase Shape, y le indica que se creara un circulo con el metodo super()
    def __init__(self, radius):
        super().__init__("Circle")
        self.radius = radius # Se define el radio del circulo

    # Se define la formula del area del circulo
    def area(self):
        return pi*self.radius**2

# Se instancia un objeto cuadrado y uno circulo, con su largo y su radio respectivamente
a = Square(4)
b = Circle(7)

# Este metodo llama al metodo magigo __str__ que indica como imprimir en string los metodos de la clase, se 
# encuentra en la clase base Shape
print(b)

# Metodo que dice un hecho, en este caso se utiliza el metodo de la clase Shape ya que en la clase Circle no
# se definio un metodo que sobreescribiera la metodo de la clase base Shape
print(b.fact())
# Metodo que dice un hecho, se utiliza el metodo de la clase Square que tiene un metodo propio que sobreescribe
# al metodo de la clase base Shape
print(a.fact())

# Metodo para obtener el area de un circulo, en este caso se utiliza el metodo de la clase Circle que sobreescribe al
# metodo de la clase base
print(b.area())
