# Se define la clase

class Employee:
    # Se definen los atributos de la clase
    employee_id = 0

# Se instancian dos objetos de la clase Employee
employee1 = Employee()
employee2 = Employee()

# Se accede a los atributos del objeto employee1 y se modifica el ID del empleado
employee1.employee_id = 1001
print(f"Employee ID: {employee1.employee_id}")

# Se accede a los atributos del objeto employee2 y se modifica el ID del empleado
employee2.employee_id = 1002
print(f"Employee ID: {employee2.employee_id}")