# Se importa numpy
import numpy as np

# Se importa modulo pyplot de matplotlib
import matplotlib.pyplot as plt

# Con train_test_split se dividen en un conjunto de
# entrenamiento y otro de prueba
from sklearn.model_selection import train_test_split

# Se ajusta el modelo
from sklearn.linear_model import LinearRegression, Lasso, Ridge

# Se indica el grado del polinomio
from sklearn.preprocessing import PolynomialFeatures

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

# Dividir los datos, se tiene un conjunto de entrenamiento y otro de prueba
# Con una se crea el modelo y las ecuaciones y con otro se realizan pruebas
# indicamos a train_test_spli que datos queremos para cada conjunto en el
# siguiente codigo, se gerena 4 vectores
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42)

# El programa se encarga de crear la curva de mejor ajuste que pueda obtener
# Modelo de regresion polinomica de grado 2
modelo_polinomico = make_pipeline(
    PolynomialFeatures(degree=2), LinearRegression())
# Se ajusta el modelo con respecto a X y y
modelo_polinomico.fit(X_train, y_train)

# Se crea un modelo Lasso (L1)
# Agrega la suma de los valores absolutos de los coeficientes
# multiplicados por un parametro de regularizacion
# puede llevar algunos coeficientes a cero
# alpha es el parametro de regularizacion
modelo_lasso = make_pipeline(PolynomialFeatures(degree=2), Lasso(alpha=0.1))
# Se ajusta el modelo con respecto a X y y
modelo_lasso.fit(X_train, y_train)

# Se crea un modelo Ridge (L2)
# Agrega la suma de los valores cuadrados de los coeficientes
# multiplicados por un parámetro de regularización
# no lleva los coeficientes a cero, pero tiende a reducir su
# magnitud, evitando valores extremadamente altos
# alpha es el parametro de regularizacion
modelo_ridge = make_pipeline(PolynomialFeatures(degree=2), Ridge(alpha=0.1))
# Se ajusta el modelo con respecto a X y y
modelo_ridge.fit(X_train, y_train)

# Se visualizan los resultados
X_test_sorted, y_pred_polinomico_sorted = \
    zip(*sorted(zip(X_test, modelo_polinomico.predict(X_test))))
X_test_sorted, y_pred_lasso_sorted = \
    zip(*sorted(zip(X_test, modelo_lasso.predict(X_test))))
X_test_sorted, y_pred_ridge_sorted = \
    zip(*sorted(zip(X_test, modelo_ridge.predict(X_test))))

# Se imprimen los resultados
# Se crean una grafica de dispersion y tres de linea
# Se colocan leyendas, modifican colores, nombres a los ejes
# Y titulos
plt.scatter(X_test, y_test, label='Datos de prueba', color='blue')
plt.plot(X_test_sorted, y_pred_polinomico_sorted, label='Regresion Polinomica',
         color='green')
plt.plot(X_test_sorted, y_pred_lasso_sorted, label='Lasso (L1)', color='red')
plt.plot(X_test_sorted, y_pred_ridge_sorted, label='Ridge (L2)',
         color='orange')

plt.title('Regresion Lineal y Coeficiente de Determinacion R^2')
plt.xlabel('X')
plt.ylabel('Y')
plt.legend()

# Se muestran las graficas
plt.show()
