# Practica Tarea #5

## Ejecución de los códigos

Junto con los códigos en la carpeta src se adjunta un Makefile que ayuda a que se puedan correr ambos códigos de la parte práctica, para poder correr estos códigos se debe estar ubicado en la carpeta src, luego de esto se debe utilizar el comando *mingw32-make* si se está en Windows, este comando hará que primeramente se ejecute el código de la parte 1 de la tarea, este código, irá imprimiendo datos en la consola sobre datos que se pueden analizar del csv, cada vez que termine la lista de datos se imprimirá un gráfico asociado a está lista, se debe ir cerrando cada gráfico para que el código continúe, al llegar al último gráfico y cerrarlo, se saltará al código de la parte dos, se colocó un print como indicativo de esto, este código mostrará el arreglo de numpy y mostrará los cálculos solicitados, en este caso se realizó una matriz raw para hacer los cálculos, las filas de la matriz son las notas de los estudiantes y las columnas son las diferentes asignaturas. 

En la parte 2 para mayor entendimiento de los resultados, los promedios por estudiantes se colocan en cinco filas en una columna, donde cada dato representa el promedio de un estudiante, el promedio de notas por asignatura se coloca en una fila con 5 columnas, donde cada dato representa el promedio en una asignatura, la calificación máxima por estudiantes también se coloca en 5 filas en una columna, donde cada dato es la nota máxima de un estudiante y para finalizar la suma de notas por asignatura se colocan en un fila con 5 columnas, donde cada valor es la suma de las notas en cada asignatura. 

## Análisis de datos

Como datos iniciales, se tienen los siguientes datos estadísticos, con respecto a los pasajeros por vuelo, los demás datos descriptivos obtenidos no muestran posibles datos para analizar por lo que no se colocan aquí.

```
        PASSENGERS
count  46494.000000       
mean    2210.535596
std     3278.489730
min        0.000000
25%       52.000000
50%      548.000000
75%     3661.000000
max    34219.000000 

```

Con esto se obtiene que entre el periodo de Enero y Octubre del 2023 viajo una media de 2210 personas, con una desviazion estándar de 3278.49, lo que indica que la cantidad de personas transportadas en las diferentes rutas por meses posee una alta variabilidad.

Además de esto se crea un grafico de cajas para mostrar la distribución de pasajeros que viajaron en diferentes vuelos, se presentarán dos gráficos de cajas, uno en el cual los datos atípicos son escondidos, y otro donde estos datos atípicos son mostrados, el primer gráfico se muestra a continuación.

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/grafico_5.png"></a>

En este caso, se muestra que en el 50% de los vuelos entre enero y octubre por vuelo viajaron entre 52 y 3661 personas, siendo estos valores el 25% cuartil el límite inferior de la caja y el 75% cuartil el límite superior de la caja como se muestra también en los datos obtenidos al inicio, luego de esto un 25% de los viajes se realizaron con menos de 52 pasajeros, incluyendo vuelos que no transportaron a ninguna persona(vuelos de carga), luego, el otro 25% de viajes se realizaron con más de 3661 pasajeros, colocando el bigote superior en este gráfico en un máximo de aproximadamente 8500 personas por vuelo, si bien este gráfico es claro y sencillo de analizar, no muestra de la mejor manera los datos, pero se quería explicar la distribución general sin datos atípicos, a continuación se muestra el gráfico de cajas con los datos atípicos.

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/grafico_6.png"></a>

Este es el mismo gráfico anterior pero permitiendo que los datos atípicos sean presentados, como se observa existe una gran cantidad de datos atípicos, estos podrían darse por diferentes razones, tales como épocas que afecten la cantidad de personas que realizan viajes, haciendo esto referencia a época de vacaciones, o posibles ofertas de las aerolíneas en diferentes momentos del año. 

Por otra parte, al obtener datos generales de un conjunto de datos, se busca obtener datos específicos de los datos, por lo que se decidió revisar los siguientes datos:

### Vuelos Totales entre Enero y Octubre

Luego de esto en el código de procede a obtener las cantidades totales de vuelos que realiza cada empresa en el periodo entre Enero y Octubre del 2023, los resultados obtenidos son los siguientes:

