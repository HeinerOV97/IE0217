# Se importan pandas y numpy para el manejo de datos
import pandas as pd
import numpy as np

# Se imporma KMeans para realizar el agrupamiento
from sklearn.cluster import KMeans

# Se importa matplotlib para crear graficos
import matplotlib.pyplot as plt


def kOptimos(data):
    """
    Funcion que calculara la el numero optimo de clusters
    para realizar los agrupamientos de los datos
    """

    # Caracteristicas a partir de las cuales se realizaran
    # los agrupamientos en K-Means
    X_cluster = data[['year', 'km_driven']]

    # Se Calcula la inercia para diferentes valores de k
    # A partir de eso se grafica la varianza en funcion de k,
    # y se busca el codo de la curva, el punto donde la inercia
    # deja de disminuir rapidamente, ese valor de k es una buena eleccion
    inertias = []
    for k in range(1, 21):
        # Se utiliza kmeans con diferentes valores de k
        kmeans = KMeans(n_clusters=k, random_state=42)
        # Se ajusta el modelo
        kmeans.fit(X_cluster)
        # Se obtiene la inercia del kmeans obtenido
        inertias.append(kmeans.inertia_)

    # Se realiza un grafico utilizando el metodo del
    # codo para buscar cual k es una buena eleccion
    # Se define una grafico de tipo lineal
    plt.plot(range(1, 21), inertias, marker='o', color='red')
    plt.title('Metodo del codo')
    plt.xlabel('Numero de Clusters (k)')
    plt.ylabel('Inercia')

    # Se imprime la grafica en pantalla
    plt.show()


def agrupamientoDeDatos(data):
    """
    Con este funcion se agrupan datos
    utilizando el metodo Kmeans
    """

    # Caracteristicas a partir de las cuales se realizaran
    # los agrupamientos en K-Means
    X_cluster = data[['year', 'km_driven']]

    # Se realiza el agrupamiento con KMeans, se crean 4 grupos
    # n_clusters define el numero de grupos, random_state establece
    # la forma en que se calculan los numeros aleatorios, n_init
    # define las veces que el algoritmo de KMeans va a ser inicializado
    # cada vez con centroides diferentes, esto realiza pruebas y la
    # mejor de las 10 pruebas sera el resultado final
    kmeans = KMeans(n_clusters=4, random_state=42, n_init=10)

    # Se ajuste el modelo con los datos entregados
    data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)

    # Se visualiza el agrupamiento por medio de un
    # grafico de dispersion, el argumento c define
    # que colores se utilizaran para el grafico
    plt.scatter(data['year'], data['km_driven'], c=data['cluster_kmeans'],
                cmap='viridis', marker='.')
    plt.title('Agrupamiento de los vehiculos segun sus caracteristicas')
    plt.show()
