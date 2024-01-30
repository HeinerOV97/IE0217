# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
x = [1, 2, 3, 4, 5]
y1 = [10, 12, 5, 8, 14]
y2 = [5, 8, 9, 6, 10]

# Se crea una figura que contiene ejes simples
# Se define una fila y dos columnas de la figura
fig, axs = plt.subplots(1, 2)

# Se definen las caracteristicas de la grafica de la primera subtrama
# label: leyenda
# set_title define el titulo del grafico
axs[0].plot(x, y1, label='Serie A')
axs[0].set_title('Subtrama 1')


# Se definen las caracteristicas de la grafica de la segunda subtrama
# label: leyenda
# color: color del grafico
# set_title define el titulo del grafico
axs[1].plot(x, y2, label='Serie B', color='red')
axs[1].set_title('Subtrama 2')

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
# se define mediante un for que itera
# sobre cada subtrama
for ax in axs:
    ax.set_xlabel('Eje X')
    ax.set_ylabel('Eje Y')
    ax.legend()

# Se ajusta la disposicion
plt.tight_layout

# Se imprime los graficos, no se crea una variable, todo se crea sobre plt
plt.show()
