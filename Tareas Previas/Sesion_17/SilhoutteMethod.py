# Se imporma KMeans para realizar el agrupamiento
from sklearn.cluster import KMeans

# Se importa para utilizar el metodo silhouette_score
from sklearn.metrics import silhouette_score

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

# Silhoutte Method Evalua la coherencia de los clusters
# formados para diferentes valor de k
# Valores cercanos a 1 en el coeficiente de Silueta
# indican clusters bien definidos
silhouette_scores = []
for k in range(2, 20):
    # Se utiliza kmeans con diferentes valores de k
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Se ajusta el modelo
    kmeans.fit(X)
    # Se obtiene el valor utilizando el Silhoutte Method
    score = silhouette_score(X, kmeans.labels_)
    # Se obtiene la inercia del kmeans obtenido
    silhouette_scores.append(score)

# Se realiza un grafico utilizando el metodo de la
# silueta para buscar cual k es una buena eleccion
# Se define una grafico de tipo lineal
plt.plot(range(2, 20), silhouette_scores, marker='o')
plt.title('Metodo de la silueta')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Coeficiente de Silueta')

# Se imprime la grafica en pantalla
plt.show()
