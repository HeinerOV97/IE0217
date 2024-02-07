"""
@copyright Copyright 2024 Heiner Obando Vega. All right reserved. This project is released under the MIT License
@file ManejoClases.py
@date 06/02/2024
@author Heiner Obando Vega
"""
# Se importa al archivo AnalisisDatos
# que posee la clase AnalisisDatos
# de esta manera se pueden utilizas
# todas las clases creadas, ya que
# se utiliza herencia
from AnalisisDatos import AnalisisDatos

# Se importa parte de la biblioteca de matplotlib
# para poder realizar graficos, se realizan dos
# graficos con esta biblioteca
import matplotlib.pyplot as plt

# Se importa Seaborn para utilizar sus graficos
# se realizan dos graficos con esta biblioteca
import seaborn as sns


def main():
    """
    Funcion principal que se hace cargo de los llamados
    a las clases utilizadas.
    En esta misma funcion se crearan las graficas, para un mejor uso
    de los datos

    param: objeto_datos: Instancia de clase, posee todos metodos
    necesarios para obtener el analisis de los datos
    param: detalles_estadisticos_basicos: Almacena datos descriptivos
    de los datos
    param: modelos_mas_utilizados: Serie con los modelos de avion
    mas utilizados
    param: empresa_mas_utilizada_por_mes: DataFrame con las empresas
    que mas realizan vuelos por mes
    """
    # Se crea una variable que posea el nombre del csv a utilizar
    datos = 'datos_vuelos.csv'

    # Se crea el objeto que contendra el DataFrame a utilizar
    # este mismo tendra todos los metodos que se pueden
    # utilizar en las diferentes clases
    objeto_datos = AnalisisDatos(datos)

    # Se realiza la limpieza de datos, eliminando una columna
    # inncesaria y conviritiendo en cero los valores null
    objeto_datos.LimpiezaDeDatos()

    # # # # # # # # # # # # # # # #
    # Datos Estadisticos basicos  #
    # # # # # # # # # # # # # # # #

    # Se obtienen los datos estadisticos basicos del
    # conjunto de datos almacenado
    detalles_estadisticos_basicos = objeto_datos.DatosDescriptivos()
    print("\nSe obtienen datos estadisticos descriptivos "
          "del conjunto de datos analizado\n")
    print(detalles_estadisticos_basicos)

    # Se crea un gráfico de cajas para mostrar la distribución
    # de los pasajeros por vuelo, en este gráfico no se incluyen
    # los datos atípicos, para realizar un análisis general de
    # la distribución de los pasajeros, el argumento
    # showfliers=False oculta los valores atípicos
    plt.boxplot(objeto_datos.df['PASSENGERS'], showfliers=False)
    plt.ylabel('Cantidad de pasajeros transportados por vuelo')
    plt.title('Distribución de los pasajeros sin datos atípicos')

    # Se comenta esta linea para que al momento de la revisión
    # no se guarden imagenes, este codigo fue utilizado para
    # almacenar los gráficos utilizados en el analisis
    # plt.savefig('grafico_5.png', dpi=300)

    # Se imprime el grafico en pantalla
    plt.show()

    # Se crea un gráfico de cajas para mostrar la distribución
    # de los pasajeros por vuelo, en este gráfico se incluyen
    # los datos atípicos, para realizar un análisis completo de
    # la distribución de los pasajeros
    plt.boxplot(objeto_datos.df['PASSENGERS'])
    plt.ylabel('Cantidad de pasajeros transportados por vuelo')
    plt.title('Distribución de los pasajeros con datos atípicos')

    # Se comenta esta linea para que al momento de la revisión
    # no se guarden imagenes, este codigo fue utilizado para
    # almacenar los gráficos utilizados en el analisis
    # plt.savefig('grafico_6.png', dpi=300)

    # Se imprime el grafico en pantalla
    plt.show()

    # # # # # # # # # # # # # # # # # # # # # # #
    # Cantidad de vuelos entre Enero y Octubre  #
    # # # # # # # # # # # # # # # # # # # # # # #

    # Se llaman a los generadores creados para obtener los datos de la
    # cantidad de vuelos y pasajeros que transporta cada aerolinea
    # entre enero y octubre y se imprimen, ademas de esto se
    # van a graficar al mismo tiempo
    print("\nSe obtiene una lista detallada de los vuelos totales y",
          "el numero de pasajeros que transporto cada aerolinea entre enero\n",
          "y octubre del 2023")
    print("\nVuelos totales que realiza "
          "cada aerolinea entre Enero y Octubre\n")
    # Cantidad de vuelos totales por aerolinea
    # Se imprimen los datos en pantalla y se crea un grafico
    # de barras para obtener datos visuales
    plt.figure(figsize=(15, 5))
    for empresa_aerolinea, vuelos_totales in objeto_datos.GeneradorVuelosTotalesAerolinea():
        print(f"Empresa Aerolinea: {empresa_aerolinea}, "
              f"Numero de vuelos totales: {vuelos_totales}, ")
        # Cada vez que se itere el for, un par de datos sera
        # agrega al grafico de barras
        plt.bar(empresa_aerolinea, vuelos_totales, color='blue')

    # Ya que los nombres de las aerolineas son muy largos, se define
    # un tamano de letra pequena y una rotacion de 90 grados para
    # las etiquetas del eje X.
    plt.xticks(fontsize=6, rotation=90)
    plt.xlabel('Aerolineas')
    # Se elige que aparezcan valores entre 0 y 7000
    # en el eje y con una division de cada 1000,
    # esto para que haya un mayor margen de datos
    # en la grafica
    plt.yticks(range(0, 7000, 1000), fontsize=6)
    plt.ylabel('Vuelos totales')
    # Se ajusta el tamano del cuadro de la grafica
    # esto para que no se corten datos
    plt.tight_layout(pad=3)

    # Se coloca un titulo a la grafica
    plt.title('Vuelos totales entre Enero y octubre del 2023')

    # Se comenta esta linea para que al momento de la revisión
    # no se guarden imagenes, este codigo fue utilizado para
    # almacenar los gráficos utilizados en el analisis
    # plt.savefig('grafico_1.png', dpi=300)

    # Se imprime el grafico en pantalla
    plt.show()

    # # # # # # # # # # # # # # # # # # # # # # # #
    # Cantidad de pasajeros entre Enero y Octubre #
    # # # # # # # # # # # # # # # # # # # # # # # #

    # Cantidad de pasajeros transportados por aerolinea
    plt.figure(figsize=(15, 5))
    print("\nCantidad de pasajeros que transporta "
          "cada aerolinea entre Enero y Octubre\n")
    for empresa_aerolinea, pasajeros_totales in objeto_datos.GeneradorPasajerosTotalesAerolinea():
        print(f"Empresa Aerolinea: {empresa_aerolinea}, "
              f"Numero de pasajeros totales: {pasajeros_totales}")
        # Cada vez que se itere el for, un par de datos sera
        # agrega al grafico de barras
        plt.bar(empresa_aerolinea, pasajeros_totales, color='red')

    # Ya que los nombres de las aerolineas son muy largos, se define
    # un tamano de letra pequena y una rotacion de 90 grados para
    # las etiquetas del eje X.
    plt.xticks(fontsize=6, rotation=90)
    plt.xlabel('Aerolineas')
    # Se define un rango de valores que permita dar una idea de
    # los valores tan grandes que estan en las variables
    plt.yticks(range(0, 30000000, 10000000), fontsize=6)
    plt.ylabel('Pasajeros totales')
    # Se ajusta el tamano del cuadro de la grafica
    # esto para que no se corten datos
    plt.tight_layout(pad=3)

    # Se coloca un titulo a la grafica
    plt.title('Pasajeros totales entre Enero y octubre del 2023')

    # Se comenta esta linea para que al momento de la revisión
    # no se guarden imagenes, este codigo fue utilizado para
    # almacenar los gráficos utilizados en el analisis
    # plt.savefig('grafico_2.png', dpi=300)

    # Se imprime el grafico, en pantalla
    plt.show()

    # # # # # # # # # # # # # # # # #
    # Modelo de avion mas utilizado #
    # # # # # # # # # # # # # # # # #

    # Se llama al metodo que devuelve una Serie, la cual posee los datos de
    # los modelos de aviones mas utilizados por cada aerolinea
    modelos_mas_utilizados = objeto_datos.ModeloDeAvionMasUtilizado()
    # Se imprimen los datos obtenidos
    print("\nA continuacion se observan los modelos de aviones mas "
          "utilizados por cada empresa\n")
    # Se utiliza el comando items() ya que al ser una Serie, esta
    # es parecida a un diccionario con clave y valor, asi se itera
    # sobre la serie y se obtienen los datos deseados
    for empresa_aerolinea_modelo, modelos_aviones in modelos_mas_utilizados.items():
        print(f"Empresa Aerolinea: {empresa_aerolinea_modelo}, "
              f"Modelo con el cual trabaja mas la aerolinea: {modelos_aviones}")

    # Se realiza un conteo de los modelos de avion mas utilizados por
    # las empresas, con el metodo countplot de seaborn, este imprimira
    # los modelos en el eje X y en el eje Y colocará cuantas empresas
    # tienen el modelo de avión como el más utilizado
    sns.countplot(x=modelos_mas_utilizados)
    plt.xticks(fontsize=6, rotation=90)
    plt.title('Modelos de aviones mas utilizados')
    plt.xlabel('Modelo de avion')
    plt.ylabel('Cantidad de empresas que lo utilizan')

    # Se comenta esta linea para que al momento de la revisión
    # no se guarden imagenes, este codigo fue utilizado para
    # almacenar los gráficos utilizados en el analisis
    # plt.savefig('grafico_3.png', dpi=300)

    # Se imprime el grafico, en pantalla
    plt.show()

    # # # # # # # # # # # # # # # # # # # # # # # # #
    # Aerolineas que mas vuelos realizaron por mes  #
    # # # # # # # # # # # # # # # # # # # # # # # # #

    # Se llama al metodo que devuelve un DataFrame con los datos de
    # las aerolineas mas utilizadas por mes con sus respectivas cantidades de
    # vuelos
    empresa_mas_utilizada_por_mes = objeto_datos.EmpresaQueRealizoMasVuelosPorMes()
    # Se imprimen los datos obtenidos acerca de las aerolinas mas utilizadas
    print("\nA continuacion se declaran las aerolineas mas "
          "utilizadas por mes\n")
    # Se va a iterar por cada fila del DataFrame
    # utilizando el metodo iterrows que devuelve esto,
    # un indice del DataFrame y la fila correspondiente
    for indice_df, fila_df in empresa_mas_utilizada_por_mes.iterrows():
        print(f"En el mes: {fila_df['MONTH']}, "
              f"La aerolinea mas utilizada fue: {fila_df['CARRIER_NAME']}, "
              f"Realizo {fila_df['VUELOS_AEROLINEA']} vuelos.")

    # Se crea un grafico de barras utilizandos Seaborn
    # para representar las empresas que mas vuelos realizaron
    # por meses y cuantos vuelos realizaron, para este caso se
    # se utiliza el DataFrame obtenido del metodo de clase
    # y se obtiene el numero de vuelos que se realizaron
    # por mes y estos se agrupan segun la empresa que realizo
    # los viajes
    plt.figure(figsize=(10, 5))
    sns.barplot(data=empresa_mas_utilizada_por_mes, x='MONTH',
                y='VUELOS_AEROLINEA', hue='CARRIER_NAME', palette='bright')
    plt.title('Aerolineas que realizaron mas vuelos por mes')
    plt.xlabel('Mes')
    plt.ylabel('Cantidad de vuelos realizados')
    plt.legend(title='Empresa')

    # Se comenta esta linea para que al momento de la revisión
    # no se guarden imagenes, este codigo fue utilizado para
    # almacenar los gráficos utilizados en el analisis
    # plt.savefig('grafico_4.png', dpi=300)

    # Se imprime el grafico, en pantalla
    plt.show()


# Esto se ejecuta cuando el script es llamado como funcion
# principal del sistema. Si este script fuera llamado desde
# otro modulo, este no se ejecuataria
if __name__ == "__main__":
    main()
