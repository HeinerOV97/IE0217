import requests

# # # # # # # # # # #
# Manejo de Errores #
# # # # # # # # # # #

# Se pueden utilizar excepciones para el manejo de errores
# en este caso, se va a levantar la excepcion si hay un error HTTP
try:
    response = requests.get('https://ejemplo.com/pagina-inexistente')
    response.raise_for_status()  # Se genera una excepcion si hay un error HTTP
    print(response.text)  # Si no, se observa la informacion recibida
except requests.exceptions.HTTPError as err:  # Se utiliza un error por defecto
    print(f"Error HTTP: {err}")  # Error mostrado
