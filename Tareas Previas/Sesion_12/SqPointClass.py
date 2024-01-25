# Se define la clase
class SqPoint(Point):
    MAX_Inst = 4
    Inst_created = 0

    '''
    En new no se ha creado el objeto
    Se desea definir los cuatro puntos de un cuadrado, 
    por esto se realiza el if, si se superan los 
    objetos que se desean crear, se mostrara un ValueError (una excepcion)
    '''
    def __new__(cls, *args, **kwargs):
        if (cls.Inst_created >= cls.MAX_Inst):
            raise ValueError("Cannot create more objects")
        cls.Inst_created += 1
        return super().__new__(cls) # Se returna el objeto creado