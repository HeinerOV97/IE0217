# Práctica Tarea #4

## Ejecución del programa

Primero se debe indicar que para que el programa se ejecute, se debe estar ubicado en el directorio de la tarea, esto es decir, en el directorio TAREA_CUATRO, la tarea cuenta con un Makefile, que ejecutará el archivo principal que se encuentra en el directorio src, donde están todos los archivos fuente. Para ejecutar el programa en Windows, debe utilizar el comando mingw32-make, mientras que si se está en Linux se ejecuta el comando make.

Ahora, el programa iniciará en el menú principal el cuál tiene las siguientes opciones:

1. Ingresar puntuacion obtenida de su prueba de alergias: Al elegir esta opción, el usuario ingresará su puntuación de alergias y el programa devolverá un desglose de las alergias que padece el paciente.

2. Ingresar alergias que el paciente padece: Al elegir esta opción, al usuario se le desplegarán las siguientes opciones:

- 1. Posee solo el nombre de la alergia: El paciente ingresará solo el nombre de su alergia.
- 2. Posee solo el puntaje de la alergia: El paciente ingresará solo el puntaje de su alergia.
- 3. Posee tanto el nombre como el puntaje de la alergia: El paciente ingresará tanto el nombre como el puntaje de su alergia.
- 4. Presione esta opcion cuando termine de ingresar sus alergias: Está opción es para que el paciente salga de nuevo al menú principal luego de ingresar sus alergias.

3. Obtener puntaje de las alergias ingresadas: El paciente obtendrá un puntaje en base a las alergias que ingresó en el punto 2, un desglose de las alergias conocidas y las desconocidas, así como un porcentaje de alergias conocidas y otro porcentaje de alergias desconocidas.

4. Ingresar nueva alergia y puntaje: El usuario puede agregar alergias al sistema, con el fin de utilizarlas para los procesos de las opciones 1, 2 y 3.

5. Si desea acceder a la lista de alergias del sistema: Se desplega la lista de alergias que están en el sistema.

6. Si desea acceder a la informacion de una alergia en especifico: El usuario puede buscar la información de una alergia en especifico

## Parte #2 de la parte práctica

### Uso de timeit

Se realizan pruebas con el modulo Timeit de Python, las pruebas a realizar son las siguientes:

* Primeramente se corre el programa con la lista inicial de alergias y se corren las siguientes pruebas:

- Opción 1 del menú: Se ingresa el puntaje de 2047 para que el programa deba recorrer todo el diccionario y se obtiene un resultado en 4.80 s.

- Opción 2 del menú: Se agregan las alergias del usuario, se agrega un nombre de una alergia que está en el sistema, se agrega un puntaje que está en el sistema, se agrega una alergia con nombre y puntaje, se agrega una alergia que no está en el sistema y por último se agrega una puntuación que no está en el sistema, y se llama a la opción 3 que imprime esta información el puntaje y el porcentaje de alergias encontradas, el resultado obtenido es 32.65 s.

- Opción 4 del menú: Se ingresa una nueva alergia y se utiliza la opción 5, para observar que esta alergia si fue ingresada con éxito, el resultado de tiempo obtenido fue de 13.94 s.

- Opción 6 del menú: Se busca una alergia en específico del diccionario por su nombre, en este caso se ingresa el nombre de la última alergia del diccionario, para ver cuanto dura el sistema en recorrer el diccionario, el resultado de tiempo obtenido fue de 5.39 s.

* Ahora se realizan las mismas pruebas pero utilizando la lista proporcionada por el documento alergias.txt proporcionado con la tarea:

- Opción 1 del menú: Se ingresa el puntaje de 1 125 899 906 842 623 para que el programa deba recorrer todo el diccionario y se obtiene un resultado en 12.93 s.

