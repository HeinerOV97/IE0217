# Practica Tarea #5

## Ejecución de los códigos

En la carpeta src donde se encuentra el paquete cars_anaylisis se adjunta también un Makefile, este ayuda a que se pueda correr el script main.py, para poder correr este script se debe estar ubicado en la carpeta src, luego de esto se debe utilizar el comando *mingw32-make* si se está en Windows, con esto se correra el archivo main.py, el cual estará encargado de realizar el llamado a los modulos creados en el paquete cars_analysis junto con el archivo main.py que se encuentra en el mismo paquete. El programa comenzará a imprimir las gráficas de las regresiones y de los clustering. Junto con cada regresión también se imprimen sus datos para la evaluación del modelo respectivo.

Antes de que se imprima cada gráfica en la terminal aparecerá un texto indicando que información es la que se está graficando y los datos de evaluación.

Para la obtención de los datos desde la página de Kaggle se utilizó un url proporcionado por el archivo "metadata.json" que se podía obtener en el link que fue proporcionado para la tarea, a continuación se muestra una captura de pantalla de la página y se indica con amarillo de donde se obtuvo el archivo que poseía el link utilizado.

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/pagina.PNG"></a>

## Análisis de datos

### Regresiones

Para la primer sección de la parte práctica se solicitó hacer regresiones mostrando como se comporta una variable dependiente con respecto a una indipendiente, primero se realiza una regresión lineal utilizando dos variables y luego de esto se utilizan las mismas variables pero se realiza una regresión no lineal, para comparar los modelos de ajuste en ambas regresiones.

#### Precio de los automóviles vs. Año de fabricación

Primeramente se observa el comportamiento del precio de los automóviles comparandolo con el año de su fabricación. Primero de hablará de los modelos creados con las regresiones, luego se colocaran los resultados de evaluación de ambas regresiones y luego se analizaran los datos obtenidos.

1. Gráfica de Precio vs. Año utilizando regresión lineal

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_1.png"></a>

Como se puede observar en la gráfica anterior, el utilizar una regresión lineal para realizar una predicción de como puede variar el precio de los automóviles con respecto a su año de fabricación no ofrece un modelo del todo adecuado, ya que si se observamos la pendiente azul que representa el modelo y que fue realizado con una muestra del 80% de los datos está no coindice con el comportamiento del otro 20% de los datos que fue utilizado como prueba.

A parte de las gráficas se obtuvieron los siguientes resultados al evaluar la regresión:

Error cuadrático medio (MSE): 267737137875.10327

Como podemos ver el valor del MSE es muy alto, esto viene siendo un indicativo de que el modelo realizado para el conjunto de datos no es apropiado, como se mencionó anteriormente en el análisis del gráfico.

Error absoludio medio (MAE): 236626.94069403742

El valor del MAE nos indica la lejanía existente entre los valores en las predicciones del modelo y los valores reales, este valor nos indica que la predicción del modelo no es representativa al referirse al comportamiento de los precios de los autos con respecto a su año de fabricación. 

Coeficiente de determinacion (R2): 0.16886241633651733

Al igual que los datos anteriores, el valor de R2 entre más cercano sea a 1, indica que el modelo se ajusta mejor a los datos, por lo tanto el valor que tenemos, nos indica que, el modelo no representa correctamente como varían los datos.

2. Gráfica de Precio vs. Año utilizando regresión no lineal

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_3.png"></a>

La gráfica anterior donde se utiliza regresión no lineal y se crea un modelo de grado 2 a partir del 80% de los datos representa un poco mejor el comportamiento del precio de los automóviles con respecto a su año de fabricación, ya que como podemos observa la curva generada tiende a seguir de una mejor manera el comportamiento del 20% de los datos utilizados como prueba.

Para esta prueba también se obtienen los datos de evaluación del modelo:

Error cuadrático medio (MSE): 262286222685.91968

Error absoludio medio (MAE): 224620.38822891717   

Coeficiente de determinacion (R2): 0.18578371651567294

Podemos observar que los datos de evaluación mejoraron levemente utilizando una regresión no lineal, pero estos siguen siendo indicativos que el modelo realizado para el conjunto de datos no representa bien el conjunto de datos, aunque este mejoró levemente no es la mejor opción. Se indica que se realizaron diferentes pruebas aumentando el grado del modelo pero esto no provocó mayor cambio en los resultados.

3. Datos obtenidos