```
Empresa Aerolinea: Swift Air, LLC d/b/a Eastern Air Lines d/b/a Eastern, Numero de vuelos totales: 1114, 
Empresa Aerolinea: Eastern Airlines f/k/a Dynamic Airways, LLC, Numero de vuelos totales: 71, 
Empresa Aerolinea: Air Charter, Inc d/b/a Air Flamenco, Numero de vuelos totales: 97,
Empresa Aerolinea: Tropic Ocean Airways LLC, Numero de vuelos totales: 516, 
Empresa Aerolinea: Western Air Charter, Inc.  d/b/a  Jet Edge, Numero de vuelos totales: 822,
Empresa Aerolinea: Tatonduk Outfitters Limited d/b/a Everts Air Alaska and Everts Air Cargo, Numero de vuelos totales: 46,
Empresa Aerolinea: United Parcel Service, Numero de vuelos totales: 1281,
Empresa Aerolinea: Atlas Air Inc., Numero de vuelos totales: 1151,
Empresa Aerolinea: Air Transport International, Numero de vuelos totales: 7, 
Empresa Aerolinea: Endeavor Air Inc., Numero de vuelos totales: 290,
Empresa Aerolinea: Cape Air, Numero de vuelos totales: 91,
Empresa Aerolinea: American Airlines Inc., Numero de vuelos totales: 7264,
Empresa Aerolinea: ABX Air Inc, Numero de vuelos totales: 155, 
Empresa Aerolinea: Ameristar Air Cargo, Numero de vuelos totales: 71,
Empresa Aerolinea: Alaska Airlines Inc., Numero de vuelos totales: 1575,
Empresa Aerolinea: JetBlue Airways, Numero de vuelos totales: 2759,
Empresa Aerolinea: CommuteAir LLC dba CommuteAir, Numero de vuelos totales: 42, 
Empresa Aerolinea: Delta Air Lines Inc., Numero de vuelos totales: 5280,
Empresa Aerolinea: Federal Express Corporation, Numero de vuelos totales: 1452,
Empresa Aerolinea: Global Crossing Airlines, Inc., Numero de vuelos totales: 367,
Empresa Aerolinea: Gulf And Caribbean Cargo, Numero de vuelos totales: 262, 
Empresa Aerolinea: Hawaiian Airlines Inc., Numero de vuelos totales: 169,
Empresa Aerolinea: Kenmore Air Harbor, Numero de vuelos totales: 394,
Empresa Aerolinea: Kalitta Air LLC, Numero de vuelos totales: 522,
Empresa Aerolinea: Western Global, Numero de vuelos totales: 225,
Empresa Aerolinea: Kalitta Charters II, Numero de vuelos totales: 134, 
Empresa Aerolinea: Lynden Air Cargo Airlines, Numero de vuelos totales: 88,
Empresa Aerolinea: CFM Inc d/b/a Contour Airlines d/b/a One Jet Shuttle, Numero de vuelos totales: 81,
Empresa Aerolinea: Amerijet International, Numero de vuelos totales: 596,
Empresa Aerolinea: Envoy Air, Numero de vuelos totales: 565, 
Empresa Aerolinea: National Air Cargo Group Inc d/ba National Airlines, Numero de vuelos totales: 322,
Empresa Aerolinea: Northern Air Cargo Inc., Numero de vuelos totales: 260,
Empresa Aerolinea: SkyWest Airlines Inc., Numero de vuelos totales: 473,
Empresa Aerolinea: Asia Pacific, Numero de vuelos totales: 64, 
Empresa Aerolinea: Polar Air Cargo Airways, Numero de vuelos totales: 240,
Empresa Aerolinea: Sun Country Airlines d/b/a MN Airlines, Numero de vuelos totales: 639,
Empresa Aerolinea: USA Jet Airlines Inc., Numero de vuelos totales: 425,
Empresa Aerolinea: United Air Lines Inc., Numero de vuelos totales: 7596, 
Empresa Aerolinea: Sky Lease Cargo, Numero de vuelos totales: 97, 
Empresa Aerolinea: Caribbean Sun Airlines, Inc. d/b/a World Atlantic Airlines, Numero de vuelos totales: 92, 
Empresa Aerolinea: Southwest Airlines Co., Numero de vuelos totales: 2133,
Empresa Aerolinea: Omni Air International LLC, Numero de vuelos totales: 160, 
Empresa Aerolinea: TEM Enterprises dba  Avelo Airlines, Numero de vuelos totales: 35,
Empresa Aerolinea: Mesa Airlines Inc., Numero de vuelos totales: 357,
Empresa Aerolinea: Republic Airline, Numero de vuelos totales: 376,
Empresa Aerolinea: Air Wisconsin Airlines Corp, Numero de vuelos totales: 47, 
Empresa Aerolinea: Tradewind Aviation, Numero de vuelos totales: 439,
Empresa Aerolinea: KaiserAir, Inc., Numero de vuelos totales: 6,
Empresa Aerolinea: LIMA NY Corp d/b/a Fly The Whale, Numero de vuelos totales: 46, 
Empresa Aerolinea: Scott Aviation, LLC  d/b/a  Silver Air, Numero de vuelos totales: 149,
Empresa Aerolinea: Nealco Air Charter Services, Inc.  d/b/a  Watermakers Air, Numero de vuelos totales: 80,
Empresa Aerolinea: Silver Airways, Numero de vuelos totales: 423, 
Empresa Aerolinea: ADVANCED AIR, LLC, Numero de vuelos totales: 13,
Empresa Aerolinea: Frontier Airlines Inc., Numero de vuelos totales: 1774,
Empresa Aerolinea: Tailwind Air, LLC, Numero de vuelos totales: 46, 
Empresa Aerolinea: Polaris Aviation Solutions, LLC, Numero de vuelos totales: 6,
Empresa Aerolinea: Spirit Air Lines, Numero de vuelos totales: 2283, 
Empresa Aerolinea: Piedmont Airlines, Numero de vuelos totales: 73,
Empresa Aerolinea: PSA Airlines Inc., Numero de vuelos totales: 124, 
Empresa Aerolinea: GoJet Airlines LLC d/b/a United Express, Numero de vuelos totales: 66,
Empresa Aerolinea: Horizon Air, Numero de vuelos totales: 58,
Empresa Aerolinea: Delux Public Charter LLC, Numero de vuelos totales: 32, 
Empresa Aerolinea: Allegiant Air, Numero de vuelos totales: 73,
...
```

