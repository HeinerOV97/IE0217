# Se importan pandas y numpy para el manejo de datos
import pandas as pd
import numpy as np

# Con train_test_split podemos dividir la muestra
# Cuanto se utiliza para entrenamiento y cuando para
# la prueba
from sklearn.model_selection import train_test_split

# Modelo de regresion lineal
from sklearn.linear_model import LinearRegression

# Se obtienen los metodos para calcular el rendimiento
# de los modelos
from sklearn.metrics import mean_squared_error, mean_absolute_error, r2_score

# Modelo de regresion no lineal
from sklearn.preprocessing import PolynomialFeatures

# Utilizado para crear la curva de mejor ajuste
from sklearn.pipeline import make_pipeline

# Se importa modulo pyplot de matplotlib
import matplotlib.pyplot as plt

'''
Para esta seccion se utilizan los nombres en las
variables que utiliza el profesor ya que se consideran
apropiados y mas entendibles para realizar el codigo
'''


def RegresionLinealPrecioVsAnno(data):
    '''
    Se realizan predicciones utilizando regresion lineal,
    en este caso se realiza la prediccion, del precio
    contra el anno en que fueron fabricados los autos

    param: X_simple: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje X.
    param: y_simple: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje y.
    param: X_train: Datos del eje X utilizados para
    entrenar el modelo.
    param: X_test: Datos del eje X utilizados para
    probar el modelo.
    param: y_train: Dayos del eje y utilizados para
    entrenar el modelo.
    param: y_test: Datos del eje y utilizados para
    probar el modelo.
    param: model_simple: Linea de mejor ajuste
    param: y_pred_simple: Prediccion de los valores
    del eje y a partir de los datos del eje X de prueba
    param: mse_simple: Error cuadratico medio
    param: mae_simple: Error absoluto medio
    param: r2_simple: Coeficiente de determinacion
    '''
    # Se extraen los datos en categoria year y se cambia la forma
    # de los datos para que se cree un array de arrays,
    # esto se realiza asi porque este es el dato que espera recibir
    # el metodo train_test_split. Con -1 Numpy calcula por si solo
    # el tamano del array
    X_simple = data['year'].values.reshape(-1, 1)

    # Se extraen los datos de la columna selling_price para utilizarlos
    # en el eje y, esta columna representa el precio de los automoviles
    y_simple = data['selling_price'].values

    # El modelo sera entrenado con los valores que se definieron para los ejes
    # x y y anteriormente, el entrenamiento se realiza con un 80% de los datos,
    # y el 20% sera utilizado para la prueba, la semilla random sera 42.
    X_train, X_test, y_train, y_test = train_test_split(
        X_simple, y_simple, test_size=0.2, random_state=42)

    # Se instancia un objeto de tipo LinearRegression()
    model_simple = LinearRegression()

    # Se ajustan los parametros el modelo, se agregan los datos para el
    # entrenamiento al modelo de regresion linear
    model_simple.fit(X_train, y_train)

    # Se predice los valores en el eje y, a partir de los datos del eje
    # x, de acuerdo a lo que el modelo cree que es el modelo correcto
    y_pred_simple = model_simple.predict(X_test)

    # Se imprime el error cuadratico medio
    mse_simple = mean_squared_error(y_test, y_pred_simple)
    print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")

    # Se imprime el error absoluto medio
    mae_simple = mean_absolute_error(y_test, y_pred_simple)
    print(f"Error absoludio medio (MAE) en regresión lineal simple: {mae_simple}")

    # Se imprime el coeficiente de determinacion
    r2_simple = r2_score(y_test, y_pred_simple)
    print(f"Coeficiente de determinacion (R2) en regresión lineal simple: {r2_simple}")

    # Se visualiza la primera regresion lineal
    # Se crea un grafico de dispersion
    plt.scatter(X_simple, y_simple, color='green')
    # Se crea un grafico lineal
    plt.plot(X_test, y_pred_simple, color='blue', linewidth=3)

    # Titulo de la grafica
    plt.title("Comportamiento del precio de los autos vs. Anno de fabricacion")
    # Nombres de los ejes X y Y de la grafica
    plt.xlabel('Anno de fabricacion de los autos')
    plt.ylabel('Precio de venta de los autos')

    # Se imprimen los graficos
    plt.show()


