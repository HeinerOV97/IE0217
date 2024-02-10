import pandas as pd


def analisisInicial(data):
    """
    Funcion que realiza un analisis exploratorio de los datos
    que van a ser utilizados en el analisis
    """
    print("Se realiza un analisis exploratorio de los datos")
    print("Se muestran los primeros datos del archivo csv para",
          " conocer los datos con los que se trabaja\n")
    # Se observan las primeras cinco del DataFrame creado
    # a partir de los datos obtenidos del .csv
    print(data.head())
    print("\nSe obtienen los estadisticos basicos del conjunto de datos")
    # Se obtiene los datos estadisticos basicos del conjunto
    # de datos obtenidos a partir del .csv
    print(data.describe())


def limpiezaDatos(data):
    """
    Funcion que realiza la limpieza de los datos obtenidos
    del .csv, eliminando datos duplicados y eliminando
    filas con ausensia de datos
    """
    print("\nSe realiza una limpieza de los datos que seran analizados")
    print("Eliminando los valores duplicados...")
    # El metodo drop_duplicates elimina las filas que estan duplicadas
    # en el data creado, se utiliza inplace para modificar el elemento
    # original que ha sido enviado como argumento a la funcion
    data.drop_duplicates(inplace=True)

    print("Se eliminan las filas que tienen datos faltantes.",
          "Se considera la mejor opcion al tratar con datos como",
          "precios de autos\n")
    # El comando dropna elimina las filas del DataFrame que posean
    # algun dato faltante, se utiliza inplace para modificar el
    # elemento original que ha sido enviado como argumento a la funcion
    data.dropna(inplace=True)
    return data