Con el fin de observar con mayor claridad la gran cantidad de datos anterior se procede a realizar un gráfico de barras con todos los datos para tener un mejor entendimiento de lo obtenido. El gráfico se muestra a continuación:

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/grafico_1.png"></a>

(Se recomienda acercar la imagen para poder observar de una mejor manera los datos)

A partir de este gráfico, se logra observar que American Airlines Inc. y United Air Lines Inc., son las empresas que más vuelos realizaron en el periodo entre Enero y Octubre del 2023, esto se da ya que ambas empresas son lideres en trasporte de pasajeros por vía aérea internacionalmente y nacionalmente dentro de Estados Unidos, mientras que otras empresas que aparecen en el gráfico como Asia Pacific son empresas que se dedican al transporte de carga, lo que lleva a que la frecuencia de sus vuelos no sea tan alta. Como también hay presentes empresas como KaiserAir que se dedican a brindar el servicio privado de transporte aéreo a corporaciones, equipos deportivos entre otros entes, por lo que la regularidad de sus vuelos no es tan altas tampoco.

### Pasajeros Totales entre Enero y Octubre

Por otra parte, también se observa la cantidad de personas que transportó cada aerolínea entre Enero y Octubre en el 2023. Los resultados obtenidos a partir del código de Python son los siguientes.