def RegresionLinealPrecioVsKilometraje(data):
    '''
    Se realizan predicciones utilizando regresion lineal
    en este caso se realiza la prediccion, del precio
    contra el kilometraje recorrido que poseen los autos

    param: X_simple: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje X.
    param: y_simple: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje y.
    param: X_train: Datos del eje X utilizados para
    entrenar el modelo.
    param: X_test: Datos del eje X utilizados para
    probar el modelo.
    param: y_train: Dayos del eje y utilizados para
    entrenar el modelo.
    param: y_test: Datos del eje y utilizados para
    probar el modelo.
    param: model_simple: Linea de mejor ajuste
    param: y_pred_simple: Prediccion de los valores
    del eje y a partir de los datos del eje X de prueba
    param: mse_simple: Error cuadratico medio
    param: mae_simple: Error absoluto medio
    param: r2_simple: Coeficiente de determinacion
    '''
    # Se extraen los datos en categoria km_driven y se cambia la forma
    # de los datos para que se cree un array de arrays,
    # esto se realiza asi porque este es el dato que espera recibir
    # el metodo train_test_split. Con -1 Numpy calcula por si solo
    # el tamano del array.
    X_simple = data['km_driven'].values.reshape(-1, 1)

    # Se extraen los datos de la columna selling_price para utilizarlos
    # en el eje y, esta columna representa el precio de los automoviles
    y_simple = data['selling_price'].values

    # El modelo sera entrenado con los valores que se definieron para ejes
    # x y y, anteriormente el entrenamiento se realiza con un 80% de los datos,
    # y el 20% sera utilizado para la prueba, la semilla random sera 42.
    X_train, X_test, y_train, y_test = train_test_split(
        X_simple, y_simple, test_size=0.2, random_state=42)

    # Se instancia un objeto de tipo LinearRegression()
    model_simple = LinearRegression()

    # Se ajustan los parametros el modelo, se agregan los datos para el
    # entrenamiento al modelo de regresion linear
    model_simple.fit(X_train, y_train)

    # Se predice los valores en el eje y, a partir de los datos del eje
    # x, de acuerdo a lo que el modelo cree que es el modelo correcto
    y_pred_simple = model_simple.predict(X_test)

    # Se imprime el error cuadratico medio
    mse_simple = mean_squared_error(y_test, y_pred_simple)
    print(f"Error cuadrático medio (MSE) en regresión lineal simple: {mse_simple}")

    # Se imprime el error absoluto medio
    mae_simple = mean_absolute_error(y_test, y_pred_simple)
    print(f"Error absoludio medio (MAE) en regresión lineal simple: {mae_simple}")

    # Se imprime el coeficiente de determinacion
    r2_simple = r2_score(y_test, y_pred_simple)
    print(f"Coeficiente de determinacion (R2) en regresión lineal simple: {r2_simple}")

    # Se visualiza la primera regresion lineal
    # Se crea un grafico de dispersion
    plt.scatter(X_simple, y_simple, color='red')
    # Se crea un grafico lineal
    plt.plot(X_test, y_pred_simple, color='blue', linewidth=3)

    # Titulo de la grafica
    plt.title("Comportamiento del precio de los autos vs. Kilometraje")
    # nombres de los ejes X y Y
    plt.xlabel('Kilometraje de los autos')
    plt.ylabel('Precio de venta de los autos')

    # Se imprimen los graficos
    plt.show()


def RegresionNoLinealPrecioVsAnno(data):
    '''
    Se realizan predicciones utilizando regresion no lineal
    en este caso se realiza la prediccion, del precio
    contra el anno de fabricacion del auto

    param: X_nonlinear: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje X.
    param: y_nonlinear: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje y.
    param: X_train_nonlinear: Datos del eje X utilizados para
    entrenar el modelo.
    param: X_test_nonlinear: Datos del eje X utilizados para
    probar el modelo.
    param: y_train_nonlinear: Dayos del eje y utilizados para
    entrenar el modelo.
    param: y_test_nonlinear: Datos del eje y utilizados para
    probar el modelo.
    param: model_nonlinear: Curva de mejor ajuste
    param: y_pred_nonlinear: Prediccion de los valores
    del eje y a partir de los datos del eje X de prueba
    param: mse_nonlinear: Error cuadratico medio
    param: mae_nonlinear: Error absoluto medio
    param: r2_nonlinear: Coeficiente de determinacion
    '''
    # Se extraen los datos en categoria year y se cambia la forma
    # de los datos para que se cree un array de arrays,
    # esto se realiza asi porque este es el dato que espera recibir
    # el metodo train_test_split. Con -1 Numpy calcula por si solo
    # el tamano del array.
    X_nonlinear = data['year'].values.reshape(-1, 1)

    # Se extraen los datos de la columna selling_price para utilizarlos
    # en el eje y, esta columna representa el precio de los automoviles
    y_nonlinear = data['selling_price'].values

    # El modelo sera entrenado con los valores que se definieron para ejes
    # x y y, anteriormente el entrenamiento se realiza con un 80% de los datos,
    # y el 20% sera utilizado para la prueba, la semilla random sera 42.
    X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)

    # Se elige el grado del modelo que se intentara predecir
    grado_del_polinomio = 2

    # Se crear la curva de mejor ajuste que se pueda obtener
    model_nonlinear = make_pipeline(PolynomialFeatures(grado_del_polinomio), LinearRegression())

    # Se ajustan los parametros el modelo
    model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)

    # Se predice los valores en el eje y, a partir de los datos del eje
    # x, de acuerdo a lo que el modelo cree que es el modelo correcto
    y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)

    # Se imprime el error cuadratico medio
    mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
    print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

    # Se imprime el error absoluto medio
    mae_nonlinear = mean_absolute_error(y_test_nonlinear, y_pred_nonlinear)
    print(f"Error absoludio medio (MAE) en regresión no lineal: {mae_nonlinear}")

    # Se imprime el coeficiente de determinacion
    r2_nonlinear = r2_score(y_test_nonlinear, y_pred_nonlinear)
    print(f"Coeficiente de determinacion (R2) en regresión no lineal: {r2_nonlinear}")

    # Se visualiza la regresion no lineal
    # Se crea una grafica de dispersion
    plt.scatter(X_nonlinear, y_nonlinear, color='green')
    # Se grafica la curva de mejor ajuste
    plt.plot(X_test_nonlinear, y_pred_nonlinear, color='blue',
             label=f'Regresion Polinomica ({grado_del_polinomio} grado)')

    # Titulo de la grafica
    plt.title("Comportamiento del precio de los autos vs. Anno de fabricacion")
    # nombres de los ejes X y Y
    plt.xlabel('Anno de fabricacion de los autos')
    plt.ylabel('Precio de venta de los autos')

    # Se muestran las leyendas
    plt.legend()

    # Se imprimen los graficos
    plt.show()


