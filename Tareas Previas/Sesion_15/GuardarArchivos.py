# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Sintaxis para crear un grafico de linea
plt.plot(x, y)

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
plt.xlabel('Eje X')
plt.ylabel('Eje Y')

# Titulo del grafico
plt.title('Grafico de Linea Simple')

# Se puede guardar una imagen en formato PNG
# Al correr el codigo se crea una imagen con
# la grafica y nombre grafico.png
plt.savefig('grafico.png')

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