- Opción 2 del menú: Se agregan las alergias del usuario, se agrega un nombre de una alergia que está en el sistema, se agrega un puntaje que está en el sistema, se agrega una alergia con nombre y puntaje, se agrega una alergia que no está en el sistema y por último se agrega una puntuación que no está en el sistema, y se llama a la opción 3 que imprime esta información el puntaje y el porcentaje de alergias encontradas, el resultado obtenido es 47.49 s

- Opción 4 del menú: Se ingresa una nueva alergia y se utiliza la opción 5, para observar que esta alergia si fue ingresada con éxito, el resultado de tiempo obtenido fue de 16.28 s.

- Opción 6 del menú: Se busca una alergia en específico del diccionario por su nombre, en este caso se ingresa el nombre de la última alergia del diccionario, para ver cuanto dura el sistema en recorrer el diccionario, el resultado de tiempo obtenido fue de 6.40.

Con los resultados obtenidos se observa una diferencia del tiempo de ejecución de los diferentes métodos de las clases del programa, si existe una diferencia cuando el programa debe recorrer toda la lista de alergias y esta lista es cada vez más grande como se observa en los resultados anteriores, aún así los cambios de tiempo no son muy grandes, por lo que se podría concluir que no se están produciendo cuellos de botella en el sistema, ya que los cambios al no ser tan grandes, pueden resultar del uso de una lista de datos más grande que el sistema debe recorrer, considerando que Python es un lenguaje interprete, por lo cual, va ejecutando línea por línea. No se considera la existencia de un cuello de botella, debido a que se realiza uso de herencia multinivel, por lo que el llamado entre clases no debería representar una carga para el sistema.

### Uso de cProfile

Por otra parte, se tiene el uso del modulo cProfile para realizar las pruebas de perfilado del codigo, primeramente se realizan las pruebas mencionadas anteriormente con la lista original de alergias y se obtienen los siguientes resultados:

'''
         193 function calls in 69.621 seconds

   Ordered by: standard name

        ncalls  tottime  percall  cumtime  percall filename:lineno(function)

           1    0.000    0.000   69.621   69.621 <string>:1(<module>)

           1    0.000    0.000    0.001    0.001 Alergia.py:108(imprimir_alergia_especifica)

           1    0.000    0.000    0.000    0.000 Alergia.py:124(agregar_alergia)

           1    0.000    0.000    0.000    0.000 Alergia.py:19(__init__)

           1    0.000    0.000    0.004    0.004 Alergia.py:96(imprimir_todas_alergias)

           1    0.000    0.000    0.000    0.000 EvaluacionEspecifica.py:18(__init__)

           1    0.000    0.000    0.000    0.000 EvaluacionEspecifica.py:30(evaluar_alergias)

           1    0.000    0.000    0.004    0.004 EvaluacionEspecifica.py:62(imprimir_evaluacion)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:21(__init__)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:28(calcular_puntuacion_general)

           3    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:33(<genexpr>)

           1    0.000    0.000    0.002    0.002 EvaluacionGeneral.py:36(imprimir_alergias_paciente)

           1    0.000    0.000    0.001    0.001 EvaluacionGeneral.py:59(calcular_promedio)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:67(<listcomp>)

           1    0.000    0.000   69.621   69.621 PruebaProfile.py:6(run_menu)

           1    0.000    0.000    0.000    0.000 TiposDeAlergias.py:21(__init__)

           5    0.000    0.000    0.000    0.000 TiposDeAlergias.py:35(alergia_del_paciente)

           4    0.000    0.000    0.000    0.000 TiposDeAlergias.py:67(revision_datos_incompletos)

           1    0.000    0.000   69.621   69.621 menu.py:12(main)

           1    0.000    0.000   69.621   69.621 {built-in method builtins.exec}

          23   69.592    3.026   69.592    3.026 {built-in method builtins.input}

           3    0.000    0.000    0.000    0.000 {built-in method builtins.len}

          96    0.028    0.000    0.028    0.000 {built-in method builtins.print}

           1    0.000    0.000    0.000    0.000 {built-in method builtins.sum}

           4    0.000    0.000    0.000    0.000 {method 'append' of 'list' objects}

           8    0.000    0.000    0.000    0.000 {method 'copy' of 'list' objects}

           1    0.000    0.000    0.000    0.000 {method 'disable' of '_lsprof.Profiler' objects}

           6    0.000    0.000    0.000    0.000 {method 'items' of 'dict' objects}

           3    0.000    0.000    0.000    0.000 {method 'keys' of 'dict' objects}

           5    0.000    0.000    0.000    0.000 {method 'lower' of 'str' objects}

           2    0.000    0.000    0.000    0.000 {method 'remove' of 'list' objects}

           9    0.000    0.000    0.000    0.000 {method 'strip' of 'str' objects}

           3    0.000    0.000    0.000    0.000 {method 'values' of 'dict' objects}
'''

