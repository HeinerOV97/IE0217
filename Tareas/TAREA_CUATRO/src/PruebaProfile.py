# Modulo cProfile para comprobar el tiempo de ejecucion
# de todo el programa
import cProfile
# Se importa el archivo menu que controla todo el programa
import menu


def run_menu():
    '''
    Función para llamar a la función main del archivo menu
    '''
    menu.main()


# Se llama al método run() de cProfile pasándole como
# argumento la funcion menu()
cProfile.run('run_menu()')