Si bien los modelos no predicen totalmente los datos, esto es normal, se puede deber a la densidad de datos, donde existen autos de todos muchos precios diferentes pero que poseen el mismo año de fabricación, con respecto a los datos en el gráfico de dispersión estos no siguen una tendencia completamente lineal, ya que los aumentos de precio no son constantes en cada año si no que estos sufrieron aumentos en secciones de 5 a 10 años aproximadamente, lo cuál tiene sentido, ya que, aunque normalmente el año de fabricación del automóvil si representa una afectación en su precio, no es una característica totalmente determinante, si se analizan diferentes automóviles como en este conjunto de datos, se puede esperar que haya características de más peso para aumentar el precio del auto como el modelo, es normal ver autos del año 2010 con precios mayores a autos del 2020 por ejemplo, y esto debido a su marca o modelo.

#### Precio de los automóviles vs. Kilometraje

Ahora se procede a observar el comportamiento del precio de los automóviles comparandolo con su kilometraje. Al igual que en el caso anterior primero de hablará de los modelos creados con las regresiones, luego se colocaran los resultados de evaluación de ambas regresiones y luego se analizaran los datos obtenidos.

1. Gráfica de Precio vs. Kilometraje utilizando regresión lineal

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_9.png"></a>

A partir de lo obtenido con la gráfica anterior el utilizar una regresión lineal para realizar la predicción del comportamiento el precio de los automóviles dependiendo de su kilometraje no ofrece un modelo realmente adecuado, la pendiente roja que representa el modelo y que fue realizado con una muestra del 80% de los datos, no coindice con el comportamiento del otro 20% de los datos que fue utilizado como prueba.

A partir de las métricas de evaluación de los equipos se tiene lo siguiente:

Error cuadrático medio (MSE): 307988220482.47314

Error absoludio medio (MAE): 292401.46063219226

Coeficiente de determinacion (R2): 0.043910802213658284

Como se mencionó en los casos anteriores, estos resultados no son buenos indicativos sobre el modelo utilizado, ya que, el MSE con un valor tan alto nos puede indicar que el modelo utilizado no es el adecuado, ya que este nos indica que existen grandes errores en la predicción hecha con respecto a los valores reales. Por otra parte, el MAE indica que la variaciación entre los puntos de la predicción y los valores reales es alta. Finalmente, el R2 muestra que la variabilidad de la variable dependiente no se logra apreciar con el modelo, ya que el valor de R2 es muy lejano a 1. 

2. Gráfica de Precio vs. Kilometraje utilizando regresión no lineal

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_4.png"></a>

Utilizando regresión no lineal y creando un modelo de grado 2 a partir del 80% de los datos representa un poco mejor el comportamiento del precio de los automóviles con respecto a su kilometro, ya que como se logra observar la curva generada tiende a seguir de una mejor manera el comportamiento del 20% de los datos utilizados como prueba.

Para esta prueba también se obtienen los datos de evaluación del modelo:

Error cuadrático medio (MSE) en regresión no lineal: 303669170312.9427

Error absoludio medio (MAE) en regresión no lineal: 289585.5996081953

Coeficiente de determinacion (R2) en regresión no lineal: 0.057318448796103705

Al observar estos valores de las métricas de evaluación podemos observar una leve mejora con respecto a la regresión lineal de los datos, pero estos siguen siendo indicadores de que el modelo no se ajusta de la mejor manera a los datos, al realizar pruebas creando diferentes modelos con grados más altos las evaluaciones del modelo no mostraron una gran mejora.

3. Datos obtenidos

En este caso los modelos no logran predecir de la mejor manera los datos, esto puede deberse a la gran densidad de datos que se encuentran acumulados a la izquierda de la gráfica, por lo que la gran cantidad de datos provocan que haya automóviles con todo tipo de kilometrajes y no se vea con claridad el comportamiento de los datos a través del modelo, aún así en el gráfico de dispersión muestra una tendencia a la disminución del precio de los automóviles cuando el kilometraje aumenta, esto tiene sentido ya que el kilometraje de un automóvil representa su uso, entre más ha sido este utilizado, mayor es la cantidad de mantenimientos y posibles daños que este ha tenido, además podemos observar que los datos se acumulan a la izquierda de los 300000 km recorridos, esto es normal, ya que no es tan común ver automóviles que superen esta cantidad de kilometraje.

### Clustering

Ahora se procede a realizar dos clustering a partir de características de los automóviles.

#### Agrupamiento por año y kilometraje de los autos

Primeramente, se realiza el proceso para conocer cuál es la cantidad adecuada de clusters a declarar para realizar el clustering, para esto se utiliza el método del codo y se obtiene el siguiente gráfico:

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_5.png"></a>

