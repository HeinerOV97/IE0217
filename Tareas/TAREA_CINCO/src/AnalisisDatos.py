"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file AnalisisDatos.py
@date 06/02/2024
@author Heiner Obando Vega
"""
# Se importa Pandas para el analisis de datos
# de los diferentes vuelos
import pandas as pd

# Se importa la clase de LimpiezaDatos
# esto para trabajar ya con los datos limpios
# y realizar el analisis
from LimpiezaDatos import LimpiezaDatos


class AnalisisDatos(LimpiezaDatos):
    def __init__(self, datos):
        """
        Constructor de la clase, envia el conjunto de
        datos en el csv al metodo que carga datos a traves
        de LimpiezaDatos
        """
        super().__init__(datos)

    def ExploracionDeDatos(self):
        """
        Se realiza una exploracion de los datos
        esto se lleva a cabo para conocer con lo que se
        trabajara, con el metodo head() sin argumentos
        se imprimen las primeras 5 filas del DataFrame
        """
        print("Exploracion de Datos")
        print(self.df.head())

    def GeneradorVuelosTotalesAerolinea(self):
        """
        Este generador entregara la cantidad de vuelos totales que
        realizo la aerolinea, cuando el objeto generador es llamado
        se envia la informacion de una a una las aerolineas

        param: empresas_aerolineas: Aerolineas para analizar
        param: vuelos_totales: Vuelos totales por aerolinea
        """
        # Se crea una Serie que contendra los datos de la
        # columna CARRIER_NAME, es decir, los nombres de las aerolineas
        # pero con el metodo unique solo se almacen valores no repetidos.
        empresas_aerolineas = self.df['CARRIER_NAME'].unique()

        # Se itera sobre cada una de las aerolineas del conjunto de datos
        for empresa_aerolinea in empresas_aerolineas:
            # Se realiza un filtro, se comparan los valores
            # del DataFrame original contra las aerolineas que
            # se especifican en la variable empresas_aerolineas,
            # se devuelve la cantidad de veces que el nombre de
            # esa aerolinea se repite, esto se logra realizar con
            # el metodo shape, este valor se devuelve y se almacena.
            vuelos_totales = self.df[self.df['CARRIER_NAME'] ==
                                     empresa_aerolinea].shape[0]
            yield empresa_aerolinea, vuelos_totales

    def GeneradorPasajerosTotalesAerolinea(self):
        """
        Este generador entregara el numero de pasajeros totales que
        cada aerolinea transporto, cuando el objeto generador es llamado
        se envia la informacion de una a una las aerolineas

        param: empresas_aerolineas: Aerolineas para analizar
        param: pasajeros_totales: Pasajeros totales transportados
        """
        # Se crea una Serie que contendra los datos de la
        # columna CARRIER_NAME, es decir, los nombres de las aerolineas
        # pero con el metodo unique solo se almacen valores no repetidos.
        empresas_aerolineas = self.df['CARRIER_NAME'].unique()

        # Se itera sobre cada una de las aerolineas
        for empresa_aerolinea in empresas_aerolineas:
            # Se realiza un filtro, donde se obtienen todas las filas
            # de CARRIER_NAME donde esta la aerolinea que se revisa
            # y luego se realiza la suma de todos los datos de
            # PASSENGERS que coinciden con esas filas especificas, asi se
            # obtiene el numero de pasajeros que a transportado
            # la empresa en total.
            pasajeros_totales = self.df[self.df['CARRIER_NAME'] ==
                                        empresa_aerolinea]['PASSENGERS'].sum()
            yield empresa_aerolinea, pasajeros_totales

    def ModeloDeAvionMasUtilizado(self):
        """
        Se obtiene el modelo de avion mas utilizado
        por las diferentes aerolineas

        param: modeloMasUtilizadoPorCadaAerolinea: Serie indica
        modelo mas utilizado por aerolinea
        """
        # Primeramente, se agrupa el DataFrame, de acuerdo a los datos
        # que se encuentran en CARRIER_NAME, luego por medio de la funcion
        # lambda que tomara los valores de AIRCRAFT_TYPE buscara el modelo que
        # mas se repite, esto utilizando el metodo mode(), luego de esto
        # se utiliza iloc[0] en caso de que hayan dos aeronaves con la misma
        # cantidad de repeticiones, de esta forma, se obtiene solo un valor.
        modeloMasUtilizadoPorCadaAerolinea = self.df.groupby('CARRIER_NAME')['AIRCRAFT_TYPE'].apply(lambda x: x.mode().iloc[0])
        return modeloMasUtilizadoPorCadaAerolinea

    def EmpresaQueRealizoMasVuelosPorMes(self):
        """
        Se obtiene la empresa que mas vuelos realizo
        por mes

        param: empresas_mas_utilizada_por_mes: Aerolineas mas
        utilizadas por mes
        param: cantidad_de_vuelos: Cantidad de vuelos por
        aerolinea por mes
        param: aerolina_mas_utiliza_con_cantidad_de_vuelos:
        DataFrame con los datos de las aerolineas mas utilizadas
        y su cantidad de vuelos por mes
        """
        # Primero agrupo el DataFrame por meses,
        # ahora, utilizando la misma idea que el caso
        # que el caso anterior, obtengo la aerolinea
        # que es utilizada con mas frecuencia
        # tambien utilizo iloc[0], en caso de que haya
        # aerolineas repetidas, solo utilice una
        empresas_mas_utilizada_por_mes = self.df.groupby('MONTH')['CARRIER_NAME'].apply(lambda x: x.mode().iloc[0]).reset_index(name='CARRIER_NAME')

        # Agrupando el DataFrame por mes y por aerolinea
        # realizo un conteo de las combinaciones mes aerolinea
        # que hay en el DataFrame, de esta manera puedo crear un
        # nuevo indice que indicara cuantos vuelos realizo cada aerolina
        # por mes
        cantidad_de_vuelos = self.df.groupby(['MONTH', 'CARRIER_NAME']).size().reset_index(name='VUELOS_AEROLINEA')

        # Realizo la combinacion de los dos DataFrame creados
        # anteriormente teniendo de esta manera las aerolineas
        # mas utilizadas por mes, y la cantidad de vuelos que
        # estas realizaron
        aerolina_mas_utiliza_con_cantidad_de_vuelos = pd.merge(empresas_mas_utilizada_por_mes, cantidad_de_vuelos, on=['MONTH', 'CARRIER_NAME'])
        return aerolina_mas_utiliza_con_cantidad_de_vuelos

    def DatosDescriptivos(self):
        """
        Se obtiene un analisis descriptivo de
        de los datos en el conjunto, algunos
        de estos datos no son utiles pero
        estos seran filtrados al realizar el
        analisis escrito
        """
        # Se obtienen datos estadisticos basicos del
        # conjunto de datos almacenado
        descripcion_general = self.df.describe()
        return descripcion_general
