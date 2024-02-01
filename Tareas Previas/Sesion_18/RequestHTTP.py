# Se utiliza la libreria requests
import requests

# Se utiliza metodo get y se le como argumento una url
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')

# Imprimo el tipo de datos estoy recibiendo
print("Tipo", type(response))

# Se imprime la respuesta recibida en este caso se recibe un 200
# porque todo esta correcto
print("Respuesta:", response)

# Se imprime el json recibido en este caso
print("Respuesta text:", response.text)

# Se imprime lo recibido como un diccionario,
# Se imprime toda la informacion que se recibe
# para que nosotros como usuario podamos recibir
# lo que necesitamos
print("Respuesta:", response.__dict__)
