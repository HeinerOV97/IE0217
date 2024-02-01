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

# Calcular la inercia para diferentes valores de k
# Se grafica varianza en funcion de k, y se busca el codo
# de la curva, el punto donde la inercia deja de disminuir
# rapidamente, ese valor de k es una buena eleccion
inertias = []
for k in range(1, 11):
    # Se utiliza kmeans con diferentes valores de k
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Se ajusta el modelo
    kmeans.fit(X)
    # Se obtiene la inercia del kmeans obtenido
    inertias.append(kmeans.inertia_)

# Se realiza un grafico utilizando el metodo del
# codo para buscar cual k es una buena eleccion
# Se define una grafico de tipo lineal
plt.plot(range(1, 11), inertias, marker='o')
plt.title('Metodo del codo')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')

# Se imprime la grafica en pantalla
plt.show()
