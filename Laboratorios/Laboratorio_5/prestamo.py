import pandas as pd
import numpy as np
import matplotlib.pyplot as plt


class Prestamo:
    def __init__(self, monto_prestamo, tasa_interes_anual, cuotas):
        # Atributos que tendra la clase y metodo calcular amortizacion
        self.monto_prestamo = monto_prestamo
        self.tasa_interes_anual = tasa_interes_anual
        self.cuotas = cuotas
        self.amortizacion = self.calcular_amortizacion()

    def calcular_amortizacion(self):
        # Se verifica que no hayas excepciones
        try:
            # Calculo de la tasa de interes mensual
            tasa_interes_mensual = self.tasa_interes_anual / 12 / 100
            # Calculo de la cuota mensual
            cuota_mensual = (tasa_interes_mensual * self.monto_prestamo) / (1 - (1 + tasa_interes_mensual)**-self.cuotas)
            # Saldo restado
            saldo_restante = self.monto_prestamo
            # Lista que almacenara las cuotas
            amortizacion = []

            for cuota in range(1, self.cuotas + 1):
                # Se calcula el interes pendiente del usuario
                interes_pendiente = saldo_restante * tasa_interes_mensual
                # Se calcula la amortizacion sobre el principal
                amortizacion_principal = cuota_mensual - interes_pendiente
                # Se recalcula el sado restante
                saldo_restante -= amortizacion_principal
                # Se agrega a la lista amoetizacion la
                # lista de datos del prestamo
                amortizacion.append({'Cuota': cuota, 'Interes': interes_pendiente, 'Amortizacion': amortizacion_principal, 'Saldo Restante': saldo_restante})
            return amortizacion

        # En caso de error se levanta la excepcion
        except ZeroDivisionError:
            print("Error: La cantidad de cuotas no puede ser cero.")
            # Se retorna una lista vacia a la variable amortizacion
            return []

    # Se va a generar un reporte de lo hecho
    def generar_reporte(self, archivo_salida):
        try:
            # Se crea un DataFrame con los datos en amortizacion
            df = pd.DataFrame(self.amortizacion)
            df.to_csv(archivo_salida, index=False)
            print(f'Reporte generado con exito: {archivo_salida}')
            # Si sucede un error se levanta la excepcion
        except Exception as e:
            print(f'Ocurrio un error al generar el reporte: {str(e)}')

    # Se grafica la excepcion
    def graficar_amortizacion(self):
        # Se crea de nuevo un DataFrame con los datos de amortizacion
        df = pd.DataFrame(self.amortizacion)

        # Se crea un arreglo con los datos del DataFrame
        # creado interes y amortizacion
        data = np.array([df['Interes'], df['Amortizacion']])

        # Se imprimen dos graficos de barrar para comparar el dinero a capital
        # y el dinero destinado a cuotas
        plt.bar(df['Cuota'], data[0], label='Interes')
        plt.bar(df['Cuota'], data[1], bottom=data[0], label='Amortizacion')

        # Se personaliza la grafica con nombres en los ejes
        # Titulo y leyendas
        plt.xlabel('Numero de cuota')
        plt.ylabel('Monto ($)')
        plt.title('Amortizacion e Interes por Cuota')
        plt.legend()
        plt.show()


# Se revisa si el valor ingresado es un valor negativo
def numero_negativo(valor):
    if valor < 0:
        raise ValueError("No se deben ingresar numeros negativos")


def main():

    # Se comprueban errores dentro de la solicitud de datos
    try:

        # Se solicita al la informacion del prestamo que se desea adquirir
        # Pedir el monto al usuario
        # Se verifica si es un numero negativo
        monto = float(input("Ingrese el monto que desea pedir en credito: "))
        numero_negativo(monto)

        # Pedir la tasa de interes anual (%)
        # Se verifica si es un numero negativo
        interes = float(input("Ingrese la tasa de interes anual: "))
        numero_negativo(interes)

        # Pedir cantidad de cuotas
        # Se verifica si es un numero negativo
        cuotas = int(input("Ingrese las cuotas a pagar: "))
        numero_negativo(cuotas)

        # Instancia el prestamo con los atributos necesarios
        prestamo_solicitado = Prestamo(monto, interes, cuotas)

        # Se Genera el reporte que posee las cuotas
        prestamo_solicitado.generar_reporte("cuotas")

        # Imprimir informacion, monto, tasa, cuotas
        print("El monto solicitado es:", prestamo_solicitado.monto_prestamo,
              "\nLa tasa de interes es:",
              prestamo_solicitado.tasa_interes_anual, "%"
              "\nEl numero de cuotas a pagar son:", prestamo_solicitado.cuotas)

        # Graficar la amortizacion
        prestamo_solicitado.graficar_amortizacion()

        # manejo de excepciones ValueError y generico
    except ValueError as error:
        print(error)


if __name__ == '__main__':
    main()
