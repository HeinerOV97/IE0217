# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se importa numpy
import numpy as np

# Se crean variables para crear el ejemplo
categorias = ['A', 'B', 'C', 'D']
valores1 = [15, 8, 12, 10]
valores2 = [12, 10, 15, 7]
tendencia = [11, 9, 13, 9]

# Se crea una figura que contiene ejes simple
fig, ax = plt.subplots()

# Se define el ancho que van a poseer las barras en el grafico
ancho_barra = 0.35

# Se crea un arreglo que posee los indices numericos de la lista
# categorias
indice = np.arange(len(categorias))

# Se crea un grafico de barras agrupadas
# Se crean dos graficos de barras que iran agrupados entre ellos
bar1 = ax.bar(indice - ancho_barra / 2, valores1, ancho_barra, label='Serie 1',
              color='royalblue')
bar2 = ax.bar(indice - ancho_barra / 2, valores2, ancho_barra, label='Serie 2',
              color='lightcoral')

# Se define la linea de tendencia
ax.plot(indice, tendencia, label='Tendencia', marker='o', color='green')

# Se personaliza el grafico
# Etiqueta del eje X
ax.set_xlabel('Categorias')
# Etiqueta del eje Y
ax.set_xlabel('Valores')
# Titulo del grafico
ax.set_title('Grafico de Barras Agrupadas con Tendencia')

# Se define las posiciones de los indicadores en el eje X
# Estas estaran definidas por el arreglo creado en indice
ax.set_xticks(indice)

# Se coloca en las etiquetas del eje X los valores que estan
# en la lista de categorias
ax.set_xticklabels(categorias)

# Se agregan las leyendas
ax.legend

# Se agregan las etiquetas a las barras
for bar in [bar1, bar2]:
    for rect in bar:
        height = rect.get_height()
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 3),
                    textcoords='offset points',
                    ha='center', va='bottom')

# Se imprime el grafico
# Se define estilo del grid
plt.grid(axis='y', linestyle='--', alpha=0.7)

# Se ajusta la disposicion
plt.tight_layout()

# Se imprime la grafica, no se crea una variable, todo se crea sobre plt
plt.show()
