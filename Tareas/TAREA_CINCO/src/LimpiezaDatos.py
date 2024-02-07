"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file LimpiezaDatos.py
@date 06/02/2024
@author Heiner Obando Vega
"""

# Se importa la clase CargarDatos,
# esto para que la clase LimpiezaDatos
# Herede de ella
from CargarDatos import CargarDatos


class LimpiezaDatos(CargarDatos):
    """
    Esta clase heredara de CargarDatos, recibiendo
    se llamara al metodo CargaDeDatos de la clase
    CargarDatos, esto para obtener acceso al DataFrame
    creado y de esta manera trabajarlo en las siguientes
    clases
    """
    def __init__(self, datos):
        """
        Constructor de la clase, envia el conjunto de
        datos en el csv al metodo que carga datos

        param: df: DataFrame con el que se trabajara creado del csv
        """
        super().__init__(datos)
        self.df = self.CargaDeDatos()

    def LimpiezaDeDatos(self):
        """
        Se procede a limpiar los datos, en
        este caso se procede a eliminar algunas
        columnas del csv que no son necesarias
        asi como verificar si no hay datos nulos

        param: df: DataFrame que se desea limpiar
        """
        try:
            # Se va a iterar por cada fila del DataFrame
            # utilizando el metodo iterrows que devuelve
            # un indice del DataFrame y la fila correspondiente
            for indice, fila in self.df.iterrows():
                # El numero de pasajeros esta como un numero flotante
                # por esto se procede a realizar un casting a numeros
                # enteros, el metodo at permite realizar cambios en la
                # la posicion que se le indica
                self.df.at[indice, 'PASSENGERS'] = int(fila['PASSENGERS'])

            # Se elimina la columna UNIQUE_CARRIER de los datos
            # ya que esta no aportara nada al analisis a realizar
            self.df = self.df.drop(columns=['UNIQUE_CARRIER'])

            # Tambien se tomaran como 0 los valores nulos en la
            # columna de pasajeros ya que en breve analisis de los vuelos
            # se oberva que en algunos vuelos no viajaron pasajeros, esto
            # se realiza con el metodo fillna() que cambia valores en los
            # datos que se desea y se coloca el valor que se desea
            self.df['PASSENGERS'] = self.df['PASSENGERS'].fillna(0)

        except:
            print("Sucerdio un error al tratar de limpiar los datos")