Con la lista de 50 alergias se tienen los siguientes resultados:

'''
         273 function calls in 98.875 seconds

   Ordered by: standard name

        ncalls  tottime  percall  cumtime  percall filename:lineno(function)

           1    0.000    0.000   98.875   98.875 <string>:1(<module>)

           1    0.000    0.000    0.001    0.001 Alergia.py:108(imprimir_alergia_especifica)

           1    0.000    0.000    0.000    0.000 Alergia.py:124(agregar_alergia)

           1    0.000    0.000    0.000    0.000 Alergia.py:19(__init__)

           1    0.000    0.000    0.008    0.008 Alergia.py:96(imprimir_todas_alergias)

           1    0.000    0.000    0.000    0.000 EvaluacionEspecifica.py:18(__init__)

           1    0.000    0.000    0.000    0.000 EvaluacionEspecifica.py:30(evaluar_alergias)

           1    0.000    0.000    0.009    0.009 EvaluacionEspecifica.py:62(imprimir_evaluacion)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:21(__init__)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:28(calcular_puntuacion_general)

           4    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:33(<genexpr>)

           1    0.000    0.000    0.002    0.002 EvaluacionGeneral.py:36(imprimir_alergias_paciente)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:59(calcular_promedio)

           1    0.000    0.000    0.000    0.000 EvaluacionGeneral.py:67(<listcomp>)

           1    0.000    0.000   98.875   98.875 PruebaProfile.py:6(run_menu)

           1    0.000    0.000    0.000    0.000 TiposDeAlergias.py:21(__init__)

           5    0.000    0.000    0.000    0.000 TiposDeAlergias.py:35(alergia_del_paciente)

           4    0.000    0.000    0.000    0.000 TiposDeAlergias.py:67(revision_datos_incompletos)

           1    0.000    0.000   98.875   98.875 menu.py:12(main)

           1    0.000    0.000   98.875   98.875 {built-in method builtins.exec}

          23   98.841    4.297   98.841    4.297 {built-in method builtins.input}

           3    0.000    0.000    0.000    0.000 {built-in method builtins.len}

         175    0.033    0.000    0.033    0.000 {built-in method builtins.print}

           1    0.000    0.000    0.000    0.000 {built-in method builtins.sum}

           4    0.000    0.000    0.000    0.000 {method 'append' of 'list' objects}

           8    0.000    0.000    0.000    0.000 {method 'copy' of 'list' objects}

           1    0.000    0.000    0.000    0.000 {method 'disable' of '_lsprof.Profiler' objects}

           6    0.000    0.000    0.000    0.000 {method 'items' of 'dict' objects}

           3    0.000    0.000    0.000    0.000 {method 'keys' of 'dict' objects}

           5    0.000    0.000    0.000    0.000 {method 'lower' of 'str' objects}

           2    0.000    0.000    0.000    0.000 {method 'remove' of 'list' objects}

           9    0.000    0.000    0.000    0.000 {method 'strip' of 'str' objects}

           3    0.000    0.000    0.000    0.000 {method 'values' of 'dict' objects}

'''

Primero se debe aclarar que el script llamado PruebaProfile.py, contiene un pequeño conjunto de comandos para hacer uso del método cProfile. Dejando esto en claro podemos observar la siguiente:

