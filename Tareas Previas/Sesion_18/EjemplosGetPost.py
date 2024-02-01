# Se utiliza la libreria requests
import requests

# # # # # # # #
# Ejemplo GET #
# # # # # # # #
# payload: la carga, es un diccionario
payload = {'clave1': 'valor1', 'clave2': 'valor2'}
# Se utiliza el metodo get, enviando como argumento una url y los
# datos en payload, esto podria ser util si se esta abriendo un log in
# por ejemplo
response = requests.get('https://ejemplo.com/ruta', params=payload)
# Aqui se imprimiria la respuesta de lo que se obtiene
print(response.text)


# # # # # # # # #
# Ejemplo  POST #
# # # # # # # # #
# payload: la carga, es un diccionario
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
# Se utiliza el metodo post, enviando como argumento una url y los
# datos en payload, el post envia datos, en este caso se utiliza data
response = requests.post('https://ejemplo.com/login', data=payload)
# Aqui se imprimiria la respuesta de lo que se obtiene
print(response.text)

# payload: la carga, es un diccionario
payload = {'usuario': 'juan', 'contrasena': 'secreta'}
# Se utiliza el metodo post, enviando como argumento una url y los
# datos en payload, el post envia datos, en este caso se especifica que
# se envian datos tipo json
response = requests.post('https://ejemplo.com/login', json=payload)
# Aqui se imprimiria la respuesta de lo que se obtiene
print(response.text)
