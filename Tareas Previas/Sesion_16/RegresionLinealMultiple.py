# Se importa pandas, pyplot de matplotlib, algunos metodos
# y clases de sklearn
import pandas as pd
import matplotlib.pyplot as plt

# Con train_test_split se dividen en un conjunto de
# entrenamiento y otro de prueba
from sklearn.model_selection import train_test_split

# Se ajusta el modelo
from sklearn.linear_model import LinearRegression

# Se generan datos para el ejemplo con make_regression
from sklearn.datasets import make_regression

# Se generan datos para el ejemplo con make_regression
# n_samples: numero de muestras
# n_features: numero de caracteristicas
# noise: ruido
# random_state: semilla para generar datos
# Se generan vectores x y y
X, y = make_regression(n_samples=100, n_features=3, noise=20, random_state=42)

# Se crea un DataFrame para tener una mejor claridad de los datos,
# con los datos de X y y.
df = pd.DataFrame(X, columns=['Tamano', 'Habitaciones', 'Distancia_Ciudad'])
df['Precio'] = y

# Dividir los datos, se tiene un conjunto de entrenamiento y otro de prueba
# Con una se crea el modelo y las ecuaciones y con otro se realizan pruebas
# indicamos a train_test_spli que datos queremos para cada conjunto en el
# siguiente codigo, se gerena 4 vectores
X_train, X_test, y_train, y_test = train_test_split(
    df[['Tamano', 'Habitaciones', 'Distancia_Ciudad']],
    df['Precio'], test_size=0.2, random_state=42)

# Se crea y ajusta el modelo de regresion multiple, tal y como
# se hizo en la regresion lineal
modelo = LinearRegression()
modelo.fit(X_train, y_train)

# Se imprimen el coeficiente y la intercepcion
# Atributos de la clase LinearRegression()
# modelo.coef_
# modelo.intercept_
print("Coeficiente:", modelo.coef_)
print("Intercepcion", modelo.intercept_)

# Se realiza predicciones en el conjunto de prueba
y_pred = modelo.predict(X_test)

# Se procede a realizar la visualizacion de la regresion
# Se crea la figura
fig = plt.figure(figsize=(12, 6))

# Primer grafica que sera creada
# Tamano vs. Precio
# 131: 1 fila, 3 columnas, grafica #1
# projection: graficas en 3d
ax1 = fig.add_subplot(131, projection='3d')

# Se crea un grafico de dispersion, con sus
# con sus respectivas configuraciones de forma
ax1.scatter(
    X_test['Tamano'], X_test['Habitaciones'],
    y_test, c='blue', marker='o', alpha=0.5)
# Etiquetas de los ejes y titulo
ax1.set_xlabel('Tamano')
ax1.set_ylabel('Habitaciones')
ax1.set_zlabel('Precio Verdadero')
ax1.set_title('Precio Verdadero vs. Tamano y Habitaciones')

# Segunda grafica que sera creada
# Tamano vs. Precio Predicho
# 132: 1 fila, 3 columnas, grafica #2
# projection: graficas en 3d
ax2 = fig.add_subplot(132, projection='3d')

# Se crea un grafico de dispersion, con sus
# con sus respectivas configuraciones de forma
ax2.scatter(
    X_test['Tamano'], X_test['Habitaciones'],
    y_pred, c='red', marker='o', alpha=0.5)
# Etiquetas de los ejes y titulo
ax2.set_xlabel('Tamano')
ax2.set_ylabel('Habitaciones')
ax2.set_zlabel('Precio Predicho')
ax2.set_title('Precio Predicho vs. Tamano y Habitaciones')

# Tercera grafica que sera creada
# Comparacion de Precio Verdadero y Precio Predicho
# 132: 1 fila, 3 columnas, grafica #3
# projection: graficas en 3d
ax3 = fig.add_subplot(133)

# Se crea un grafico de dispersion, con sus
# con sus respectivas configuraciones de forma
ax3.scatter(y_test, y_pred, c='green', alpha=0.5)

# Se crea grafico lineal
ax3.plot(
    [min(y_test), max(y_test)], [min(y_test), max(y_test)],
    linestyle='--', color='red', linewidth=2)

# Etiquetas de los ejes y titulo
ax3.set_xlabel('Precio Verdadero')
ax3.set_ylabel('Precio Predicho')
ax3.set_title('Comparacion de Precio Verdadero y Precio Predicho')

# Se ajusta la disposicion
plt.tight_layout()

# Se imprimen los graficos
plt.show()
