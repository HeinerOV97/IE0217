import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import mean_squared_error
import requests
import os

# Cargar datos
# Obtener datos de https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv
# y almacenarlos en data/dataset.csv

# Se reciben los datos por medio de un request.get
response = requests.get('https://raw.githubusercontent.com/ageron/handson-ml/master/datasets/housing/housing.csv')
# Se revisa que la carpeta 'data' no este creada
if not os.path.exists('data'):
    # En caso de no existir, se crea la carpeta
    os.mkdir('data')

# Se crea el archivo dataset.csv, con el permiso de escribir
datos = open('data/dataset.csv', 'w')
# Se almacenan los datos recibidos con el request en el csv
datos.write(response.text)
# Se cierra el archivo
datos.close()

# Se crea un DataFrame a partir de los datos del .csv
data = pd.read_csv("data/dataset.csv")

# -----------
#     1
# -----------

# Se extraen los datos en categoria median_income y se cambia la forma de los
# datos para que se cree un array de arrays, de dimension 1
# esto por el tipo de datos que espera recibir el metodo train_test_split.
# Con -1 Numpy calcula por si solo el tamano del array.
# Ejemplo de que pasara
# x = [1, 2, 3, 4, 5] -> [[1], [2], [3], [4], [5]]
X_simple = data['median_income'].values.reshape(-1, 1)

# Se extraen los datos de la columna median_house_value para utilizarlos en
# el eje y
y_simple = data['median_house_value'].values

# El modelo sera entrenado con los ejes x y y, que se definieron anteriormente
# esto se realiza con un 80% de los datos, y el 20% sera utilizado para
# la prueba, la semilla random sera 42.
X_train, X_test, y_train, y_test = train_test_split(X_simple, y_simple, test_size=0.2, random_state=42)

# Se instancia un objeto de tipo LinearRegression()
model_simple = LinearRegression()

# Se ajustan los parametros el modelo, se agregan los datos para el
# entrenamiento al modelo de regresion linear
model_simple.fit(X_train, y_train)

# Se predice los valores en el eje y, a partir de los datos del
# x, de acuerdo a lo que el modelo cree que es el modelo correcto
y_pred_simple = model_simple.predict(X_test)

# Se obtiene el MSE de la prediccion comparando los valores de prueba
# con los valores predecidos
mse_simple = mean_squared_error(y_test, y_pred_simple)
print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")


# -----------
#     2
# -----------

X_multiple = data[['median_income', 'housing_median_age', 'population']]
y_multiple = data['median_house_value'].values


X_train_multi, X_test_multi, y_train_multi, y_test_multi = train_test_split(X_multiple, y_multiple, test_size=0.2, random_state=42)


model_multiple = LinearRegression()
model_multiple.fit(X_train_multi, y_train_multi)


y_pred_multiple = model_multiple.predict(X_test_multi)


mse_multiple = mean_squared_error(y_test_multi, y_pred_multiple)
print(f"Error cuadrático medio (MSE) en regresión lineal múltiple: {mse_multiple}")

# -----------
#     3
# -----------
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline


X_nonlinear = data['housing_median_age'].values.reshape(-1, 1)
y_nonlinear = data['median_house_value'].values


X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)


degree = 2
model_nonlinear = make_pipeline(PolynomialFeatures(degree), LinearRegression())
model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)


y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)


mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

# -----------
#     4
# -----------
from sklearn.linear_model import Ridge, Lasso


model_ridge = Ridge(alpha=1.0)
model_ridge.fit(X_train_multi, y_train_multi)


model_lasso = Lasso(alpha=1.0)
model_lasso.fit(X_train_multi, y_train_multi)

# -----------
#     5
# -----------
from sklearn.cluster import KMeans, DBSCAN
import matplotlib.pyplot as plt


X_cluster = data[['longitude', 'latitude']]


kmeans = KMeans(n_clusters=3, random_state=42, n_init=10)
data['cluster_kmeans'] = kmeans.fit_predict(X_cluster)


dbscan = DBSCAN(eps=0.5, min_samples=5)
data['cluster_dbscan'] = dbscan.fit_predict(X_cluster)


plt.scatter(data['longitude'], data['latitude'], c=data['cluster_kmeans'], cmap='viridis', marker='.')
plt.title('Clusters usando K-means')
plt.show()

plt.scatter(data['longitude'], data['latitude'], c=data['cluster_dbscan'], cmap='viridis', marker='.')
plt.title('Clusters usando DBSCAN')
plt.show()
