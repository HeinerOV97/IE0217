# Se importa la biblioteca Numpy para hacer uso
# de sus herramientas
import numpy as np


# Se crea un conjunto de datos con el uso de
# de np.array, lo crea viene siendo una matriz
# donde en este caso, cada uno de los siguientes
# conjuntos es una fila que representara las notas
# de un estudiante y cada columna representara la asignatura.
conjunto_calificaciones = np.array([[100, 95, 80, 70, 96],
                                   [80, 95, 70, 79, 82],
                                   [90, 87, 93, 88, 89],
                                   [70, 98, 75, 93, 84],
                                   [90, 85, 70, 96, 82]
                                    ])


def promedios_estudiantes_asignaturas(conjunto_calificaciones):
    """
    Se crea la funcion que recibira como argumento las calificaciones
    de los estudiantes, y calculara el promedio de notas, tanto por
    estudiante como por asignatura

    param: conjunto_calificaciones: conjunto de calificaciones que se
    desea analizar
    """

    # Se calcula el promedio de las notas de cada estudiante
    # en este caso, el metodo mean de numpy recibe como argumento
    # el conjunto de datos con las calificaciones, y el argumento
    # axis=1, este argumento lo que indicara es que se desea obtener
    # el promedio de las calificaciones por fila en la matriz creada
    promedio_estudiante = np.mean(conjunto_calificaciones, axis=1)

    # Se calcula el promedio de las notas de cada asignatura
    # en este caso, el metodo mean de numpy recibe como argumento
    # el conjunto de datos con las calificaciones, y el argumento
    # axis=0, este argumento lo que indicara es que se desea obtener
    # el promedio de las calificaciones por columna en la matriz creada
    promedio_asignatura = np.mean(conjunto_calificaciones, axis=0)

    # Se devuelven los valores deseados
    return promedio_estudiante, promedio_asignatura


def calificacion_maxima_estudiantes(conjunto_calificaciones):
    """
    Esta funcion devolvera la nota maxima que consiguio
    cada estudiante, analizando el conjunto de datos
    creado con numpy.

    param: conjunto_calificaciones: conjunto de calificaciones que se
    desea analizar
    """
    # Se calcula la calificacion mas alta de cada estudiante
    # en este caso, el metodo max de numpy recibe como argumento
    # el conjunto de datos con las calificaciones, y el argumento
    # axis=1, este argumento lo que indicara es que se desea obtener
    # el valor maximo de las calificaciones por fila en la matriz creada
    calificacion_maxima_por_estudiante = np.max(conjunto_calificaciones,
                                                axis=1)
    return calificacion_maxima_por_estudiante


def suma_calificaciones_asignatura(conjunto_calificaciones):
    """
    Esta funcion devolvera la suma de calificaciones que
    se consiguio en cada materia, analizando el conjunto
    de datos creado con numpy.

    param: conjunto_calificaciones: conjunto de calificaciones que se
    desea analizar
    """

    # Se calcula la suma de las calificaciones por asignatura
    # en este caso, el metodo sum recibe como argumento
    # el conjunto de datos con las calificaciones, y el argumento
    # axis=0, este argumento lo que indicara es que se desea obtener
    # la suma de las calificaciones por columna en la matriz creada
    suma_calificaciones_por_asignatura = np.sum(conjunto_calificaciones,
                                                axis=0)
    return suma_calificaciones_por_asignatura


def main():

    # Establezco la cantidad de decimales con las que se van a
    # imprimir los datos dentro del array, en este caso establezco
    # el uso de 1 decimal, esto lo hago por medio del metodo
    # set_printoptionons() de Numpy que permite configurar opciones
    # de impresion en los array, en este caso con el argumento formatter
    # que es un diccionario, indicamos como clave que deseamos trabajar con
    # numeros flotantes en el array, y como valor de la clave tomamos
    # un valor de tipo flotante y lo definimos con un decimal, por medio de
    # una funcion lambda.
    # Esto se realizo asi, ya que de no hacerlo, algunos resultados
    # de los calculos mostraban un resultado con un punto pero sin ningun
    # valor decimal, lo cual no se ve bien.
    np.set_printoptions(formatter={'float': lambda x: "{:.1f}".format(x)})

    # Se imprime la matriz de datos creada
    print("\n\nComienza Parte 2 de la tarea\n")
    print("Los datos de las calificaciones son los siguientes:")
    print(conjunto_calificaciones)

    # Se obtienen los resultados de los promedios que entrega
    # la funcion promedios_estudiantes_asignaturas() y se
    # asignan a dos diferentes variables
    promedio_por_cada_estudiante, promedio_por_cada_asignatura = promedios_estudiantes_asignaturas(conjunto_calificaciones)

    # Se reorganiza el arreglo recibido de la funcion, ya que la funcion
    # devuelve un array como una sola fila, esta se cambia a una columna, para
    # que haya un mejor entendimiento de lo recibido, ya que cada estudiante
    # es representado por una fila del arreglo inicial creado.
    promedio_por_cada_estudiante = promedio_por_cada_estudiante.reshape(-1, 1)

    # Se imprimen los datos del promedio de las notas por cada
    # estudiante y por cada materia
    print("\nPromedio de las notas por estudiante:")
    print(promedio_por_cada_estudiante)

    print("\nPromedio de las notas por asignatura:")
    print(promedio_por_cada_asignatura)

    # Se obtienen los resultados de las notas maximas por cada estudiante
    # que entrega la funcion calificacion_maxima_estudiantes() y se
    # asignan a una variable
    nota_maxima_por_estudiante = calificacion_maxima_estudiantes(conjunto_calificaciones)

    # Se reorganiza el arreglo recibido de la funcion, ya que la funcion
    # devuelve un array como una sola fila, esta se cambia a una columna, para
    # que haya un mejor entendimiento de lo recibido, ya que cada estudiante
    # es representado por una fila del arreglo inicial creado.
    nota_maxima_por_estudiante = nota_maxima_por_estudiante.reshape(-1, 1)

    # Se imprime la nota maxima que obtuvo cada estudiante
    print("\nLas calificaciones maximas de cada estudiante fueron:")
    print(nota_maxima_por_estudiante)

    # Se obtienen los resultados de las sumas de las notas por asignatura
    # que entrega la funcion suma_calificaciones_asignatura() y se
    # asignan a una variable
    suma_notas_de_cada_asignatura = suma_calificaciones_asignatura(conjunto_calificaciones)

    # Se imprime la suma de notas por cada asignatura
    print("\nLa suma de las calificaciones por asignatura son:")
    print(suma_notas_de_cada_asignatura)


# Esto se ejecuta cuando el script es llamado como funcion
# principal del sistema. Si este script fuera llamado desde
# otro modulo, este no se ejecuataria
if __name__ == "__main__":
    main()
