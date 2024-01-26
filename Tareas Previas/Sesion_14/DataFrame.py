# Como se importa pandas, pd es por convencion
import pandas as pd 

'''
Creacion de un DataFrame utilizando Pandas
Se define como un diccionario, el Key es el encabezado de la columna, el value son los datos en la columna
'''

df = pd.DataFrame(
    {
        "Name": [
            "Braund, Mr. Owen Harris",
            "Allen, Mr. William Henry",
            "Bonnell, Miss. Elizabeth",
        ],
        "Age": [22, 35, 58],
        "Sex": ["male", "male", "female"]
    }
)

'''
Se crea una serie, esta es una lista de elementos con un nombre
'''
ages = pd.Series([22, 35, 58], name="Age")
# Se imprime el indice, los valores, el nombre y el tipo de datos
print(ages)

# Numero maximo de la serie creada
print(ages.max())

'''
Se puede extraer una columna del primer DataFrame creado
la sintaxis es la siguiente
'''
df["Age"]

'''
Metodo describe() para obtener una descripcion general
rapida de los datos numericos en un DataFrame
'''
print(df.describe)


'''
Anotaciones en comentarios sobre pandas
'''

'''
Leer datos almacenados en un archivo csv, se crea un dataframe con los datos del archivo csv
'''
# titanic = pd.read_csv("data/titanic.csv") 

'''
Convertir un archivo en un xlsx 
'''
# Sintaxis        (nombres del archivo, nombre de la hoja, si se desea agregar indices o no)
# titanic.to_excel(titanic.xlsx, sheet_name="passengers", index=False)

'''
Obtener los primeros 8 elementos del DataFrame, si no se ingresa un valor, entrega los 
los primeros 5 valores del DataFrame
'''
# titanic.head(8)

'''
Tipos de datos del DataFrame
'''
# titanic.dtypes

'''
Leer los archivos de un excel
'''
# Sintaxis               (Archivo a leer, hoja a leer)
# titanic = pd.read_excel(titanic.xlsx, sheet_name="passengers")

'''
Informacion general del archivo que se leyo
'''
# titanic.info()

'''
Obtener una serie
A las series se les puede aplicar el metodo head()
'''
# ages = titanic["Ages"]

'''
Tipo de dato con el que se trabaja
'''
# type(titanic["Age"])

'''
Dimension de la serie
'''
# titanic["Age"].shape

'''
Obtener dos columnas de un DataFrame
Se pasan como una lista los encabezados de las listas
Esto se definiria como un Dataframe
'''
#age_sex = titanic[["Age", "Sex"]]

'''
Filtrar los datos, en este caso se obtienen todos los elemetos con age mayor a 35
'''
#above_35 = titanic[titanic["Age"] > 35]

'''
Filtrar los datos, en este caso se obtienen todos los elemetos valor 2 o 3 en Pclass
dos metodos de hacerlo
'''
# above_35 = titanic[titanic["Pclass"].isin([2, 3])]
# above_35 = titanic[(titanic["Pclass"] == 2) | titanic["Pclass"] == 3)

'''
Filtrar datos que tienen un valor numerico en la edad
'''
# age_no_na = titanic[titanic["Age"].notna()]

'''
Filtrar obtener el nombre de las personas mayores a 35
'''
# adult_names = titanic.loc[titanic["Age"] > 35, "Name"]

'''
Filtrar por indices, de la fila 9 a la 25, de la columna 2 a la 5
'''
# titanic.iloc[9:25, 2:5]

'''
Modificar los datos, en este caso, colocar anonymous en las posiciones elegidas
'''
# titanic.iloc[0:3, 3] = "anonymous"


'''
Modificar todos los valores de una columna
Ya pandas internamente sabe como trabajar con una serie que se multiplica por un numero
Multiplica los valores de una serie y coloca el resultado en una columna nueva
'''
# air_quality["london_mg_per_cubic"] = air_quality["station_london"] * 1.882

'''
Modificar valores, dividir los valores de una columna por los de otra columna
dividir cada valor de una columna con el correspondiente en la otra columna
y guardar valor en una columan nueva
'''
'''
air_quality["ratio_paris_antwerp"] = (
    air_quality["station_paris"] / air_quality["station_antwer"]
)
'''

'''
Renombrar una columna
'''
'''
air_quality_renamed = air_quality.rename(
    columns={
        "station_antwerp": "BETR801"
    }
)
'''

'''
Pasar letras mayusculas a minusculas
metodo rename()
'''
# air_quality_renamed = air_quality_renamed.rename(columns=str.lower)

'''
Obtener el promedio, y la mediana, en este caso de una columna extraida o de dos,
tambien puedo utilizar describe()
'''
# titanic["Age"].mean()
# titanic[["Age", "Fare"]].median()
# titanic[["Age", "Fare"]].describe()

'''
Agregar columnas con datos que le especificamos
'''
'''
titanic.agg(
    {
        "Age": ["min", "max", "median", "skew"],
        "Fare": ["min", "max", "median", "mean"],
    }
)
'''

'''
Agrupaciones, en este caso agrupa por sexo y calcula la media
'''

# titanic[["Sex", "Age"]].groupby("Sex").mean()

'''
Agrupaciones, en este caso por sexo y Pclass y calcule la media del Fare
'''
# titanic.groupby(["Sex", "Pclass"])["Fare"].mean()

'''
Agrupaciones, por sexo y calcule la media para las columnas donde hay valores numericos
'''

# titanic.groupby("Sex").mean(numeric_only=True)

'''
Contar la cantidad de valores
'''
# titanic["Pclass"].value_counts()

'''
Ordenar valores de manera ascendente
'''
# titanic.sort_values(by="Age").head()

'''
Ordenar valores de manera descendente
'''
# titanic.sort_values(by=["Pclass", "Age"], ascending=False).head()

'''
Filtrar elementos que compartan un mismo parametro
Luego se ordenan por indice, se agrupan por locacion y se muestran los primeros dos
Se divide lo que se desea hacer para no hacer una linea tan extensa
'''
# no2 = air_quality[air_quality["parameter"] == "no2"]
# no2_subset = no2.sort_index().groupby(["location"]).head(2)

'''
Realizar una tabla pivot, donde las columnas seran la locacion y los valores seran los valores de locaciones
'''
# no2_subset.pivot(columns="location", values='value)

'''
Obtener una tabla pivot pero con valores cambiados por los indicados, en este caso la media
pivot_table() permite agregar valores
aggfunc permite combinar valores
'''
'''
air_quality.pivot_table(
    values="value", index="location", columns="parameters", aggfunc="mean"
)
'''

'''
Separar un pivot, esto es sencillo si no se utilizo previamente pivot_table() que
puede unificar valores
'''
# no_2 = no2_pivoted.melt(id_vars="date.utc")

'''
Parsear datos de un DataFrame, descomponer strings para trabajar
'''
# air_quality_no2 = pd.read_csv("data/air_quality_no2_long.csv", parse_dates=True)
# air_quality_pm25 = pd.read_csv("data/air_quality_pm25_long.csv", parse_dates=True)

'''
Concatenar diferentes DataFrame
'''
# air_quality = pd.concat([air_quality_pm25, air_quality_no2], axis=0)
