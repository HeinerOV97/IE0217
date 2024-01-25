# Se define la clase
class Point(object):

    # __new__ es el verdadero constructor de una clase, es lo primero que se ejecuta
    def __new__(cls, *args,  **kwargs):
        print("From new")
        print(cls)
        print(args)
        print(kwargs)

        # Se crea el objeto y este se retorna
        obj = super().__new__(cls)
        return obj

    # __init__ es la segunda funcion que se ejecuta al crear una clase en Python
    def __init__(self, x = 0, y = 0): # Se establecen x y y en 0 por defecto, si el usuario asigna un valor, estos cambian
        print("From init")
        self.x = x # Se inicializa el atributo x de la clase
        self.y = y # Se inicializa el atributo y de la clase
