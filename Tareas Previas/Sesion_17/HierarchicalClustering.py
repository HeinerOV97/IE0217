# Se importa matplotlib para crear graficos
import matplotlib.pyplot as plt

# Se visualiza el dendrograma
from scipy.cluster.hierarchy import dendrogram, linkage

# Se generan datos para trabajar en el ejemplo
from sklearn.datasets import make_blobs

# Se trabaja con un clustering aglomerativo
from sklearn.cluster import AgglomerativeClustering

# Se generan datos para crear el ejemplo, 50 datos, 3 centro, 42 es la semilla
# cluster_std es la desviacion estandar
X, y = make_blobs(n_samples=50, centers=3, random_state=42, cluster_std=1.0)

# Se configura Hierarchical Clustering con un enlace completo
# La distancia entre clusters se basa en los puntos mas alejados entre si
Z = linkage(X, method='complete')

# Sebusca visualizar el dendrograma
plt.figure(figsize=(10, 5))
# Arbol que representa una jeraquia de clusters
dendrogram(Z)
plt.title('Dendrograma Hierarchical Clustering')
plt.xlabel('Indice del Punto de Datos')
plt.ylabel('Distancia')

# Se imprime el dendrograma en pantalla
plt.show()

# Se configura Hierarchical Clustering con scikit-learn
# Se asume que todos los elementos individuales entre si
# son un cluster y se agrupan a medida que se sube en la jerarquia
agg_clustering = AgglomerativeClustering(n_clusters=3)
# Se realiza una prediccion cuando se define el Hierarchical Clustering
agg_labels = agg_clustering.fit_predict(X)

# Se obtiene un grafico de dispersion para visualizar los resultados
plt.scatter(
    X[:, 0], X[:, 1], c=agg_labels, cmap='viridis', edgecolor='k', s=50)
plt.title('Resultado del Clustering Jerarquico')
plt.xlabel('Caracteristica 1')
plt.ylabel('Caracteristica 2')

# Se imprime la grafica en pantalla
plt.show()
