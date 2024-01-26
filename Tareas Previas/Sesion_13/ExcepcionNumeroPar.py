try:
    num = int(input("Enter a number: "))
    '''
    Todo lo que se encuentre luego de la palabra assert tiene que ser verdadero
    Para cumplir que no haya error, en este caso se revisa que
    el numero ingresado con print sea un numero par
    '''
    assert num % 2 == 0

# Si no es un numero par salta al except y lo indica al usuario
except:
    print("Not an even number!")


# Si no hay excepcion, salta al else y realiza
# el codigo que esta en este bloque
# En este caso, dentro del else podria haber un error
# si el numero ingresado es 0, en el try pasara la prueba
# pero en el else fallara, ya que se intentara hacer una
# divion entre 0 sin colocar una excepcion
else:
    reciprocal = 1/num
    print(reciprocal)