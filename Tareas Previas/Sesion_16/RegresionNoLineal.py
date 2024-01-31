# Se importa numpy
import numpy as np

# Se importa modulo pyplot de matplotlib
import matplotlib.pyplot as plt

# Se indica el grado del polinomio
from sklearn.preprocessing import PolynomialFeatures

# Se ajusta el modelo
from sklearn.linear_model import LinearRegression

# Se crear la curva de mejor ajuste que pueda obtener
from sklearn.pipeline import make_pipeline

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
y = 0.5 * X**2 + X + 2 + np.random.randn(100, 1)

# Se visualizan los datos no lineales obtenidos
# Se crea un grafico de dispersion
plt.scatter(X, y)

# Titulo de la grafica
plt.title('Datos de regresion no lineal')
# nombres de los ejes X y Y
plt.xlabel('X')
plt.ylabel('Y')

# Se muestra el grafico
plt.show()

# Se aplica regresion polinomica de segundo grado
# make_pipeline manera de decirle a sklearn que devuelva
# una regresion no lineal, los argumentos son el grado polinomico
# y el LinearRegression
grado_polinomio = 2
# El programa se encarga de crear la curva de mejor ajuste que pueda obtener
modelo_polinomico = make_pipeline(
    PolynomialFeatures(grado_polinomio), LinearRegression())

# Se ajusta el modelo con respecto a X y y
modelo_polinomico.fit(X, y)

# Se visualiza la regresion polinomica
# La curva de mejor ajuste
X_test = np.linspace(0, 2, 100).reshape(100, 1)
y_pred = modelo_polinomico.predict(X_test)

# Se crea una grafica de dispersion
# Se obtiene ecuacion
plt.scatter(X, y)
plt.plot(X_test, y_pred, color='red',
         label=f'Regresion Polinomica ({grado_polinomio} grado)')

# Titulo de la grafica
plt.title('Regresion Polinomica')
# nombres de los ejes X y Y
plt.xlabel('X')
plt.ylabel('Y')

# Se muestran las leyendas
plt.legend()

# Se muestra el grafico
plt.show()
