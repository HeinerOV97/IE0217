# Se define una clase pesona
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Metodo magico que va a comparar las edades de los objetos instanciados de la clase Person
    def __lt__(self, other):
        return self.age < other.age # Devuelve un booleano

# Se instancian dos objetos de la clase Person
p1 = Person("Alice", 20)
p2 = Person("Bob", 30)

# Se realizan comparaciones, en este caso, se va a comparar la edad por el metodo definido anteriormente
print(p1 < p2) # Este resultado sera True ya que Bob es mayor que Alice
print(p2 < p1) # Este resultado sera False, ya que Alice es menor que Bob