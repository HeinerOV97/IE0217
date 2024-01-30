# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Sintaxis para crear un grafico de linea
plt.plot(x, y, label='Datos de ejemplo')

# Como crear una anotacion en una grafica
# xy indica la posicion donde senala la anotacion
# xytext posicion de la etiqueta
# arrowprops especifica las caracteristicas de la flecha
plt.annotate('Valor Maximo', xy=(5, 14), xytext=(3, 16),
             arrowprops=dict(facecolor='black', shrink=0.05))

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
plt.xlabel('Eje X')
plt.ylabel('Eje Y')

# Titulo del grafico
plt.title('Grafico con anotacion')

# Se indica que se desea el uso de leyendas
plt.legend()

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