```
Empresa Aerolinea: Swift Air, LLC d/b/a Eastern Air Lines d/b/a Eastern, Numero de pasajeros totales: 317689.0
Empresa Aerolinea: Eastern Airlines f/k/a Dynamic Airways, LLC, Numero de pasajeros totales: 12007.0
Empresa Aerolinea: Air Charter, Inc d/b/a Air Flamenco, Numero de pasajeros totales: 95.0
Empresa Aerolinea: Tropic Ocean Airways LLC, Numero de pasajeros totales: 19136.0
Empresa Aerolinea: Western Air Charter, Inc.  d/b/a  Jet Edge, Numero de pasajeros totales: 3970.0
Empresa Aerolinea: Tatonduk Outfitters Limited d/b/a Everts Air Alaska and Everts Air Cargo, Numero de pasajeros totales: 0.0
Empresa Aerolinea: United Parcel Service, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Atlas Air Inc., Numero de pasajeros totales: 1086.0
Empresa Aerolinea: Air Transport International, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Endeavor Air Inc., Numero de pasajeros totales: 817668.0
Empresa Aerolinea: Cape Air, Numero de pasajeros totales: 24443.0
Empresa Aerolinea: American Airlines Inc., Numero de pasajeros totales: 27930895.0
Empresa Aerolinea: ABX Air Inc, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Ameristar Air Cargo, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Alaska Airlines Inc., Numero de pasajeros totales: 1819967.0
Empresa Aerolinea: JetBlue Airways, Numero de pasajeros totales: 8847940.0
Empresa Aerolinea: CommuteAir LLC dba CommuteAir, Numero de pasajeros totales: 25149.0
Empresa Aerolinea: Delta Air Lines Inc., Numero de pasajeros totales: 21043102.0
Empresa Aerolinea: Federal Express Corporation, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Global Crossing Airlines, Inc., Numero de pasajeros totales: 145368.0
Empresa Aerolinea: Gulf And Caribbean Cargo, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Hawaiian Airlines Inc., Numero de pasajeros totales: 717067.0
Empresa Aerolinea: Kenmore Air Harbor, Numero de pasajeros totales: 20312.0
Empresa Aerolinea: Kalitta Air LLC, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Western Global, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Kalitta Charters II, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Lynden Air Cargo Airlines, Numero de pasajeros totales: 0.0
Empresa Aerolinea: CFM Inc d/b/a Contour Airlines d/b/a One Jet Shuttle, Numero de pasajeros totales: 491.0
Empresa Aerolinea: Amerijet International, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Envoy Air, Numero de pasajeros totales: 750379.0
Empresa Aerolinea: National Air Cargo Group Inc d/ba National Airlines, Numero de pasajeros totales: 3757.0
Empresa Aerolinea: Northern Air Cargo Inc., Numero de pasajeros totales: 0.0
Empresa Aerolinea: SkyWest Airlines Inc., Numero de pasajeros totales: 1274033.0
Empresa Aerolinea: Asia Pacific, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Polar Air Cargo Airways, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Sun Country Airlines d/b/a MN Airlines, Numero de pasajeros totales: 459466.0
Empresa Aerolinea: USA Jet Airlines Inc., Numero de pasajeros totales: 0.0
Empresa Aerolinea: United Air Lines Inc., Numero de pasajeros totales: 26124875.0
Empresa Aerolinea: Sky Lease Cargo, Numero de pasajeros totales: 0.0
Empresa Aerolinea: Caribbean Sun Airlines, Inc. d/b/a World Atlantic Airlines, Numero de pasajeros totales: 27659.0
Empresa Aerolinea: Southwest Airlines Co., Numero de pasajeros totales: 3595941.0
Empresa Aerolinea: Omni Air International LLC, Numero de pasajeros totales: 22363.0
Empresa Aerolinea: TEM Enterprises dba  Avelo Airlines, Numero de pasajeros totales: 3304.0
Empresa Aerolinea: Mesa Airlines Inc., Numero de pasajeros totales: 697881.0
Empresa Aerolinea: Republic Airline, Numero de pasajeros totales: 982376.0
Empresa Aerolinea: Air Wisconsin Airlines Corp, Numero de pasajeros totales: 102205.0
Empresa Aerolinea: Tradewind Aviation, Numero de pasajeros totales: 28883.0
Empresa Aerolinea: KaiserAir, Inc., Numero de pasajeros totales: 189.0
Empresa Aerolinea: LIMA NY Corp d/b/a Fly The Whale, Numero de pasajeros totales: 294.0
Empresa Aerolinea: Scott Aviation, LLC  d/b/a  Silver Air, Numero de pasajeros totales: 806.0
Empresa Aerolinea: Nealco Air Charter Services, Inc.  d/b/a  Watermakers Air, Numero de pasajeros totales: 14932.0
Empresa Aerolinea: Silver Airways, Numero de pasajeros totales: 190881.0
Empresa Aerolinea: ADVANCED AIR, LLC, Numero de pasajeros totales: 66.0
Empresa Aerolinea: Frontier Airlines Inc., Numero de pasajeros totales: 1861468.0
Empresa Aerolinea: Tailwind Air, LLC, Numero de pasajeros totales: 260.0
Empresa Aerolinea: Polaris Aviation Solutions, LLC, Numero de pasajeros totales: 50.0
Empresa Aerolinea: Spirit Air Lines, Numero de pasajeros totales: 4236378.0
Empresa Aerolinea: Piedmont Airlines, Numero de pasajeros totales: 203634.0
Empresa Aerolinea: PSA Airlines Inc., Numero de pasajeros totales: 242778.0
Empresa Aerolinea: GoJet Airlines LLC d/b/a United Express, Numero de pasajeros totales: 66964.0
Empresa Aerolinea: Horizon Air, Numero de pasajeros totales: 90905.0
Empresa Aerolinea: Delux Public Charter LLC, Numero de pasajeros totales: 6652.0
Empresa Aerolinea: Allegiant Air, Numero de pasajeros totales: 40878.0
```

