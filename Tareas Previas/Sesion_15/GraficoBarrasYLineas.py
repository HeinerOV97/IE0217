# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]
tendencia = [5, 10, 8, 13]

# Se crea una figura con una fila y dos columnas
# posee dos subtramas
# figsize indica el tamano
fig, axs = plt.subplots(1, 2, figsize=(10, 4))

# Se crea grafico de barras
# color: color de la grafica
axs[0].bar(categorias, valores, color='royalblue')
axs[0].set_title('Grafico de Barras')

axs[1].plot(categorias, tendencia, color='green', marker='o')
axs[1].set_title('Grafico de Linea')

# Etiqueta de los ejes y y x
# se define mediante un for que itera
# sobre cada subtrama
for ax in axs:
    ax.set_xlabel('Categorias')
    ax.set_ylabel('Valores')

# Se ajusta la disposicion
plt.tight_layout

# Se imprime los graficos, no se crea una variable, todo se crea sobre plt
plt.show()
