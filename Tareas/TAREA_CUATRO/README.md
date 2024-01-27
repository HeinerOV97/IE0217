# Teoría Tarea #4

1. Explique la diferencia entre una lista y una tupla en Python.

Aunque las tuplas y las listas son similares tienen ciertas diferencias:

- Comúnmente las tuplas son utilizadas para en tipos de datos diferentes y las listas se utilizan para tipos de datos similares.

- Las tuplas son inmutables mientras que las listas son mutables, esto quiere decir que en la lista se pueden modificar, agregar o eliminar datos, mientras que en las tuplas no existe esta posibilidad. 

- Como las tuplas son inmutables iterar a través de una tupla es más rápido que al hacerlo con una tupla.

2. ¿Qué es la sobrecarga de operadores en Python y cómo se implementa?

La sobrecarga de operadores en Python sigue la misma idea que la sobrecarga de operadores en C++, a través de esta se busca dar comportamientos personalizados a los operadores cuando trabajen con objetos de una clase. En Python esta se implementa a través de métodos que indiquen el comportamiento deseado, estos métodos tendrán nombres clave para que el programa entienda lo que se busca, por ejemplo, para sobrecargar el operador "+", el método en la clase deme tener el nombre __add__.

3.  Explique el concepto de alcanzabilidad (scope) de una variable en Python.

Esto concepto se refiere a las secciones del código desde las cuales se puede acceder a una variable en Python. Las variables en Python pueden tener diferentes alcances, por ejemplo:

- Alcance local: Cuando una variable se define dentro de una función, esta sólo se podrá utilizar dentro de una función, cuando sea llamada fuera de la función esta no será reconocida.

- Alcance global: Cuando una variable es definida fuera de una función, cualquier sección del código podrá acceder a ella, podrá ser accedida tanto dentro como fuera de funciones y clases.

- Alcance en Closure: Cuando una variable es definida en una función exterior, esta podrá ser utilizada tanto por la función exterior como por la función interior, pero no desde fuera de estas funciones.

4. ¿Qué es un decorador en Python y cuál es su función principal?

Un decorador es ua patrón de diseño, este permite modificar el funcionamiento de una función envolviendola en otra función. Una función externa que es llama decorador, recibe como argumento a una función original y retorna una versión modificada de la función original.

5. ¿Cómo se gestionan las excepciones en Python? Proporcione ejemplos de uso de bloques try, except y finally

Las excepciones en Python pueden ser manejadas, en caso de que suceda un error al momento de correr un código se busca que este no cierre el programa, si no, se busca poder manejarlo, esto se realiza a través de palabras clave y bloques de código, como lo son try, except y finally.
Dentro del bloque try, se define codigo que puede causar una excepcion, si la excepción sucede el programa saltara al bloque except, este bloque corre si sucede una excepcion, y puede realizar diferentes funciones como indicar el error y manejarlo. Luego de estos dos bloques se puede utilizar un bloque finally en el cual se pueden agregar comentarios extras al usuario, o realizar algun postprocesamiento para manejar el error. 

Un ejemplo común de manejo de excepciones es la division entre cero:

'''

try:
    numerador = 10
    denominador = 0

    resultado = numerador/denominador

    print(resultado)

except ZeroDivisionError:
    print("Error: Denominador es 0.")

finally:
    print("Las divisiones entre cero se considera indefinida, por lo que no válida de realizar en este caso")

'''

6. ¿Qué son los generadores en Python y para qué se utilizan?

Un generador no es es más que una función que devuelve un iterador, este iteradorador producirá una secuencia de valores cuando se repite su llamado. Estos generadores son útiles cuando se desea crear una secuencia de valores muy grande, pero se busca no almacenarlos todos en la memoria al mismo tiempo, los generadores no utilizar la palabra return para devolver un valor, utilizan la palabra yield.

7. Explique la diferencia entre __init__ y __call__ en clases de Python.

- Por un lado el método __init__  se utiliza para inicializar un objeto, después de que este ya ha sido creado, con el se puede definir el estado inicial de un objeto que es creado.

- Mientras que el método __call__ permite que los objetos de una clase se comporten como funciones y a su vez puedan ser llamados como una función. [1]



## Referencias bibliográficas

[1] GeeksforGeeks. (2020, Feb 27). __call__ in Python. [Online]. Obtenido de https://www.geeksforgeeks.org/__call__-in-python/. [Accedido Ene. 27, 2024].