Se procede a crear un gráfico para tener un mejor entendimiento de los datos obtenidos. 

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/grafico_2.png"></a>

(Se recomienda acercar la imagen para poder observar de una mejor manera los datos)

Con este gráfico, se puede reafirmar lo análizado en el caso anterior, en este caso se obtiene el total de pasajeros que viajaron con cada aerolínea en el período entre Enero y Octubre del 2023, y en este caso siguen siendo American Airlines Inc. y United Air Lines Inc. las empresas que más personas transportaron, lo que deja ver que el fin de estás empresas es el transporte de las personas por vía aérea,  mientras que en Asia Pacific la cantidad de pasajeros transportada fue 0, ya que es una empresa encargada del transporte de cargamentos vía aérea.

### Modelo de aeronave más utilizado por las empresas

Como dato adicional a lo referente con los vuelos, se decidió observar el modelo de avión más utilizado por las empresas, para esto primero se obtuvo el modelo de avión más utilizado por cada empresa y se realizó un conteo de cual modelo de avión era más recurrente que fuera el favorito de las empresas encargadas del transporte aéreo. Los datos de las aeronaves más utilizada se muestran a continuación.  

```
Empresa Aerolinea: ABX Air Inc, Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: ADVANCED AIR, LLC, Modelo con el cual trabaja mas la aerolinea: 609
Empresa Aerolinea: Air Charter, Inc d/b/a Air Flamenco, Modelo con el cual trabaja mas la aerolinea: 489
Empresa Aerolinea: Air Transport International, Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: Air Wisconsin Airlines Corp, Modelo con el cual trabaja mas la aerolinea: 629
Empresa Aerolinea: Alaska Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 888
Empresa Aerolinea: Allegiant Air, Modelo con el cual trabaja mas la aerolinea: 694
Empresa Aerolinea: American Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 614
Empresa Aerolinea: Amerijet International, Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: Ameristar Air Cargo, Modelo con el cual trabaja mas la aerolinea: 635
Empresa Aerolinea: Asia Pacific, Modelo con el cual trabaja mas la aerolinea: 622
Empresa Aerolinea: Atlas Air Inc., Modelo con el cual trabaja mas la aerolinea: 819
Empresa Aerolinea: CFM Inc d/b/a Contour Airlines d/b/a One Jet Shuttle, Modelo con el cual trabaja mas la aerolinea: 669
Empresa Aerolinea: Cape Air, Modelo con el cual trabaja mas la aerolinea: 125
Empresa Aerolinea: Caribbean Sun Airlines, Inc. d/b/a World Atlantic Airlines, Modelo con el cual trabaja mas la aerolinea: 655
Empresa Aerolinea: CommuteAir LLC dba CommuteAir, Modelo con el cual trabaja mas la aerolinea: 675
Empresa Aerolinea: Delta Air Lines Inc., Modelo con el cual trabaja mas la aerolinea: 622
Empresa Aerolinea: Delux Public Charter LLC, Modelo con el cual trabaja mas la aerolinea: 674
Empresa Aerolinea: Eastern Airlines f/k/a Dynamic Airways, LLC, Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: Endeavor Air Inc., Modelo con el cual trabaja mas la aerolinea: 638
Empresa Aerolinea: Envoy Air, Modelo con el cual trabaja mas la aerolinea: 673
Empresa Aerolinea: Federal Express Corporation, Modelo con el cual trabaja mas la aerolinea: 683
Empresa Aerolinea: Frontier Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 722
Empresa Aerolinea: Global Crossing Airlines, Inc., Modelo con el cual trabaja mas la aerolinea: 694
Empresa Aerolinea: GoJet Airlines LLC d/b/a United Express, Modelo con el cual trabaja mas la aerolinea: 530
Empresa Aerolinea: Gulf And Caribbean Cargo, Modelo con el cual trabaja mas la aerolinea: 430
Empresa Aerolinea: Hawaiian Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 696
Empresa Aerolinea: Horizon Air, Modelo con el cual trabaja mas la aerolinea: 673
Empresa Aerolinea: JetBlue Airways, Modelo con el cual trabaja mas la aerolinea: 694
Empresa Aerolinea: KaiserAir, Inc., Modelo con el cual trabaja mas la aerolinea: 614
Empresa Aerolinea: Kalitta Air LLC, Modelo con el cual trabaja mas la aerolinea: 819
Empresa Aerolinea: Kalitta Charters II, Modelo con el cual trabaja mas la aerolinea: 619
Empresa Aerolinea: Kenmore Air Harbor, Modelo con el cual trabaja mas la aerolinea: 40
Empresa Aerolinea: LIMA NY Corp d/b/a Fly The Whale, Modelo con el cual trabaja mas la aerolinea: 416
Empresa Aerolinea: Lynden Air Cargo Airlines, Modelo con el cual trabaja mas la aerolinea: 556
Empresa Aerolinea: Mesa Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 673
Empresa Aerolinea: National Air Cargo Group Inc d/ba National Airlines, Modelo con el cual trabaja mas la aerolinea: 819
Empresa Aerolinea: Nealco Air Charter Services, Inc.  d/b/a  Watermakers Air, Modelo con el cual trabaja mas la aerolinea: 415
Empresa Aerolinea: Northern Air Cargo Inc., Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: Omni Air International LLC, Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: PSA Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 638
Empresa Aerolinea: Piedmont Airlines, Modelo con el cual trabaja mas la aerolinea: 675
Empresa Aerolinea: Polar Air Cargo Airways, Modelo con el cual trabaja mas la aerolinea: 821
Empresa Aerolinea: Polaris Aviation Solutions, LLC, Modelo con el cual trabaja mas la aerolinea: 612
Empresa Aerolinea: Republic Airline, Modelo con el cual trabaja mas la aerolinea: 673
Empresa Aerolinea: Scott Aviation, LLC  d/b/a  Silver Air, Modelo con el cual trabaja mas la aerolinea: 667
Empresa Aerolinea: Silver Airways, Modelo con el cual trabaja mas la aerolinea: 441
Empresa Aerolinea: Sky Lease Cargo, Modelo con el cual trabaja mas la aerolinea: 820
Empresa Aerolinea: SkyWest Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 673
Empresa Aerolinea: Southwest Airlines Co., Modelo con el cual trabaja mas la aerolinea: 612
Empresa Aerolinea: Spirit Air Lines, Modelo con el cual trabaja mas la aerolinea: 722
Empresa Aerolinea: Sun Country Airlines d/b/a MN Airlines, Modelo con el cual trabaja mas la aerolinea: 614
Empresa Aerolinea: Swift Air, LLC d/b/a Eastern Air Lines d/b/a Eastern, Modelo con el cual trabaja mas la aerolinea: 617
Empresa Aerolinea: TEM Enterprises dba  Avelo Airlines, Modelo con el cual trabaja mas la aerolinea: 614
Empresa Aerolinea: Tailwind Air, LLC, Modelo con el cual trabaja mas la aerolinea: 771
Empresa Aerolinea: Tatonduk Outfitters Limited d/b/a Everts Air Alaska and Everts Air Cargo, Modelo con el cual trabaja mas la aerolinea: 655
Empresa Aerolinea: Tradewind Aviation, Modelo con el cual trabaja mas la aerolinea: 479
Empresa Aerolinea: Tropic Ocean Airways LLC, Modelo con el cual trabaja mas la aerolinea: 416
Empresa Aerolinea: USA Jet Airlines Inc., Modelo con el cual trabaja mas la aerolinea: 655
Empresa Aerolinea: United Air Lines Inc., Modelo con el cual trabaja mas la aerolinea: 614
Empresa Aerolinea: United Parcel Service, Modelo con el cual trabaja mas la aerolinea: 626
Empresa Aerolinea: Western Air Charter, Inc.  d/b/a  Jet Edge, Modelo con el cual trabaja mas la aerolinea: 641
Empresa Aerolinea: Western Global, Modelo con el cual trabaja mas la aerolinea: 820
```

