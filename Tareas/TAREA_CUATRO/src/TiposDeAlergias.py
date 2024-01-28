from EvaluacionEspecifica import EvaluacionEspecifica


class TiposDeAlergias(EvaluacionEspecifica):
    '''
    Se crea la clse TiposDeAlergias
    esta se encarga de recibir las
    alergias del paciente, crear una
    lista con las alergias que padece, asi
    como encontrar las alergias y puntajes
    que no estan en el sistema
    '''
    def __init__(self):
        # Se llama al inicializador de la clase alergia
        # Esto para tener acceso a los atributos de la clase
        # Alergia
        super().__init__()
        '''
        Lista que almacenara los nombres de las
        alergias que no estan presentes en el sistema
        '''
        self.solo_alergias = []
        '''
        Lista que almacenara los puntajes de las
        alergias que no estan presentes en el sistema
        '''
        self.solo_puntaje = []
        self.alergias_paciente = {}

    def alergia_del_paciente(self, nombre=None, puntaje=None):
        '''
        Metodo que permitira obtener datos del usuario,
        si el usuario agrega una alergia y esta no esta
        presente en el lista, creara una lista nueva
        con estos datos, hara lo mismo si se ingresan puntajes
        que no estan presentes en el sistema
        '''

        # Se verifica si el usuario no ingreso ningun dato, ni alergia ni valor
        # De ser asi esto se le indica al usuario
        if nombre is None and puntaje is None:
            print("Para que el sistema funcione debe recibir un dato.")
            return
        '''
        Se verifica si el usuario ingresa dos datos validos al llamar al
        metodo de der asi los ingresa en la lista nueva de alergias detectadas
        '''
        if nombre is not None and puntaje is not None:
            self.alergias_paciente[nombre] = puntaje
        # Si solo ingresa el nombre de la alergia se agrega en una lista
        # que solo guarda nombres de las alergias
        elif nombre is not None:
            self.solo_alergias.append(nombre)
        # Si solo ingresa el puntaje de la alergia se agrega en una lista
        # que solo guarda nombres de las alergias
        elif puntaje is not None:
            self.solo_puntaje.append(puntaje)

    def revision_datos_incompletos(self):
        '''
        Metodo que hara las relaciones con valores sueltos que de el usuario
        por ejemplo, si el usuario escribe huevos, el automaticamente lo
        relacionara con el puntaje 1.
        '''

        '''
        Primero se crea una copia de las listas de puntajes y alergias
        sin pareja que agrega el usuario, se realiza así porque
        al quitar elementos de la lista luego, si se trabajara con el
        original existe un conflicto y se brinca valores de la lista
        '''
        copia_solo_puntaje = self.solo_puntaje.copy()
        copia_solo_alergias = self.solo_alergias.copy()

        # Se itera sobre los valores que estan en la lista solo puntaje
        for valor in copia_solo_puntaje:
            '''
            Se verifica si el valor que se esta revisando esta como un
            valor del diccionario de alergias del sistema
            '''
            if valor in self.alergias.values():
                '''
                Si el valor si esta, se itera sobre el diccionario de alergias
                esto para tener acceso a la clave y el valor del diccionario
                '''
                for nombre_alergia, valor_alergia in self.alergias.items():
                    '''
                    Cuando se encuentre el valor, este se agrega junto con la
                    su clave al nuevo diccionario que almacena las alergias
                    del paciente y elimina el valor de la lista que tiene
                    puntajes sin clave.
                    '''
                    if valor == valor_alergia:
                        self.alergias_paciente[nombre_alergia] = valor
                        self.solo_puntaje.remove(valor)
                        break

        # Se itera sobre los valores que estan en la lista solo alergias
        for nombre in copia_solo_alergias:
            '''
            Se verifica si el nombre de la alergia que se esta revisando
            esta como una clave del diccionario de alergias del sistema.
            Si la clave esta presente, se agrega al diccionario nuevo
            la clave, esta por si sola incorpora el valor de la clave
            por si solo
            '''
            if nombre in self.alergias.keys():
                self.alergias_paciente[nombre] = self.alergias[nombre]
                self.solo_alergias.remove(nombre)