- El tiempo total de ejecución del programa en ambos casos se da en el menú, esto es así, porque desde este punto se llaman a todas las clases.

- No existe diferencia en los tiempos de ejecución de los métodos que no imprimen listas de datos cuando la lista de revisión aumenta.

- Los métodos que aumentan sus tiempos, son los métodos que imprimen listas de datos, y esto es así porque las listas aumentaron su tamaño, teniendo esto sentido, ya que en las revisiones de impresion se busco que el sistema tuviera que revisar la mayor cantidad de datos posible de la lista, pasando en algunas casos de tener que imprimir 11 datos, a tener que imprimir 50 datos.

- Los métodos que sufrieron un aumento del tiempo de ejecuación fueron: imprimir_todas_alergias(), método que imprime toda la lista de alergias por defecto que tiene el sistema, con una lista de 11 datos su tiempo de ejecución fue 0.004s mientras que con una lista de 50 datos su tiempo de ejecución fue 0.008s. El método imprimir_evaluacion() imprime el desglose de alergias que tiene la persona a partir de un puntaje dado, en este caso se busco que el sistema tuviera que imprimir todas las alergias posibles, colocando un puntaje que obligara al sistema a imprimir todas las alergias, con una lista de 11 datos su tiempo de ejecución fue 0.004s mientras que con una lista de 50 datos su tiempo de ejecución fue 0.009s.

- Los comandos input y print fueron los más utilizados en el programa y consumieron más tiempo de ejecución del programa también, esto tiene sentido, ya que el programa es interactivo con el usuario, por lo que, la entrada e impresión de datos es constante. Estos también sufrieron un aumento al aumentar la lista de alergias, lo cual tiene sentido ya que hay más datos con los cuales trabajar.

- Por último, los métodos que consumieron más tiempo en la ejecución del programa fueron, tal y como se comentó anteriormente, los métodos imprimir_todas_alergias() e imprimir_evaluacion(), así como el método imprimir_alergias_paciente(), que no fue mencionado anteriormente, ya que este no sufrió cambios al aumentar la lista.

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

8. ¿Cómo se organizan los módulos y paquetes en Python? ¿Qué es __init__.py?

Los módulos de Python son archivos de Python que poseen la extensión .py, estos implementan conjuntos de funciones. Un módulo puede ser importado por otro módulo. Las variables dentro de un módulo son inicializadas solo una vez, esto quiere decir que un módulo que sea inicializado por un script de Python sólo lo hará una vez en todo el proceso de ejecución. [2]

Los paquetes son directorios que contienen múltiples paquetes y módulos múltiples.

Los paquetes de Python deben contener un archivo especial que es llamado __init__.py, el cual es un archivo que puede estar vacío, pero indica que los contenidos de un directorio son un paquete de Python, así estos pueden ser importados como cuando se importa un módulo.[2]

9. Explique la diferencia entre métodos append() y extend() en listas de Python.

Con el método append() se puede agregar un sólo elemento al final de una lista, por ejemplo si el método append se utiliza pasando como argumento una lista lo que se agregará en la lista original será la lista enviada como un solo elemento. Por ejemplo:

'''
lista = [1, 2, 3]
lista.append([4, 5])
\# La lista quedará de la siguiente manera: [1, 2, 3, [4, 5]]
'''

Por otra parte el método extend() se utiliza para agregar múltiples elementos en el final de una lista, en este caso si se pasa como argumento una lista en el método extend, lo que se agregará al final de la lista original, serán los elementos de la lista enviada uno por uno. Por ejemplo: 

'''
lista = [1, 2, 3]
lista.extend([4, 5])
\# La lista quedará de la siguiente manera: [1, 2, 3, 4, 5]
'''

10. ¿Cuál es la diferencia entre un método de clase y un método estático en Python?

