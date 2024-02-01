import requests

# # # # # # # # # # # #
# Manejo de Respuesta #
# # # # # # # # # # # #
# Se utiliza el metodo get, enviando como parametro una url
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
# Se pueden revisar los datos recibidos
# Se podria revisar el status_code
print(response.status_code)
# Se pueden observar los headers
print(response.headers)
# Se puede revisar si lo recibido es un json
# Por ejemplo, si tengo un codigo listo para
# para trabajar con archivos tipo json
print(response.json())
