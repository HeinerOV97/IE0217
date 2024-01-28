"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file menu.py
@date 28/01/2024
@author Heiner Obando Vega
"""

import timeit
from EvaluacionGeneral import EvaluacionGeneral


def main():
    """
    Funcion main que llamara a todas las clases
    que trabajan en conjunto
    """

    '''
    Se crea una instacia de Evaluacion General
    como se trabajo con herencia multinivel
    esta clase tiene acceso a todos los atributos
    de las demas clases, lo que evita conflictos
    al agregar una alergia luego
    '''
    objeto_paciente = EvaluacionGeneral()
    print("\n---Bienvenido---")

    '''
    Este menu permitira al usuario acceder a todas las funciones
    que posee el codigo
    '''
    while True:
        # Mostrar el menú de opciones
        print("\n---MENU---\n")
        print("1. Ingresar puntuacion obtenida de su prueba de alergias")
        print("2. Ingresar alergias que el paciente padece")
        print("3. Obtener puntaje de las alergias ingresadas")
        print("4. Ingresar nueva alergia y puntaje")
        print("5. Si desea acceder a la lista de alergias del sistema")
        print("6. Si desea acceder a la informacion de una alergia en especifico")
        print("7. Salir del sistema")
        # Se recibe la opcion entregada por el sistema
        opcion = input("Seleccione una opción: ")

        # Opcion 1. Permite al usuario ingresar el puntaje de alergias que
        # obtuvo, esto devolvera un desglose de las alergias que el usuario
        # padece
        if opcion == "1":
            '''
            Se decide utilizar una excepcion para indicar al usuario
            si el valor que coloca es incorrecto, ya que para calcular
            las alergias se necesita un numero entero, si el numero
            no es entero se muestra un error en pantalla
            '''
            try:
                puntuacion = int(input("Ingrese su puntuación de alergia: "))
                objeto_paciente.evaluar_alergias(puntuacion)
                objeto_paciente.imprimir_evaluacion()
            except ValueError:
                print("Error: Por favor ingresar un valor entero.")

        # Opcion 2. Permite al usuario ingresar sus alergias, solo por nombre,
        # solo por puntaje o puede ingresar ambos datos
        elif opcion == "2":
            '''
            Menu que consulta al usuario sobre como desea ingresar sus alergias
            '''
            while True:
                opcion = input("\nIndique como desea ingresar su alergia:\
                    \n1. Posee solo el nombre de la alergia\
                    \n2. Posee solo el puntaje de la alergia\
                    \n3. Posee tanto el nombre como el puntaje de la alergia\
                    \n4. Presione esta opcion cuando termine de ingresar sus alergias:\n")

                '''
                Devuelve al usuario al menu
                '''
                if opcion == '4':
                    break

                # En esta opcion se solicita al usuario que ingrese solo el nombre de
                # la alergia

                elif opcion == '1':
                    nombre = input("Ingrese el nombre de la alergia: ").strip().lower()
                    # En los siguientes metodos se recibe el nombre de la alergia
                    # y se revisa si este esta en la lista predeterminada del sistema
                    # para unirlo con su puntaje y colocarlo en la lista de alergias
                    # si el nombre no esta, se coloca en la seccion de datos desconocidos
                    objeto_paciente.alergia_del_paciente(nombre=nombre)
                    objeto_paciente.revision_datos_incompletos()
                elif opcion == '2':
                    puntaje_nuevo_usuario = input("Ingrese el puntaje de la alergia: ").strip()
                    # Se coloca una excepcion para asegurar que el usuario solo ingrese
                    # un valor entero
                    try:
                        puntaje = int(puntaje_nuevo_usuario)
                    except ValueError:
                        print("El puntaje debe ser un entero.")
                        continue
                    # En los siguientes metodos se recibe el puntaje de la alergia
                    # y se revisa si este esta en la lista predeterminada del sistema
                    # para unirlo con su nombre y colocarlo en la lista de alergias
                    # si el nombre no esta, se coloca en la seccion de datos desconocidos
                    objeto_paciente.alergia_del_paciente(puntaje=puntaje)
                    objeto_paciente.revision_datos_incompletos()
                elif opcion == '3':
                    # En este caso el usuario ingresa los dos datos de la alergia
                    # se colocan los mismos metodos y excepciones que en los casos individuales
                    nombre = input("Ingrese el nombre de la alergia: ").strip().lower()
                    puntaje_nuevo_usuario = input("Ingrese el puntaje de la alergia: ").strip()
                    try:
                        puntaje = int(puntaje_nuevo_usuario)
                    except ValueError:
                        print("El puntaje debe ser un entero.")
                        continue
                    objeto_paciente.alergia_del_paciente(nombre=nombre, puntaje=puntaje)
                else:
                    print("Opción no válida.")

        # Se imprimen las alergia del paciente, ya en este caso estan ordenadas.
        # Tambien se imprime el puntaje que obtiene el paciente, de las alergias
        # que estan inscritas en el sistema solamente
        elif opcion == "3":
            objeto_paciente.imprimir_alergias_paciente()
            objeto_paciente.calcular_puntuacion_general()
            objeto_paciente.calcular_promedio()

        # En esta opcion se permite al usuario modificar la lista del sistema
        # y agregar una alergia con su respectivo puntaje
        elif opcion == "4":
            nombre = input("Ingrese el nombre de la alergia: ").strip().lower()
            puntaje_nuevo_usuario = input("Ingrese el puntaje de la alergia, recuerde que este puntaje es una potencia de 2: ").strip()
            # Se verifica que el usuario no ingrese un valor que no sea un entero
            # por medio de una excepcion
            try:
                puntaje = int(puntaje_nuevo_usuario)
            except ValueError:
                print("El puntaje debe ser un número entero.")
                continue
            objeto_paciente.agregar_alergia(nombre=nombre, puntaje=puntaje)

        # Opcion para imprimir las alergias en el sistema
        elif opcion == "5":
            objeto_paciente.imprimir_todas_alergias()

        # Opcion para imprimir informacion de una alergia en especifico
        elif opcion == "6":
            nombre_para_buscar = input("Ingrese el nombre de la alergia que desea buscar: ").strip().lower()
            objeto_paciente.imprimir_alergia_especifica(nombre_para_buscar)

        # Opcion para salir del sistema
        elif opcion == "7":
            print("Saliendo del programa...")
            break

        else:
            print("Opción no válida. Por favor, seleccione una opción válida.")


# Esto se ejecuta cuando el script es llamado como funcion principal del sistema
# Si este script fuera llamado desde otro modulo, este no se ejecuataria
if __name__ == "__main__":
    tiempo_ejecucion = timeit.timeit("main()", setup="from __main__ import main", number=1)
    print(f"Tiempo de ejecución: {tiempo_ejecucion} segundos")
