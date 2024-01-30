# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se importa numpy
import numpy as np

# Se crean variables para crear el ejemplo
# Se crean 100 elementos espaciados de 0 a 2*np.pi
# linspace devuelve una lista
x = np.linspace(0, 2 * np.pi, 100)

# Se obtiene el seno y coseno de x
y1 = np.sin(x)
y2 = np.cos(x)

# Se crean dos graficas de lineas con
# dos series de datos diferentes
# label:leyenda
plt.plot(x, y1, label='Seno')
plt.plot(x, y2, label='Coseno')

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
plt.xlabel('Angulo (rad)')
plt.ylabel('Valor')

# Titulo del grafico
plt.title('Funciones Seno y Coseno')

# Se indica que se desea el uso de leyendas
plt.legend()

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
