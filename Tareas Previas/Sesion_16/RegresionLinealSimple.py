# Se importa numpy
import numpy as np

# Se importa modulo pyplot de matplotlib
import matplotlib.pyplot as plt

# Se importa metodo LinearRegression de sklearn.linear_model
# Se ajusta el modelo
from sklearn.linear_model import LinearRegression

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

# Se crea un modelo de regresion lineal
# LinearRegresion() es una clase y modelo es una instancia
# de esta clase
modelo = LinearRegression()

# El modelo es ajustado, utilizando metodo fit
modelo.fit(X, y)

# Se imprimen el coeficiente y la intercepcion
# Atributos de la clase LinearRegression()
# modelo.coef_
# modelo.intercept_
print("Coeficiente:", modelo.coef_[0][0])
print("Intercepcion", modelo.intercept_[0])

# Se visualiza la regresion lineal
# Se crea un grafico de dispersion
plt.scatter(X, y)
# Se crea un grafico lineal
plt.plot(X, modelo.predict(X), color='red', linewidth=3)

# Titulo de la grafica
plt.title('Regresion Lineal')
# nombres de los ejes X y Y
plt.xlabel('X')
plt.ylabel('Y')

# Se imprimen los graficos
plt.show()
