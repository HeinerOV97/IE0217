# Se importa pyplot de la biblioteca matplotlib
import matplotlib.pyplot as plt

# Se crea una figura que contiene ejes simple
fig, ax = plt.subplots()
# Se imprime informacion en los ejes
ax.plot([1, 3, 4, 4], [1, 4, 2, 3])

# Se imprime la grafica, no se crea una variable, todo se crea sobre plt
plt.show()
