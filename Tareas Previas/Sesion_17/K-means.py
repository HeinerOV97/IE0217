# Se imporma KMeans para realizar el agrupamiento
from sklearn.cluster import KMeans

# Se importa numpy para crear grupo de datos aleatorios
import numpy as np

# Se importa matplotlib para crear graficos
import matplotlib.pyplot as plt

# Se generan datos aleatorios para el ejemplo
# Esto se realiza con el metodo random de numpy
# Los valores aleatorios siempre seran los mismos
# por la forma en que numpy lo calcula a partir de
# de la semilla recibida
np.random.seed(42)

# np.random.rand(100, 2) * 10: Se generan 100 valores aleatorios entre 0 y 10
X = np.random.rand(100, 2) * 10

# Se crean subgraficos y se realizan sus configuracion
plt.figure(figsize=(12, 5))

# Subgrafico: Se crea un grafico de puntos aleatorios
plt.subplot(1, 2, 1)  # Posicion del subplot
# Se crea un grafico de dispersion con los datos de muestra
# creados anteriormente, con titulo y nombres en los ejes
# color y markers definidos
plt.scatter(X[:, 0], X[:, 1], c='blue', marker='o')
plt.title('Puntos de Datos Aleatorios')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')

# Se configura K-means con un numero de clusters (k) especifico
# En este caso se utilizan 3 clusters
# Numero de grupos en el que se dividen los datos.
kmeans = KMeans(n_clusters=3)

# Se ajusta el modelo
kmeans.fit(X)

# Se crean variables para las etiquetas de los clusters y
# las coordenadas de los centroides
labels = kmeans.labels_
centroids = kmeans.cluster_centers_

# Subgrafico 2: Se muestra el resultado del
# Clustering con K-Means
# Se crea un grafico de dispersion con los datos de muestra
# creados anteriormente, con titulo y nombres en los ejes
# colores distintos para los diferentes grupos de datos
# se coloca leyenda
plt.subplot(1, 2, 2)
for i in range(len(X)):
    plt.scatter(X[i][0], X[i][1],
                c=('r' if labels[i] == 0 else 'b' if labels[i] == 1 else 'g'),
                marker='o')
plt.scatter(centroids[:, 0], centroids[:, 1], c='black', marker='X', s=200,
            label='Centroids')
plt.title('Resultado del Clustering con K-Means')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')
plt.legend()

# Se ajusta el diseño, evitando de esta manera solapamientos
plt.tight_layout()

# Se imprime los graficos en pantalla
plt.show()
