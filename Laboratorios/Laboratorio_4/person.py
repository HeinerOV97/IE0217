class Person:
    # Inicializador de la clase, asigna valores recibidos por argumento
    # A los atributos name y age
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Metodo que muestra la informacion de los atributos de la clase
    def display_info(self):
        print(f"Name: {self.name}\nAge: {self.age}")
    