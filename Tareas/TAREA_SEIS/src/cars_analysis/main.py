# Se importa biblioteca para realizar los request
import requests

# Se importa pandas para limpieza de datos
import pandas as pd

# Se importa el modulo creado para la limpieza de los datos
from AnalisisYLimpieza import analisisInicial, limpiezaDatos

# Se importa el modulo creado para realizar las regresiones
from regression import RegresionLinealPrecioVsAnno, RegresionLinealPrecioVsKilometraje, RegresionNoLinealPrecioVsAnno, RegresionNoLinealPrecioVsKilometraje

# Se importa el modulo creado para realizar el clustering
from clustering import kOptimosAnnosKilometraje, agrupamientoDeDatosAnnosKilometraje, kOptimosAnnosPrecio, agrupamientoDeDatosAnnosPrecio

# Se importa el modulo os para trabajar sobre archivos en
# el computador
import os

# Se importa biblioteca que permite realizar el proceso
# de autenticacion en la API
from requests.auth import HTTPBasicAuth

# Se importa biblioteca que permite realizar trabajar
# con archivos .zip del computador
from zipfile import ZipFile


def main():
    """
    Funcion que se encarga de llamar a los modulos
    creados para realizar las regresiones el clustering
    y los diferentes graficos
    """

    # # # # # # # # # # # # # # # #
    # Se descarga el archivo .csv #
    # # # # # # # # # # # # # # # #

    # Se va a utilizar un token de Kaggle para
    # tener acceso a los datos
    # Nombre de usuario de Kaggle
    nombre_usuario = "heinerov97"

    # clave del token creado
    clave = "2afb48cae4b05d22564d72e99e258668"

    # Url que se obtiene a partir de la navegacion en la pagina,
    # a la cual se entra a traves del link proporcionado en la
    # tarea, este link esta en la metadata que se puede obtener
    # en la pagina, proporciona acceso al .zip que se puede descargar
    # de manera manual en la pagina
    url = "https://www.kaggle.com/api/v1/datasets/download/akshaydattatraykhare/car-details-dataset"

    # Se utiliza un requests.get para obtener los datos del url
    # anterior, para que esto se logre se debe realizar un
    # proceso de autenticacion en la API, donde se envian como
    # parametros el nombre de usuario y la clave del token
    # obteniendo de esta manera un acceso a los datos
    response = requests.get(url, auth=HTTPBasicAuth(nombre_usuario, clave)).content

    # Se crea un archivo para almacenar lo obtenido, que en este caso
    # lo que proporcionan los datos del request es un .zip
    with open("cars_analysis\\datos_autos.zip", 'wb') as f:
        f.write(response)
    f.close()

    # Se descomprime el archivo .zip para obtener los archivos
    # que se encuentran dentro de esto
    with ZipFile("cars_analysis\\datos_autos.zip", 'r') as zip_ref:
        zip_ref.extractall('cars_analysis')

    # Se elimina el .zip, ya que se obtuvo el .csv que se
    # estaba buscando para realizar el analisis
    os.remove("cars_analysis\\datos_autos.zip")

    # # # # # # # # # # # # # # # # # #
    # Se llaman a los modulos creados #
    # # # # # # # # # # # # # # # # # #

    print("Comenzando el analisis de datos...\n")

    # Se crea un DataFrame a partir de los datos del .csv
    # para esto primeramente se obtiene el directorio actual
    # donde se trabaja, esto se realizo asi, ya que estaba dando
    # problemas el Makefile porque no se lograba encontrar el
    # archivo .csv, desde la direccion actual se lee el .csv
    direcctorio_actual = os.path.dirname(__file__)
    data = pd.read_csv(os.path.join(direcctorio_actual, "CAR DETAILS FROM CAR DEKHO.csv"))

    # Se realiza el analisis exploratorio de los datos,
    # Para conocer con que se trabaja
    analisisInicial(data)

    # Se realiza la limpieza de datos, mejorando la
    # calidad de los datos para los analisis
    data = limpiezaDatos(data)

    # Se realiza el analisis de datos utilizando regresion lineal
    # se predice el comportamiento del precio de los autos segun
    # el anno de fabricacion
    print("\nSe realiza un analisis utilizando regresion lineal,",
          "esto para predecir como varia el precio de los carros con",
          "respecto a su anno de fabricacion")
    RegresionLinealPrecioVsAnno(data)

    # Se realiza el analisis de datos utilizando regresion lineal
    # se predice el comportamiento del precio de los autos segun
    # su kilometraje
    print("\nSe realiza un analisis utilizando regresion lineal,",
          "esto para predecir como varia el precio de los carros con",
          "respecto a su kilometraje")
    RegresionLinealPrecioVsKilometraje(data)

    # Se realiza el analisis de datos utilizando regresion lineal
    # se predice el comportamiento del precio de los autos segun
    # el anno de fabricacion
    print("\nSe realiza un analisis utilizando regresion NO lineal,",
          "esto para predecir como varia el precio de los carros con",
          "respecto a su anno de fabricacion")
    RegresionNoLinealPrecioVsAnno(data)

    # Se realiza el analisis de datos utilizando regresion NO lineal
    # se predice el comportamiento del precio de los autos segun
    # su kilometraje
    print("\nSe realiza un analisis utilizando regresion NO lineal,",
          "esto para predecir como varia el precio de los carros con",
          "respecto a su kilometraje")
    RegresionNoLinealPrecioVsKilometraje(data)

    print("\nComenzando seccion de clustering\n")

    # Se busca el numero optimo de k cluster para realizar el correcto
    # agrupamiento de los datos, utilizando como caracteristicas el
    # kilometraje y el anno de fabricacion de los vehiculos
    print("\nSe utiliza el metodo del codo para observar cual es el valor k",
          "de clusters mas adecuado para realizar el agrupamiento con K-means",
          "para el agrupamiento en base al kilometraje y el anno de",
          "fabricacion")
    kOptimosAnnosKilometraje(data)

    # Se realiza un agrupamiento en base a los datos de las columnas de
    # kilometraje y anno de fabricacion de los vehiculos
    print("\nA través del uso del algoritmo K-Means se procede a realizar",
          "un agrupamiento del conjunto de datos, en base al kilometraje",
          "y anno de fabricacion de los vehiculos")
    agrupamientoDeDatosAnnosKilometraje(data)

    # Se busca el numero optimo de k cluster para realizar el correcto
    # agrupamiento de los datos, utilizando como caracteristicas el
    # precio y el anno de fabricacion de los vehiculos
    print("\nSe utiliza el metodo del codo para observar cual es el valor k",
          "de clusters mas adecuado para realizar el agrupamiento con K-means",
          "para el agrupamiento en base al precio y el anno de",
          "fabricacion")
    kOptimosAnnosPrecio(data)

    # Se realiza un agrupamiento en base a los datos de las columnas de
    # kilometraje y anno de fabricacion de los vehiculos
    print("\nA través del uso del algoritmo K-Means se procede a realizar",
          "un agrupamiento del conjunto de datos, en base al precio",
          "y anno de fabricacion de los vehiculos")
    agrupamientoDeDatosAnnosPrecio(data)


# Esto se ejecuta cuando el script es llamado como funcion
# principal del sistema. Si este script fuera llamado desde
# otro modulo, este no se ejecutaria
if __name__ == "__main__":
    main()