Un método de clase, recibe como argumento a la clase misma, esto permite que este método pueda acceder y modificar los atributos de una clase, esto quiere decir que este método modifica la clase como tal, no a un objeto instanciado. Estos métodos se definen utilizando el decorador @classmethod. [3]

Por otra parte, los métodos estáticos no reciben argumentos de la clase, por lo que no pueden acceder ni modificar los atributos de la clase o del objeto, estos son utilizados para agregar métodos a la clase, pero que no utilicen los atributos de la clase o del objeto. Estos métodos se definen utilizando el decorador @staticmethod. [3]

11. Hable sobre las diferencias entre herencia simple y herencia múltiple en Python.

Con la herencia simple, una clase hereda los atributos y métodos de una clase base, mientras que en herencia múltiple una clase derivada hereda los atributos de múltiples clases base.

12. ¿Cómo se manejan los errores de importación de módulos en Python?

Estos se pueden manejar haciendo uso de excepciones y los bloques try and except, y utilizando la excepción por defecto que tiene Python ImportError, que indica que un módulo que se estaba buscando para importar no pudo ser encontrado.

Otra forma es utilizando la biblioteca imporlib y el método importlib.util.find_spec(), este puede hacer la revisión y darse cuenta si el módulo que se desea importar está disponible en el sistema o no. [4]

13. ¿Cuál es la diferencia entre una clase y un objeto en Python?

La clase es el modelo de un objeto, esta va a definir las características que va a poseer el objeto, tales como atributos y métodos. Por otra parte, el objeto es una instancia de la clase, es decir, es una entidad creada a partir de las caracterísiicas que la clase definió que iba a poseer, en este caso el objeto va a poseer atributos y métodos.

14. Hable sobre la diferencia entre una clase abstracta y una interfaz en Python.

Una clase abstracta, es una plantilla creada para otras clases, como tal, no se van a crear instancias de la clase abstracta, esta sólo va a heredar a sus clases hijas, métodos abstractos y los métodos concretos, siendo un método abstracto, métodos que van a ser implementados por las clases hijas, pero que no están definidos en la clase abstracta, estos se definen con el decorador @abstracmethod. Y un método concreto, que son métodos ya definidos en la clase padre para que sean utilizados por la clases hija. Estas clases se definen utilizando el módulo abc. [5]

Por otra parte, una interfez es similar a una clase abstracta, pero en este caso una interfaz solo va a definir métodos abstractos que van a utilizar las clases hijas. [5]

15. Explique el concepto de sobreescritura de métodos en Python y cómo se realiza.

La sobreescritura de métodos se trata de la posibilidad que tiene una clase hija de sobreescribir un método definido por la clase padre para aplicar una definición propia de la clase hija. Esto se realiza creando en la clase hija un método con el mismo nombre y parámetros que el método de la clase padre, por lo que, cuando se instancie un objeto de la clase hija y se utilice el método, se hará uso de la definición del método de la clase hija, no de la clase padre. 

## Referencias bibliográficas

[1] GeeksforGeeks. (2020, Feb 27). __call__ in Python. [Online]. Obtenido de https://www.geeksforgeeks.org/__call__-in-python/. [Accedido Ene. 27, 2024].

[2] Learnpython. (s.f.). Modules and Packages. [Online]. Obtenido de https://www.learnpython.org/es/Modules%20and%20Packages. [Accedido Ene. 27, 2024].

[3] GeeksforGeeks. (2022, Dic 30). Class method vs Static method in Python. [Online]. Obtenido de https://www.geeksforgeeks.org/class-method-vs-static-method-python/. [Accedido Ene. 27, 2024].

[4] Python docs. (s.f.). importlib — The implementation of import. [Online]. Obtenido de https://docs.python.org/3/library/importlib.html. [Accedido Ene. 27, 2024].

[5] GeeksforGeeks. (2023, Feb 5). Difference between abstract class and interface in Python. [Online]. Obtenido de https://www.geeksforgeeks.org/difference-between-abstract-class-and-interface-in-python/. [Accedido Ene. 27, 2024].