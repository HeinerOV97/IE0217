class Polygon:
    # Metodo que se utilizara para hacer una forma
    def render(self):
        print("Rendering Polygon...")

class Square(Polygon):
    # Metodo para hacer un cuadrado
    def render(self):
        print("Rendering Square...")

class Circle(Polygon):
    # Metodo para hacer un circulo
    def render(self):
        print("Rendering Circle...")

# Se crea un objeto de un cuadrado
s1 = Square()
# En este caso se utilizara el metodo render de la clase Square que sobreescribira el metodo de la clase Polygon
# Funciona como un metodo virtual de C++
s1.render()


# Se crea un objeto de un circulo
c1 = Circle()
# En este caso se utilizara el metodo render de la clase Circle que sobreescribira el metodo de la clase Polygon
# Funciona como un metodo virtual de C++
c1.render()