from person import Person

# Se crea clase profesor
class Teacher(Person):
    def __init__(self, name, age, employee_id):
        # Se llama al metodo inicializador de la clase Person y se envian los argumentos que necesita
        super().__init__(name, age)
        self.employee_id = employee_id # Atributo ID del profesor
        self.courses_taught = [] # Lista que definira los cursos que da el profesor

    # Se agregan cursos a la lista previamente creada
    def assing_course(self, course):
        self.courses_taught.append(course)

    def display_info(self):
        # Se llama al metodo display_info de la clase Person que imprime informacion
        super().display_info()
        # Se agrega mas informacion propia de la clase Teacher
        print(f"Employee ID: {self.employee_id}\
            \nCourses taught: {', '.join(self.courses_taught)}\n")