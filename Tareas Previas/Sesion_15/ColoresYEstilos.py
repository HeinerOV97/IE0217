# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
x = [1, 2, 3, 4, 5]
y = [10, 12, 5, 8, 14]

# Sintaxis para crear un grafico de linea
# color define el color del grafico
# linestyle define el estilo de la linea
# marker define la forma de los marcadores de la linea
# label: leyenda
plt.plot(x, y, color='blue', linestyle='--', marker='o', label='Serie A')

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
plt.xlabel('Eje X')
plt.ylabel('Eje Y')

# Titulo del grafico
plt.title('Grafico personalizado')

# Se indica que se desea el uso de leyendas
plt.legend()

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
