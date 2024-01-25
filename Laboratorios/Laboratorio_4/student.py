from person import Person

# Clase que hereda de la clase Person
class Student(Person):
    # Inicializador de la clase, recibe datos
    def __init__(self, name, age, student_id):
        # Con super se llama al metodo __init__ de la clase Person, se envian los argumentos que necesita
        super().__init__(name, age)
        self.student_id = student_id # Atributo ID de la clase Student
        self.courses = []  # Lista que definira los cursos que recibe el estudiante

    # Se almacen los cursos en la lista creada
    def enroll_course(self, course):
        self.courses.append(course)

    # Metodo para mostrar informacion
    def display_info(self):
        # Se llama al metodo que muestra informacion de la clase base
        super().display_info()
        # Se imprime mas informacion de la clase Student
        print(f"Student ID: {self.student_id}\
            \nCourses: {', '.join(self.courses)}\n")