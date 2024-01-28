"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file EvaluacionGeneral.py
@date 28/01/2024
@author Heiner Obando Vega
"""


from TiposDeAlergias import TiposDeAlergias


class EvaluacionGeneral(TiposDeAlergias):

    """
    Clase Evaluacion Alergias, esta va a devolver
    la puntuacion en alergias que tiene el paciente
    asi como las alergias que posee y las puntuaciones
    que posee y no estan presentes en el sistema
    """

    def __init__(self):
        """
        Inicializador de la clase.
        Llama al inicializador de la clase padre.
        """
        super().__init__()

    def calcular_puntuacion_general(self):
        """
        Metodo que calcula la puntuacion que posee el usuario
        a partir de las alergias que estan en el sistema
        """
        total_puntaje = sum(puntaje for puntaje in self.alergias_paciente.values())
        print("Puntuación total de alergias del usuario:", total_puntaje)

    def imprimir_alergias_paciente(self):
        """
        Se imprimen las alergias que posee el paciente y estan en la lista
        predeterminada de alergias
        """

        # Alergias en el sistema
        print("Alergias del paciente:")
        for alergia, puntaje in self.alergias_paciente.items():
            print(f"{alergia}: {puntaje}")

        # Nombres de alergias que no estan en el sistema
        if self.solo_alergias:
            print("Resultados Desconocidos: Alergias sin puntuacion:")
            for alergia in self.solo_alergias:
                print(alergia)

        # Puntajes de alergias que no estan en el sistema
        if self.solo_puntaje:
            print("Resultados Desconocidos: Puntajes sin nombre")
            for puntaje in self.solo_puntaje:
                print(puntaje)

    def calcular_promedio(self):
        """
        Se calcula el porcentaje de alergias que fueron
        ingresadas y que estan en el sistema, asi
        como las que no estan
        """

        # Se calcula el tamaño del diccionario con alergias conocidas
        total_alergias_conocidas = len([nombre for nombre, puntaje in self.alergias_paciente.items()])
        total_alergias_solo_puntaje = len(self.solo_puntaje)
        total_alergias_solo_alergias = len(self.solo_alergias)

        # Porcentaje total de alergias conocidas encontradas
        porcentaje_alergias_encontradas = ((total_alergias_conocidas)/(total_alergias_conocidas + total_alergias_solo_puntaje + total_alergias_solo_alergias))*100
        porcentaje_alergias_no_encontradas = 100 - porcentaje_alergias_encontradas

        # Se imprime el porcentaje de alergias encontradas
        print("La puntuacion se obtiene con un:", porcentaje_alergias_encontradas, "%", "de las alergias ingresadas por el paciente")

        # Se imprime el porcentaje de alergias no encontradas
        print("Un", porcentaje_alergias_no_encontradas, "%", "de las alergias no fue encontrado en el sistema")