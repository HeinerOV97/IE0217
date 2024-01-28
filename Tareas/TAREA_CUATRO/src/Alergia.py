"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file Alergia.py
@date 28/01/2024
@author Heiner Obando Vega
"""


class Alergia:
    """
    La clase Alergia contiene
    las alergias que estaran por defecto en
    el sistema para probar
    """

    # En el inicializador se crea un diccionario
    # que almacene los datos por defecto del
    # del sistema
    def __init__(self):
        """
        Inicializador de la clase.

        param: alergias: Diccionario de alergias predeterminadas
        """

        self.alergias = {
            "huevos": 1,
            "cacahuetes": 2,
            "mariscos": 4,
            "fresas": 8,
            "tomates": 16,
            "chocolate": 32,
            "polen": 64,
            "gatos": 128,
            "sardina": 256,
            "gluten": 512,
            "huevo": 1024
        }

        # Lista para pruebas de rendimiento
        '''
        self.alergias = {
            'huevos': 1,
            'cacahuetes': 2,
            'mariscos': 4,
            'fresas': 8,
            'tomates': 16,
            'chocolate': 32,
            'polen': 64,
            'gatos': 128,
            'sardinas': 256,
            'gluten': 512,
            'huevo': 1024,
            'nueces': 2048,
            'leche': 4096,
            'soja': 8192,
            'miel': 16384,
            'piña': 32768,
            'ajo': 65536,
            'maíz': 131072,
            'kiwi': 262144,
            'menta': 524288,
            'gambas': 1048576,
            'apio': 2097152,
            'pescado': 4194304,
            'manzanas': 8388608,
            'cilantro': 16777216,
            'aguacate': 33554432,
            'zanahorias': 67108864,
            'berenjenas': 134217728,
            'lentejas': 268435456,
            'almendras': 536870912,
            'canela': 1073741824,
            'altramuces': 2147483648,
            'mantequilla': 4294967296,
            'pepino': 8589934592,
            'cangrejo': 17179869184,
            'almejas': 34359738368,
            'anacardos': 68719476736,
            'coliflor': 137438953472,
            'pimienta': 274877906944,
            'arándanos': 549755813888,
            'pera': 1099511627776,
            'cerveza': 2199023255552,
            'guisantes': 4398046511104,
            'ciruelas': 8796093022208,
            'trigo': 17592186044416,
            'higos': 35184372088832,
            'centeno': 70368744177664,
            'pistachos': 140737488355328,
            'cangrejo de río': 281474976710656,
            'col': 562949953421312
        }
        '''

    def imprimir_todas_alergias(self):
        """
        Se crea un metodo que va a iterar por el diccionario
        y va a mostrar en pantalla los elementos que se
        encuentran en el diccionario, es decir la alergia
        y su puntuación
        """
        print("Lista de alergias:")
        # Iteracion sobre cada elemento del diccionario
        for alergia, valor in self.alergias.items():
            print(f"{alergia}: {valor}")

    def imprimir_alergia_especifica(self, nombre_alergia):
        """
        Se crea un metodo que va a recibir el nombre de la alergia
        y va a imprimir su informacion.

        param: nombre_alergia: alergia que desea buscar el usuario
        """
        # Se comprueba si la alergia existe en la lista
        # si existe se imprime
        if nombre_alergia in self.alergias:
            print("Informacion de la alergia solicitada")
            print(f"{nombre_alergia}: {self.alergias[nombre_alergia]}")
        # Si no existe se indica al usuario
        else:
            print("La alergia no existe en nuestra lista.")

    def agregar_alergia(self, nombre, puntaje):
        """
        Se crea un metodo que permita al usuario ingresar una nueva alergia
        en la lista predeterminada

        param: nombre: alergia que desea ingresar el usuario
        param: puntaje: puntaje de la alergia que desea ingresar el usuario
        """
        self.alergias[nombre] = puntaje
