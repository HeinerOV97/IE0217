class Course():
    # Se crea el inicializador de la clase, y asigna valores a los atributos
    def __init__(self, course_code, course_name):
        self.course_code = course_code
        self.course_name = course_name

    # Metodo para mostrar informacion de los cursos
    def display_info(self):
        print(f"Course code: {self.course_code}\
            \nCourse name: {self.course_name}\n")