# Se declara una clase
class Point:
    # El "constructor, define valores para las variables x y y, poniendolas por defecto en 0"
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    # Se define un metodo magico, que devuelve un string
    def __str__(self):
        return "({0},{1})".format(self.x, self.y) # Se define que cuando se va a imprimir un objeto de la clase se imprimira con este formato

    # Se realiza la sobrecarga de operador, en este caso se realizara la suma de valores que se encuentra en los objetos de la
    # clase point
    def __add__(self, other):
        x = self.x + other.x # Se suma el atributo de un objeto mas el atributo de un segundo objeto, distinguido por el uso de other
        y = self.y + other.y # Se suma el atributo de un objeto mas el atributo de un segundo objeto, distinguido por el uso de other
        return Point(x, y) # Se inicializa un nuevo objeto, pero que almacene la suma de los dos numeros x y y en este caso

# Se instancian los objetos de la clase
p1 = Point(1, 2)
p2 = Point(2, 3)

# Se imprimer la suma de los atributos de los objetos
print(p1+p2)