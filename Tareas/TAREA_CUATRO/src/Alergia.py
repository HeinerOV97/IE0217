'''
Se crea la clase Alergia que contiene
las alergias que estaran por defecto en
el sistema para probar
'''


class Alergia:
    # En el inicializador se crea un diccionario
    # que almacene los datos por defecto del
    # del sistema
    def __init__(self):
        self.alergias = {
            "huevos": 1,
            "cacahuetes": 2,
            "mariscos": 4,
            "fresas": 8,
            "tomates": 16,
            "chocolate": 32,
            "polen": 64,
            "gatos": 128,
            "sardina": 256,
            "gluten": 512,
            "huevo": 1024
        }

    '''
    Se crea un metodo que va a iterar por el diccionario
    y va a mostrar en pantalla los elementos que se
    encuentran en el diccionario, es decir la alergia
    y su puntuación
    '''
    def imprimir_todas_alergias(self):
        print("Lista de alergias:")
        # Iteracion sobre cada elemento del diccionario
        for alergia, valor in self.alergias.items():
            print(f"{alergia}: {valor}")

    '''
    Se crea un metodo que va a recibir el nombre de la alergia
    y va a imprimir su informacion
    '''
    def imprimir_alergia_especifica(self, nombre_alergia):
        # Se comprueba si la alergia existe en la lista
        # si existe se imprime
        if nombre_alergia in self.alergias:
            print("Informacion de la alergia solicitada")
            print(f"{nombre_alergia}: {self.alergias[nombre_alergia]}")
        # Si no existe se indica al usuario
        else:
            print("La alergia no existe en nuestra lista.")

    '''
    Se crea un metodo que permita al usuario ingresar una nueva alergia
    en la lista predeterminadad
    '''
    def agregar_alergia(self, nombre, puntaje):
        self.alergias[nombre] = puntaje