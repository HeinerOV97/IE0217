# Se importan los archivos creados para trabajar con las diferentes clases
from student import Student
from teacher import Teacher
from course import Course

# Se crean dos objetos de la clase Student, se envian los argumentos
# necesarios para crear el objeto de la clase 
student1 = Student("Esteban", 43, "B30754")
student2 = Student("Maria", 28, "B35149")


# Se crean dos objetos de la clase Teacher, se envian los argumentos
# necesarios para crear el objeto de la clase
teacher1 = Teacher("Jorge Romero", 65, "123456")
teacher2 = Teacher("Luis Diego Marin", 61, "55555")


# Se crean dos objetos de la clase Course, se envian los argumentos
# necesarios para crear el objeto de la clase
course1 = Course("IE0217", "DSA")
course2 = Course("IE0323", "CD1")

# Se utiliza el metodo enroll_course para agregar cursos al estudiante
student1.enroll_course(course1.course_code)
student1.enroll_course(course2.course_code)

# Se utiliza el metodo assing_course para agregar cursos al profesor
teacher1.assing_course(course1.course_code)
teacher2.assing_course(course2.course_code)

# Metodos para mostrar informacion de los diferentes objetos creados
student1.display_info()
teacher1.display_info()
course1.display_info()