def RegresionNoLinealPrecioVsKilometraje(data):
    '''
    Se realizan predicciones utilizando regresion no lineal
    en este caso se realiza la prediccion, del precio
    contra el kilometraje recorrido que estos poseen

    param: X_nonlinear: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje X.
    param: y_nonlinear: Datos obtenidos del DataFrame que
    se recibe como argumento y seran utilizados como
    datos del eje y.
    param: X_train_nonlinear: Datos del eje X utilizados para
    entrenar el modelo.
    param: X_test_nonlinear: Datos del eje X utilizados para
    probar el modelo.
    param: y_train_nonlinear: Dayos del eje y utilizados para
    entrenar el modelo.
    param: y_test_nonlinear: Datos del eje y utilizados para
    probar el modelo.
    param: model_nonlinear: Curva de mejor ajuste
    param: y_pred_nonlinear: Prediccion de los valores
    del eje y a partir de los datos del eje X de prueba
    param: mse_nonlinear: Error cuadratico medio
    param: mae_nonlinear: Error absoluto medio
    param: r2_nonlinear: Coeficiente de determinacion
    '''
    # Se extraen los datos en categoria year y se cambia la forma
    # de los datos para que se cree un array de arrays,
    # esto se realiza asi porque este es el dato que espera recibir
    # el metodo train_test_split. Con -1 Numpy calcula por si solo
    # el tamano del array.
    X_nonlinear = data['km_driven'].values.reshape(-1, 1)

    # Se extraen los datos de la columna selling_price para utilizarlos
    # en el eje y, esta columna representa el precio de los automoviles
    y_nonlinear = data['selling_price'].values

    # El modelo sera entrenado con los valores que se definieron para ejes
    # x y y, anteriormente el entrenamiento se realiza con un 80% de los datos,
    # y el 20% sera utilizado para la prueba, la semilla random sera 42.
    X_train_nonlinear, X_test_nonlinear, y_train_nonlinear, y_test_nonlinear = train_test_split(X_nonlinear, y_nonlinear, test_size=0.2, random_state=42)

    # Se elige el grado del modelo que se intentara predecir
    grado_del_polinomio = 2

    # Se crear la curva de mejor ajuste que se pueda obtener
    model_nonlinear = make_pipeline(PolynomialFeatures(grado_del_polinomio),
                                    LinearRegression())

    # Se ajustan los parametros el modelo
    model_nonlinear.fit(X_train_nonlinear, y_train_nonlinear)

    # Se predice los valores en el eje y, a partir de los datos del eje
    # x, de acuerdo a lo que el modelo cree que es el modelo correcto
    y_pred_nonlinear = model_nonlinear.predict(X_test_nonlinear)

    # Se imprime el error cuadratico medio
    mse_nonlinear = mean_squared_error(y_test_nonlinear, y_pred_nonlinear)
    print(f"Error cuadrático medio (MSE) en regresión no lineal: {mse_nonlinear}")

    # Se imprime el error absoluto medio
    mae_nonlinear = mean_absolute_error(y_test_nonlinear, y_pred_nonlinear)
    print(f"Error absoludio medio (MAE) en regresión no lineal: {mae_nonlinear}")

    # Se imprime el coeficiente de determinacion
    r2_nonlinear = r2_score(y_test_nonlinear, y_pred_nonlinear)
    print(f"Coeficiente de determinacion (R2) en regresión no lineal: {r2_nonlinear}")

    # Se visualiza la regresion no lineal
    # Se crea una grafica de dispersion
    plt.scatter(X_nonlinear, y_nonlinear, color='blue')

    # Se grafica la curva de mejor ajuste
    plt.plot(X_test_nonlinear, y_pred_nonlinear, color='red',
             label=f'Regresion Polinomica ({grado_del_polinomio} grado)')

    # Titulo de la grafica
    plt.title("Comportamiento del precio de los autos vs. Kilometraje")
    # nombres de los ejes X y Y
    plt.xlabel('Kilometraje de los autos')
    plt.ylabel('Precio de venta de los autos')

    # Se muestran las leyendas
    plt.legend()

    # Se imprimen los graficos
    plt.show()
