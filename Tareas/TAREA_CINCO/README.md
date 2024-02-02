# Teoría Tarea Tarea #5

## Iteradores

1. ¿Qué es un iterador en Python y cuál es su propósito?

Los iteradores en Python son métodos que iteran sobre conjuntos de datos, tales como listas, tuplas, entre otros. Como se indica anteriormente, el próposito de estos, es permitir recorrer un objeto y de esta manera tener acceso a los elementos de este objeto.

2. Explica la diferencia entre un iterable y un iterador.

Un iterable como tal, es un objeto de python que representa un conjunto de datos, tales como, diccionarios, listas, tuplas, entre otros, este es un objeto que puede ser iterado. Por otra parte, el iterador es otro objeto pero que este permite recorrer el iterable y acceder a los datos de este como se indicó en la pregunta 1.

## Excepciones

1. Define qué es una excepción en Python.

Una excepción en Python sucede cuando por algún motivo el ejecutable se ve interrumpido por un error, se busca que todas las posibles excepciones del código sean revisadas antes de que se ejecute el código, esto para manejar estas excepciones y de esta manera tener un programa robusto que no se caiga, si no que sepa manejar las excepciones de la mejor manera.

2. ¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones?

Estos dos bloques buscan manejar las posibles excepciones dentro del código. por lo que, dentro del bloque try, se define codigo que puede causar una excepcion, si la excepción sucede el programa saltara al bloque except, este bloque corre si sucede la excepcion, y puede realizar diferentes funciones como indicar el error y manejarlo.

3.  Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones.

Por un lado, el bloque except va a atrapar las excepciones que ocurren dentro del bloque try y buscará manejarlas, este bloque no actuará si en try no se encuentra una excepción.

Por otra parte, el bloque finally, siempre se llamará, suceda o no, una excepción en el bloque try, en este bloque pueden agregar comentarios extras al usuario, o realizar algun postprocesamiento para manejar el error. Como también se puede utilizar para liberar recursos si no sucede una excepción.

## Generadores

1. ¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales?

Un generador es una función que devuelve un objeto generador, el cual producirá una secuencia de valores cuando se repite su llamado. Estos generadores son útiles cuando se desea crear una secuencia de valores muy grande, pero se busca no almacenarlos todos en la memoria al mismo tiempo. La ventaja sobre las listas, es que las listas deben tener predefinidos los valores que están dentro de ellas, mientras que un generador ira generando los datos a manera que se solicite, por lo que, en términos del uso de memoria, los generadores son más eficientes.

2. Explica cómo se puede crear un generador usando la función yield.

El generador es una función especial, esta se define utilizando la palabra yield, cuando esta función es llamada el código no es ejecuta, si no que esta función lo que devuelve es el objeto generador mencionado en la pregunta anterior, luego de esto, lo que se hace es iterar sobre este objeto generador, solicitandole un siguiente valor, cuando se realiza esta iteración es cuando se ejecuta la función y cuando esta llega al comando yield devuelve un valor y la función se detiene hasta que vuelve a ser llamada por el objeto generador y devolverá el siguiente valor. Un ejemplo en código es el siguiente, donde el generador devolvera n cantidad de valores, que seran solicitados por el usuario:


```python
def my_generator(n):

    # Se define un contador inicial
    value = 0

    # Bucle que continuara mientras el contador sea menor
    # al argumento n recibido
    while value < n:
        yield value # yield produce un valor del generador y pausa la ejecucion de la 
                    # funcion del generador hasta que se solicite el siguiente valor

        #Se incrementa el contador en 1
        value += 1

# Cuando se llama al generador no se ejecuta el cuerpo de la funcion de inmediato.
# Sucede que se devuelve un objeto generador que se puede iterar para generar valores
# En este caso se itera sobre el objeto creado por el generador
for value in my_generator(3):
    # Se imprime el valor
    print(value)
```

3. ¿Cuándo es más apropiado usar generadores en lugar de listas?

El uso de generadores realiza un uso más eficiente de la memoria que las listas, al evitar almacenar todo el conjunto de datos al mismo tiempo, por lo que se busca utilizar generadores cuando se va a trabajar con cantidad muy grandes de datos, estos son apropiados de utilizar cuando se van a leer archivos muy grandes o cuando se va a trabajar con secuencias de datos muy grandes. 

## Pandas

1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?

Tanto las Series como los DataFrame son las estructuras de datos principales que se utilizan en Pandas, por un lado, una Serie es una estructura de datos unidimensional, una serie sería una columna en una tabla de datos, mientras que el Dataframe es una escructura bidimensional, la cual posee tanto filas como columnas, dicho esto, cada columna en un DataFrame sería una Serie.

2. Explica cómo manejar valores nulos o faltantes en un DataFrame.

Pandas posee diferentes métodos para manejar estos problemas, ya que son necesarios de tratar antes de realizar un análisis de datos para evitar problemas en este análisis, algunos de estos métodos son:

.isna(): Este método detecta valores nulos en un DataFrame. [1]
.dropna(): Este método elimina valores nulos de un DataFrama. [2]
.fillna(): Con este método se pueden cambiar los valores nulos encontrados por un valor en específico. [3]

Estos son algunas de las maneras de tratas valores nulos con Pandas, su uso dependerá del contexto sobre el cual se está trabajando.

3. ¿Cuál es la diferencia entre loc y iloc en Pandas?

Estos son métodos utilizados para acceder a los datos de un DataFrame de Pandas, cada uno accede a los datos de maneras diferentes. Por un lado el loc accede a los datos tanto de filas y/o columnas utilizando las etiquetas que posee el DataFrame, esto quiere decir los nombres de las filas y las columnas dentro del DataFrame. Mientras que iloc utiliza indices enteros, esto quiere decir que accede al dato por la posición númerica que posee el dato dentro del DataFrame [4]. Otra diferencia, es que loc recibe booleanos, para realizar una selección más especifica de datos, mientras que iloc no permite el uso de booleanos.

# Referencias bibliográficas

[1] GeeksforGeeks. (2018, Nov 19). Python | Pandas dataframe.isna(). [Online]. Obtenido de https://www.geeksforgeeks.org/python-pandas-dataframe-isna/. [Accedido Feb. 1, 2024]. 

[2] GeeksforGeeks. (2023, Mar 31). Pandas DataFrame.dropna() Method. [Online]. Obtenido de https://www.geeksforgeeks.org/python-pandas-dataframe-dropna/. [Accedido Feb. 1, 2024]. 

[3] GeeksforGeeks. (2023, Nov 30). Python | Pandas DataFrame.fillna() to replace Null values in dataframe. [Online]. Obtenido de https://www.geeksforgeeks.org/python-pandas-dataframe-fillna-to-replace-null-values-in-dataframe/. [Accedido Feb. 1, 2024]. 

[4] GeeksforGeeks. (2023, Dic 4). Difference between loc() and iloc() in Pandas DataFrame. [Online]. Obtenido de https://www.geeksforgeeks.org/difference-between-loc-and-iloc-in-pandas-dataframe. [Accedido Feb. 1, 2024].