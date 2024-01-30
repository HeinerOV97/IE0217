# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crea variable para crear el ejemplo
datos = [15, 25, 30, 35, 40, 45, 50, 60, 70, 80, 90]

# Sintaxis para crear un grafico de caja
plt.boxplot(datos)

# Se puede personalizar el grafico
# Etiqueta del eje y
plt.ylabel('Valores')

# Titulo del grafico
plt.title('Grafico de Caja')

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
