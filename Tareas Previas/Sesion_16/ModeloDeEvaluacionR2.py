# Se importa numpy
import numpy as np

# Se importa modulo pyplot de matplotlib
import matplotlib.pyplot as plt

# Con train_test_split se dividen en un conjunto de
# entrenamiento y otro de prueba
from sklearn.model_selection import train_test_split

# Se ajusta el modelo
from sklearn.linear_model import LinearRegression

# Metodo R2
from sklearn.metrics import r2_score

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

# Coeficiente de determinacion R2:
# Medida estadistica que proporciona
# una indicacion de la proporcion de la variabilidad en
# la variable de respuesta
# R2 toma valores entre 0 y 1.
# R2 = 0: El modelo no explica ninguna variabilidad
# R2 = 1: El modelo explica toda la variabilidad
r2 = r2_score(y_test, y_pred)

# Se imprimen los resultados
# Se crean una grafica de dispersion y una de linea
# Se colocan leyendas, modifican colores, nombres a los ejes
# Y titulos
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test, y_pred, label=f'Regresion Lineal (R^2={r2:.2f})', color='red')
plt.title('Regresion Lineal y Coeficiente de Determinacion R^2')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()

# Se muestran las graficas
plt.show()