Luego con los datos obtenidos se obtuvo un gráfico que muestra el resultado obtenido con la herramienta de Seaborn.

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/grafico_3.png"></a>

Con la gráfica del conteo obtenida con Seaborn se muestra que los modelos de avión más utilizados por las aerolíneas son los modelos, 626, 614 y 673, donde estos son modelos comerciales, Se observa una tendencia por el tipo de aeronave 614 en aquellas empresas destinadas al transporte de pasajeros, siendo este el modelo más utilizado por empresas como American Airlines Inc. y United Air Lines Inc, que se dedican a este fin. 

### Empresas que realizaron más vuelos por mes

Finalmente, se obtuvo las empresas que más vuelos realizaron en el periodo analizado entre Enero y Octubre del 2023, los resultados obtenidos fueron los siguientes.

```
En el mes: 1, La aerolinea mas utilizada fue: American Airlines Inc., Realizo 791 vuelos.
En el mes: 2, La aerolinea mas utilizada fue: American Airlines Inc., Realizo 710 vuelos.
En el mes: 3, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 788 vuelos.
En el mes: 4, La aerolinea mas utilizada fue: American Airlines Inc., Realizo 788 vuelos.
En el mes: 5, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 783 vuelos.
En el mes: 6, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 840 vuelos.
En el mes: 7, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 817 vuelos.
En el mes: 8, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 753 vuelos.
En el mes: 9, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 749 vuelos.
En el mes: 10, La aerolinea mas utilizada fue: United Air Lines Inc., Realizo 740 vuelos.
```

