# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
proporciones = [30, 20, 25, 15]
etiquetas = ['A', 'B', 'C', 'D']

# Sintaxis para crear un grafico de pastel
# autopct indica que se divida el grafico en porcentajes, con un decimal
# starangle indica en que angulo inician las particiones del grafico
# Colors define los colores de la particiones
plt.pie(proporciones, labels=etiquetas, autopct='%1.1f%%', startangle=140,
        colors=['gold', 'lightcoral', 'lightgreen', 'lightskyblue'])

# Titulo del grafico
plt.title('Grafico de Pastel')

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
