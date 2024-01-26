# Convencion terminar el nombre en error
class SalaryNotInRangeError(Exception):
    """Esta excepcion se levantara si hay un error en el ingreso del salario

    Atributos:
        salary: Este atributo puede causar el error
        message: Explicara el error que sucedio
    """
    # Metodo para llamar el metodo __init__ de la clase Exception
    # Se le envia el mensaje que se desea que imprima la clase Exception
    def __init__(self, salary, message="Salary is not in (5000, 15000) range"):
        self.salary = salary
        self.message = message
        super().__init__(self.message)

# El usuario ingresa su salario, si no esta entre 5000 y 15000 se levanta la excepcion creada
salary = int(input("Enter salary amount: "))
if not 5000 < salary < 15000:
    raise SalaryNotInRangeError(salary)