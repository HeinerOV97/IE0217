# Se utiliza la libreria requests
import requests

url = "https://www.google.com"

# Se utiliza el metodo requests en la pagina de google
response = requests.get(url)

# Se imprime la informacion recibida en html, en la terminal
# es informacion no entendible a simple vista, si fuera
# vista por el navegador esta renderizaria una pagina web
print(response.text)
