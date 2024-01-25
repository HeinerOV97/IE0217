# Se define la clase room
class Room:    
    length = 0.0
    breadth = 0.0

    # Se crea un metodo que calcule el area del cuarto
    def calculate_area(self):
        print("Area of room =", self.length * self.breadth) # self define que se utilizan los atributos propios de la clase

# Se crea un objeto de la clase Room
study_room = Room()

# Se accede a los atributos del objeto y se modifican sus valores
study_room.length = 42.5
study_room.breadth = 30.8

# Se accede al método propio de la clase que calculará el área
study_room.calculate_area()