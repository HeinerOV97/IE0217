# Se define la clase
class Polygon:
    # Metodo init que recibe el numero de lados de un poligono
    def __init__(self, no_of_sides):
        self.n = no_of_sides
        self.sides = [0 for i in range(no_of_sides)] #Se crea una arreglo con ceros con un rango igual al numero de lados

    # Metodo para que el usuario ingrese el largo de los lados del poligo, y el valor de estos se guarda en el arreglo anterior
    def inputSides(self):
        self.sides = [float(input("Enter side "+str(i+1)+" : ")) for i in range(self.n)]

    # Se imprime el valor de los lados del poligono que estan en el arreglo
    def dispSides(self):
        for i in range(self.n):
            print("Side",i+1,"is",self.sides[i])

# Clase triangulo que hereda de la clase poligono
class Triangle(Polygon):
    # Inicializador de la clase triangle llama al inicializador de la clase polygon y le pasa el valor de que necesita en este caso
    # los lados del poligono 
    def __init__(self):
        Polygon.__init__(self,3)

    # Metodo que calcula al area
    def findArea(self):
        a, b, c = self.sides # Se asingan a a, b y c, los valores del arreglo de la clase padre

        # Formulas para calcular el area de un triangulo
        s = (a + b + c) / 2
        area = (s*(s-a)*(s-b)*(s-c)) ** 0.5
        print('The area of the triangle is %0.2f' %area)

# Se instancia el objeto
t = Triangle()

# Se llama al metodo que solicita los valores de los lados del poligono
t.inputSides()

# Se imprimen los valores que se almacenaron en el arreglo
t.dispSides()

# Se llama al metodo que encuentra el area del poligono
t.findArea()