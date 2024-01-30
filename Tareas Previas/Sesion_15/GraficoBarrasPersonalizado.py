# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crean variables para crear el ejemplo
categorias = ['A', 'B', 'C', 'D']
valores = [15, 8, 12, 10]

# Sintaxis para crear un grafico de barras verticales
# color: define el color de la grafica
# edgecolor: define color del borde
plt.bar(categorias, valores, color='royalblue', edgecolor='black')

# Se puede personalizar el grafico
# Etiqueta de los ejes y y x
# fontsize define el tamano de la fuente
plt.xlabel('Categorias', fontsize=12)
plt.ylabel('Valores', fontsize=12)

# Titulo del grafico
# fontsize define el tamano de la fuente
plt.title('Grafico de Barras', fontsize=12)

# Se rotan 45 grados los valores del eje X
plt.xticks(rotation=45)

# Caracteristicas y estilo del grid
# lineal con respecto al eje y
plt.grid(axis='y', linestyle='--', alpha=0.7)

# Se anaden etiquetas en las barras
# Se define posicion
# ha: En el centro
# va: Sobre las barras
# fontsize: tamano de la fuente
for i, v in enumerate(valores):
    plt.text(i, v + 0.5, str(v), ha='center', va='bottom', fontsize=10)

# Se imprime el grafico, no se crea una variable, todo se crea sobre plt
plt.show()