Por medio de Seaborn se obtuvo una visualización de estos resultados.

<a><img src="https://github.com/HeinerOV97/Imagenes/blob/main/grafico_4.png"></a>

Como bien se podía suponer de los datos anteriores, las empresas que más vuelos realizaron en los diferentes meses fueron American Airlines Inc. y United Air Lines Inc, mostrándose una superioridad por parte de United Air Lines Inc. Curiosamente esto contradice las encuestas revisadas de internet donde las personas prefieren American Airlines, aún así esto se puede deber a que United Air Lines posee un mayor número de destinos a nivel nacional dentro de los Estados Unidos, por lo que la frecuencia de sus vuelos es mayor.

# Teoría Tarea #5

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

Estos son métodos utilizados para acceder a los datos de un DataFrame de Pandas, cada uno accede a los datos de maneras diferentes. Por un lado el loc accede a los datos tanto de filas y/o columnas utilizando las etiquetas que posee el DataFrame, esto quiere decir los nombres de las filas y las columnas dentro del DataFrame. Mientras que iloc utiliza indices enteros, esto quiere decir que accede al dato por la posición númerica que posee el dato dentro del DataFrame. Otra diferencia, es que loc recibe booleanos, para realizar una selección más especifica de datos, mientras que iloc no permite el uso de booleanos. [4]

# Referencias bibliográficas

[1] GeeksforGeeks. (2018, Nov 19). Python | Pandas dataframe.isna(). [Online]. Obtenido de https://www.geeksforgeeks.org/python-pandas-dataframe-isna/. [Accedido Feb. 1, 2024]. 

[2] GeeksforGeeks. (2023, Mar 31). Pandas DataFrame.dropna() Method. [Online]. Obtenido de https://www.geeksforgeeks.org/python-pandas-dataframe-dropna/. [Accedido Feb. 1, 2024]. 

[3] GeeksforGeeks. (2023, Nov 30). Python | Pandas DataFrame.fillna() to replace Null values in dataframe. [Online]. Obtenido de https://www.geeksforgeeks.org/python-pandas-dataframe-fillna-to-replace-null-values-in-dataframe/. [Accedido Feb. 1, 2024]. 

[4] GeeksforGeeks. (2023, Dic 4). Difference between loc() and iloc() in Pandas DataFrame. [Online]. Obtenido de https://www.geeksforgeeks.org/difference-between-loc-and-iloc-in-pandas-dataframe. [Accedido Feb. 1, 2024].