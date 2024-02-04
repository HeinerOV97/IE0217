"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file CargarDatos.py
@date 04/02/2024
@author Heiner Obando Vega
"""

# Se importa Pandas par el analisis de datos
# de los diferentes vuelos
import pandas as pd


class CargarDatos:
    """
    Clase encargada de revisar los datos
    y verificar si sucede alguna excepcion
    """
    def __init__(self, datos):
        """
        Se obtiene el conjunto de datos,
        almacenados en el csv conseguido en la
        pagina web
        """
        self.datos = datos

    def CargaDeDatos(self):
        """
        Se realiza una revision general para verificar
        que el DataFrame haya sido creado con éxito
        """
        # Se utiliza una excepcion para verificar que no haya
        # problemas a cargar los datos
        # se retorna el DataFrame creado para poder utilizar
        # en las siguientes clases
        try:
            df = pd.read_csv(self.datos)
            return df
            print('DataFrame creado con exito')

        # Si el archivo a cargar esta vacio se levanta la excepcion
        except pd.errors.EmptyDataError:
            print('El archivo que se intenta cargar, esta vacio')

        # Si el archivo no se encuentra mostrara un error
        except FileNotFoundError:
            print('El archivo que se intenta cargar esta vacio')
