# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Sintaxis para crear un grafico de barras verticales
# color: define el color de la grafica
plt.bar(categorias, valores, color='royalblue')

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
plt.xlabel('Eje X')
plt.ylabel('Eje Y')

# Titulo del grafico
plt.title('Grafico de Barras Verticales')

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