A partir de este gráfico se observa donde está el codo, este se encuentra en k = 4 aproximadamente, por lo que se procede a colocar 4 clusters para realizar el agrupamiento con K-Means, el resultado de este agrupamiento se muestra en el siguiente gráfico:

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_6.png"></a>

En el gráfico anterior se puede observar como se realiza un agrupamiento de los datos en 4 grupos como se definió, donde la mayoría de datos son automóviles que poseen un kilometraje en 100000 y 200000 kilometros y son modelos mayormente del año 2005 al año 2017.

#### Agrupamiento por año y precio

Primeramente, se realiza el proceso para conocer cuál es la cantidad adecuada de clusters a declarar para realizar el clustering, para esto se utiliza el método del codo y se obtiene el siguiente gráfico:

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_7.png"></a>

A partir de este gráfico se observa donde está el codo, este se encuentra en k = 4 aproximadamente, por lo que se procede a colocar 4 clusters para realizar el agrupamiento con K-Means, el resultado de este agrupamiento se muestra en el siguiente gráfico:

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/Figure_8.png"></a>

En este gráfico se realiza el agrupamiento en los 4 grupos definidos para K-Means, en este caso se puede observar que la mayor acumulación de datos se da en automóviles que poseen precios entre los 500000 y los 1400000 (No se coloca moneda ya que no se especifica), y siendo estos en su mayoría modelos entre el 2009 y el 2020.

# Teoría Tarea #6

## Regresión 

1. ¿Qué es la regresión lineal y cómo se diferencia de la regresión no lineal?

En la regresión lineal es establecida una relación lineal entre una variable independiente y una variable dependiente. La relación entre estás variables se asume que sigue una línea recta. Por otra parte, en la regresión no lineal, igualmente se establece una relación entre una variable independiente y una variable independiente pero en este caso la relación no se asume como una linea recta, si no que se ajusta como una curva, esto logra capturar una relación más compleja entre las variables.

2. ¿Qué son los coeficientes de regresión y qué información proporcionan sobre la relación entre las variables?

Los coeficientes de regresión son los valores asociados a cada variable independiente, estos valores multiplican a la variable independiente, estos coeficientes indican la relación que habrá entre la variable dependiente y la variable independiente. Por ejemplo, si el coeficiente asociado a una variable independiente es positivo, este indica que habrá una relación positiva entre la variable dependiente y la variable independiente, pero si el coeficiente es negativo, la relación será negativa. Este es el caso sencillo, ya que si hay más de una variable independiente y estas se relacionan entre sí, provocarán que la relación entre las variables independientes y la variable dependiente varíe. [1]

3. ¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión de un modelo de regresión?

El MSE calcula el promedio de los errores cuadrados que hay entre las predicciones realizadas y los valores reales. Este otorga un peso que es significativo a los errores que son más grandes, su uso es especialmente útil cuando se desea resaltar las discrepancias existentes entre las predicciones realizadas y los valores reales.

4. ¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza cada una?

La diferencia entre los dos tipos de regresión radica entre la cantidad de variables independientes que se considera, mientras la regresión simple considera como se relacionan una variable dependiente con una variable independiente, la regresión múltiple, realiza la relación entre una variable dependiente y varias variables independiente, esto provoca que, la regresión simple sea utilizada cuando deseamos saber como se comporta una variable dependiente a partir de una variable independiente, y la regresión múltiple será utilizada cuando se desee conocer como se comporta una variable dependiente en función de varias variables independientes.

## Clustering

1. ¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos?

El clustering es una técnica de agrupamiento de datos, el objetivo de esto, es dividir los conjuntos de datos en diferentes grupos, a partir de la similitud que haya entre los elementos del conjunto. Esta técnica es ampliamente utiliza en diferentes sectores, uno de estos puede ser el marketing, donde se pueden realizar agrupaciones de potenciales clientes para realizar estrategias de marketing personalizadas.

2. Describa brevemente los algoritmos K-Means y DBSCAN y cómo funcionan.

El método K-Means es utilizado para dividir el conjunto de datos en k grupos, esto basado en la similitud de los datos, para realizar este algoritmo se siguen los siguientes pasos:

- Se establece un numero inicial de grupos (k) con su respectivo centroide.

- Luego cada dato es asignado al grupo cuyo centroide este más cerca.

- Luego de la asignación de los datos, los centroides se vuelven a recalcular como un promedio de todos los datos asignados a su grupo.

- Se realiza una repeticios de los pasos 1 y 2, hasta que ya no hayan cambios muy significativos en la asignación de datos a los grupos o cuando se alcanza un número de iteraciones declarado.

