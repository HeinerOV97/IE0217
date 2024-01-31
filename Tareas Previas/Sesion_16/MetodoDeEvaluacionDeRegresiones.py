# Se importa numpy
import numpy as np

# Se importa modulo pyplot de matplotlib
import matplotlib.pyplot as plt

# Con train_test_split se dividen en un conjunto de
# entrenamiento y otro de prueba
from sklearn.model_selection import train_test_split

# Se ajusta el modelo
from sklearn.linear_model import LinearRegression

# Metodos para calcular el error
from sklearn.metrics import mean_absolute_error, mean_squared_error

# Se utilizan raices
from math import sqrt

# Se generan datos aleatorios para el ejemplo
# Esto se realiza con el metodo random de numpy
# Los valores aleatorios siempre seran los mismos
# por la forma en que numpy lo calcula a partir de
# de la semilla recibida
np.random.seed(42)

# X es la variable independiente
# np.random.rand(100, 1): Se generan 100 valores aleatorios entre 0 y 1
# con una distribucion uniforme
X = 2 * np.random.rand(100, 1)
# y es la variable dependiente
# np.random.randn(100, 1): Se generean 100 valores aleatorios entre 0 y 1
# con una distribucio normal
y = 4 + 3 * X + np.random.randn(100, 1)

# Dividir los datos, se tiene un conjunto de entrenamiento y otro de prueba
# Con una se crea el modelo y las ecuaciones y con otro se realizan pruebas
# indicamos a train_test_spli que datos queremos para cada conjunto en el
# siguiente codigo, se gerena 4 vectores
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# Se crea y ajusta el modelo de regresion multiple, tal y como
# se hizo en la regresion lineal
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Se realiza predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Se calculan las métricas de evaluación
# mae: cuantifica la magnitud promedio de los errores
# absolutos entre las predicciones de un modelo y
# los valores reales.
# mse: calcula el promedio de los errores cuadrados entre
# las predicciones y los valores reales.
# rmse: Es la raiz cuadrada del MSE, con este se interpreta
# la magnitud promedio de los errores en terminos de la variables
# de interes
# rae: Indicador de rendimiento que mide la proporcion de la suma
# de errores absolutos en relacion con la suma total de las diferencias
# entre las predicciones y los valores reales.
# rse: Proporciona una perspectiva relativa de los errores cuadraticos,
# normalizando la suma de errores cuadrados por la variabilidad total de
# los datos
mae = mean_absolute_error(y_test, y_pred)
mse = mean_squared_error(y_test, y_pred)
rmse = sqrt(mse)
rae = np.sum(np.abs(y_test - y_pred)) / \
             np.sum(np.abs(y_test - np.mean(y_test)))
rse = np.sum((y_test - y_pred)**2) / np.sum((y_test - np.mean(y_test))**2)

# Se imprimen los resultados obtenidos de los metodos de evaluacion
print(f'MAE: {mae:.2f}')
print(f'MSE: {mse:.2f}')
print(f'RMSE: {rmse:.2f}')
print(f'RAE: {rae:.2f}')
print(f'RSE: {rse:.2f}')

# Se crean una grafica de dispersion y una de linea
# Se colocan leyendas, modifican colores, nombres a los ejes
# Y titulos
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test, y_pred, label='Predicciones', color='red')
plt.title('Regresion Lineal y Errores')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()

# Se muestran los errores en la grafica iterando
# Sobre los datos en X_test
for i in range(len(X_test)):
    plt.plot([X_test[i], X_test[i]],
             [y_test[i], y_pred[i]],
             linestyle='--', color='gray')

# Se muestran las graficas
plt.show()
