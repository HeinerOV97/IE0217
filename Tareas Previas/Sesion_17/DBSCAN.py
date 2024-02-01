# Se importa matplotlib para crear graficos
import matplotlib.pyplot as plt

# Se generan datos en forma de luna para trabajar en el ejemplo
from sklearn.datasets import make_moons

# Se trabaja con DBSCAN
from sklearn.cluster import DBSCAN

# Se generan datos de ejemplo (luna creciente)
# Cantidad de datos, ruido y semilla
X, _ = make_moons(n_samples=200, noise=0.05, random_state=42)

# Se realiza la configurarion y se ajusta el modelo DBSCAN
# Se realiza un agrupamiento por densidad
# El define cual es el valor optimo de clusters
# eps: Radio del vecindario alrededor de un punto
# valores altos de eps pueden fusionar clusters
# y valores bajos pueden aumentar el numero de clusters
# min_samples: Numero minimo de puntos requeridos para formar un cluster
dbscan = DBSCAN(eps=0.3, min_samples=5)
# Se realiza la prediccion
dbscan_labels = dbscan.fit_predict(X)

# Se obtiene un grafico de dispersion para visualizar los resultados
plt.scatter(
    X[:, 0], X[:, 1], c=dbscan_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering DBSCAN')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')

# Se imprime la grafica en pantalla
plt.show()
