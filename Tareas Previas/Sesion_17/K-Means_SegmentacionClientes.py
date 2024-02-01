'''
Este codigo no funcionara, ya que no se
dispone del archivo data.csv
'''


# Paso 1. Se carga el conjunto de datos que contiene información sobre
# clientes, como Gasto Promedio, Frecuencia de Visita y Tiempo
# Medio de Permanencia.

from sklearn.preprocessing import StandardScaler
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.cluster import KMeans

# Se obtiene el conjunto de datos, se asume que se posee el csv
data = pd.read_csv('data.csv')

# Paso 2. Se realiza una exploracion y procesamiento de datos
# esto se realiza para trabajar finalmente con datos limpios,
# manejando valores nulos, escalar caracteristicas, entre otros
# preprocesos

# Exploracion de Datos
# Se obtiene primeros cinco elementos para observar los datos
print(data.head())

# Preprocesamiento (Por ejemplo, se realiza un escalamiento de caracteristicas)
# el metodo fit_transform de StandardScaler, calcula la media y la desviacion
# estandar de cada caracteristica de data y luego escala las caracteristicas
scaler = StandardScaler()
scaled_data = scaler.fit_transform(data)

# Calcular la inercia para diferentes valores de k
# Se grafica varianza en funcion de k, y se busca el codo
# de la curva, el punto donde la inercia deja de disminuir
# rapidamente, ese valor de k es una buena eleccion
inertias = []
for k in range(1, 11):
    # Se utiliza kmeans con diferentes valores de k
    kmeans = KMeans(n_clusters=k, random_state=42)
    # Se ajusta el modelo
    kmeans.fit(scaled_data)
    # Se obtiene la inercia del kmeans obtenido
    inertias.append(kmeans.inertia_)

# Se realiza un grafico utilizando el metodo del
# codo para buscar cual k es una buena eleccion
# Se define una grafico de tipo lineal
plt.plot(range(1, 11), inertias, marker='o')
plt.title('Metodo del Codo para Seleccion de k')
plt.xlabel('Numero de Clusters (k)')
plt.ylabel('Inercia')

# Se imprime la grafica en pantalla
plt.show()

# Asumiendo que el numero de cluster adecuado es 4
# a partir del analisis que se realiza del metodo
# del codo
# Se configura K-means con un numero de clusters de 4 clusters
# Estado aleatorio que utiliza como semilla a 42
kmeans = KMeans(n_clusters=4, random_state=42)
cluster_labels = kmeans.fit_predict(scaled_data)

# Se agregan etiquetas de cluster al conjunto de datos original
# A partir de la prediccion hecha con los datos escalados en
# scaled_data
data['Cluster'] = cluster_labels

# Se realiza un analisis de segmentos, se realiza una
# agrupacion por cluster, y se busca la media
segment_analysis = data.groupby('Cluster').mean()

# Se realiza una grafica de dispersion para
# visualizar los segmentos
plt.figure(figsize=(12, 6))
for cluster in range(4):
    plt.scatter(data[data['Cluster'] == cluster]['Frecuency'],
                data[data['Cluster'] == cluster]['Avg_Spend'],
                label=f'Cluster {cluster}')

plt.title('Segmentacion de Clientes por Frecuencia y Gasto Promedio')
plt.xlabel('Frecuencia de Visita')
plt.ylabel('Gasto Promedio')
plt.legend()

# Se imprime el dendrograma en pantalla
plt.show()
