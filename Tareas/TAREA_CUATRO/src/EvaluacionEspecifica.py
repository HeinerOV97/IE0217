"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file EvaluacionEspecifica.py
@date 28/01/2024
@author Heiner Obando Vega
"""

from Alergia import Alergia


class EvaluacionEspecifica(Alergia):
    """
    Se crea la clase Evaluacion Especifica
    esta contiene un metodo para detectar
    cuales alergias padece el paciente
    a partir de una puntuacion dada
    """
    def __init__(self):
        """
        Inicializador de la clase.
        Llama al inicializador de la clase padre.

        param: puntuacion: Puntuacion de alergia que recibe del usuario
        param: alergias_detectadas: Diccionario de alergias detectadas
        """
        super().__init__()
        self.puntuacion = 0  # Valor entregado por el usuario
        self.alergias_detectadas = {}  # Se almacenaran las alergias detectadas

    def evaluar_alergias(self, puntuacion):
        """
        Metodo que calculara de cuales alergias padece el paciente
        y las agregara a la lista de alergias detectadas.

        param: puntuacion: puntuacion a evaluar
        param: Diccionario que almacena alergias
        """
        self.puntuacion = puntuacion
        self.alergias_detectadas = {}
        # Se itera sobre la lista de alergias predefinidas en el sistema
        for alergia, valor_alergia in self.alergias.items():
            '''
            Con el operador & se realiza una comparacion a nivel de bits
            del puntaje que posee la alergia en la lista y la puntuacion
            entregada por el usuario por lo que si tenemos por ejemplo
            2 a nivel de bits seria 000010 y 32 que seria 100000 y el usuario
            envia un valor 34 que seria 100010 cuando haga la comparacion
            con el siguiente if, este realiza la comparacion AND a nivel de
            bits por lo que si se compara 34 con 2 el resultado sera 000010
            y con 32 sera 100000, el if detectara que el resultado es
            diferente de 0 por lo que procedera a agregar esa alergia a la
            lista de alergias_detectadas.
            '''
            if valor_alergia & self.puntuacion:
                '''
                Se agrega la alergia detectada al nuevo diccionario
                de alergias detectadas, alergia es la clave y
                valor_alergia es el valor.
                '''
                self.alergias_detectadas[alergia] = valor_alergia

    def imprimir_evaluacion(self):
        """
        Metodo que imprime en pantalla las alergias a las cuales
        la persona es alergica junto con su puntuacion asociada.
        """
        print("La puntuación de alergias del paciente es la siguiente:", self.puntuacion)
        '''
        Se revisa si el diccionario no esta vacio, si no esta vacia
        se itera por los elementos de este para imprimirlos en pantalla.
        Se utiliza el metodo items() para poder acceder tanto a la clave
        como al valor de los item del diccionario.
        '''
        if self.alergias_detectadas:
            print("El paciente es alergico a las siguientes cosas:")
            for alergia, valor_alergia in self.alergias_detectadas.items():
                print(f"{alergia}: {valor_alergia}")
        else:
            print("No se detectaron alergias.")