Por otra parte, el método DBSCAN realiza las agrupaciones basado en la densidad. En este método la cantidad de grupos no se especifíca, este método puede identificar grupos de diferentes formas y tamaños. Este método declara los grupos a partir de la densidad de los datos y no por la distancia. Posee tres puntos, puntos núcleos, estos son puntos que poseen un número mínimo de puntos en su vecindario. Los puntos de borde, son puntos que tienen una cantidad de vecinos menor al número mínimo pero se encuentran en el vecindario de un punto núcleo y por último están los puntos de ruido, estos puntos son los que no poseen las caracteríticas de un punto núcleo ni de un punto de borde.

DBSCAN trabaja con dos parámetros, épsilon, es el radio del vecindario que se encuentra alrededor de un punto y mínimo de puntos, se estable la cantidad mínima de puntos que son requeridos para formar un grupo.

3. ¿Qué es la inercia en el contexto del clustering y cómo se utiliza para evaluar la calidad de un agrupamiento?

Como tal, la inercia es la suma de las distancia al cuadrado que hay entre las muestras y el centroide del grupo más cercano [2], esta es utilizada en el método del codo, el cual permite conocer cual es el valor óptimo de k al realizar un agrupamiento, con el método del codo se busca graficar la inercia en función de la variable k, y se busca el codo en la curva, este es el punto donde la inercia deja de disminuir rápidamente, el valor de k que corresponde a ese punto será una buena elección para el agrupamiento a realizarse.

4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means?

El centroide es un punto que representa el centro de un grupo en K-means, como se explicó en el punto 2, cuando se define la cantidad de grupos en K-Means inicialmente se establece un centroide aleatorio para cada grupo, y se asignan puntos al grupo a partir de su cercanía al centroide, luego de esto el centroide será recalculado a partir del promedio de puntos asignados al grupo, y se asignarán puntos de nuevo a los grupos, estos pasos de asignar puntos y recalcular el centroide se repetirán hasta que no sucedan más cambios significativos en la asignación de datos a cada grupo.

5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.

Los datos estrucutrados poseen un formato predefinido y esperado. En este tipo de estructuras los campos son fijos por lo que hay una forma definida en que los datos son almacenados. Esto se puede ejemplificar con una compra en línea, ya que, cada compra dejará un registro definido, como el nombre del usuario, la información de pago y el artículo adquirido. [3]

Por otra parte, los datos no estructurados, no poseen una definición, estos no poseen campos fijos, por lo que, los campos pueden variar en formas y tamaños. Estos pueden verse en campos de texto abierto para llenar un formulario, como también son utilizados para almacenarse como objetos, tales como, audio, video, entre otros. [3]

## Paquetes de Python

1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo?

Por un lado los módulos de Python son archivos de Python que poseen la extensión .py, y estos se encargan de implementar un conjunto de funciones. Los módulos pueden ser importados por otros módulos. Es importante destacar que las variables dentro de un módulo son inicializadas solo una vez, esto quiere decir que un módulo que sea inicializado por un script de Python sólo lo hará una vez en todo el proceso de ejecución. [4]

Mientras que por otra parte, los paquetes de Python son directorios que contienen múltiples paquetes y módulos múltiples. [4]

2. ¿Cuál es la función del archivo __init__.py dentro de un paquete de Python?

El archivo __init__.py, es un archivo que puede estar vacío, este indica que el contenido que está dentro de un directorio es un paquete, lo que permite que este pueda ser importado como si de un módulo se tratáse. [4]

3. ¿Cómo se importa un módulo o función desde un paquete en Python?

Estos se importan como importamos los módulos que usualmente utilizamos en los diferentes proyectos, por ejemplo, si tenemos un paquete que se llama cars_analysis y este paquete tiene un módulo llamado regression.py, para llamar este módulo en otro archivo python podemos hacer lo siguiente:

```
# Primera opción
import cars_analysis.regression.py

# Segunda opción
from cars_analysis import regression.py

```

4. ¿Qué es la variable __all__ en el archivo __init__.py y cuál es su propósito?

Con la variable __all__ dentro del archivo __init__.py se puede definir que módulos del paquete se desea que puedan ser importados y cuales no, para esto la variable se puede declarar de la siguiente manera [4]:

```
__all__ = ["regression"]

```

De esta manera cuando algún script haga una importación del paquete cars_analysis sólo tendrá acceso al módulo regression, en caso de haber más módulos, estos se mantendrán de forma interna en el paquete [4].

5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?

Al organizar los códigos de python de esta manera se logra obtener un código modular, donde cada pequeño fragmento de código tendrá diferentes tareas que cumplir, se podrá realizar una reutilización de código más eficiente, y será un código escalable, donde a medida que el trabajo crezca, así podrá crecer la cantidad de módulos, para trabajar.

## Python HTTP y Servicios Web (API)

1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?

Una API es un conjunto de diferentes reglas y definiciones. La función de una API en el contexto de servicios Web es permitir que diferentes aplicaciones de software puedan comunicarse entre ellas a través de la Web. las Web API facilitan una interfaz interna que permite a las aplicaciones solicitar y compartir datos de una manera estandarizada entre ellas, en lugar de tener que interactuar directamente con bases de datos o con los componentes de otras aplicaciones. 

2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?

SOAP es un protocolo simple de acceso a objetos, esto permite la comuniación entre aplicaciones que han sido diseñadas en diferentes lenguajes, este impone reglas integradas, las cuales aumentan la complejidad y la sobrecarga, esto puede llegar a retrasar el tiempo que tardan las páginas en lograr cargarse, este estandariza la forma de proteger y transferir datos y controlar los errores.  El envío de una solicitud de datos a una API SOAP, puede ser administrado a través de cualquiera de los protocolos en la capa de aplicación tales como: HTTP, SMTP, TCP, entre otros. [5]

Por otra parte, las API REST, es un conjunto de diferentes reglas que permiten una implementación más flexible, estas son más ligeras, son ideales para contextos de trabajo más recientes, como lo es el IoT el desarrollo de aplicaciones móviles y la informática sin servidor. [5] 

El REST por un lado es un conjunto de principios arquitectónicos, mientras que el SOAP es un protocolo oficial. [5]

3. Describa los pasos básicos para consumir una API utilizando Python.

- Primeramente se realizan las solicitudes, estas se pueden realizar utilizando los métodos GET, POST, PUT o DELETE.

- Luego de esto se debe procesar la respuesta que se haya recibido a partir de la solicitud, esto para obtener la información que nos interése, esto en el caso de utilizar un método como GET.

- Luego de esto podemos manipular los datos recibidos, y realizar las acciones que deseemos con ellos. 

- Idealmente para finalizar se debería cerrar la conexión. 

4. ¿Qué es la autenticación de API y por qué es importante?

La autenticación es el proceso mediante el cuál se comprueba la identidad de un usuario o alguna aplicación que intenta acceder a la API. Este autenticación se da mediante credenciales, tales como el nombre de usuario y la contraseña, u otros métodos [6]. Esto es importante ya que es la forma de proteger las API, de esta manera se controla quien tiene acceso a la API y que acciones puede realizar o no quien está intentando realizar solicitudes.

5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes a una API y HTTP?

El uso de los diferentes verbos en las solicitudes API y HTTP permite obtener diferentes resultados:

GET: El método get permite recuperar datos.

POST: El método post permite enviar datos.

PUT: El método put permite actualizar datos.

DELETE: El método delete permite eliminar datos.

# Referencias bibliografícas

[1] Probabilidad y estadística. (s.f.). Coeficiente de regresión. [Online]. Obtenido de https://www.probabilidadyestadistica.net/coeficiente-de-regresion/. [Accedido Feb. 8, 2024].

[2] Barcelona Geeks. (2022, Jul 5). Método del codo para el valor óptimo de k en KMeans. [Online]. Obtenido de https://barcelonageeks.com/metodo-del-codo-para-el-valor-optimo-de-k-en-kmeans/. [Accedido Feb. 8, 2024].

[3] Oracle. (s.f.). Tipos de datos estructurados frente a no estructurados. [Online]. Obtenido de https://www.oracle.com/mx/big-data/structured-vs-unstructured-data/. [Accedido Feb. 8, 2024].

[4] Learnpython. (s.f.). Modules and Packages. [Online]. Obtenido de https://www.learnpython.org/es/Modules%20and%20Packages. [Accedido Ene. 27, 2024].

[5] Red Hat. (2019, Apr 8). REST versus SOAP: diferencias. [Online]. Obtenido de https://www.redhat.com/es/topics/integration/whats-the-difference-between-soap-rest. [Accedido Feb. 8, 2024].

[6] Microsoft Learn. (2023, Nov 8). Autenticación y autorización para las API en Azure API Management. [Online]. Obtenido de https://learn.microsoft.com/es-es/azure/api-management/authentication-authorization-overview. [Accedido Feb. 8, 2024].

