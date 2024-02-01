import requests

# Paso 1: Realizar una solicitud para obtener datos de usuarios
# Se utiliza el metodo get y se envia como argumento una url
# Y se asigna lo recibido a la variable users_response
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
# Luego se saca la informacion en formato json y se agrega a la variable
# users_data
users_data = users_response.json()

# Paso 2: Realizar una solicitud para obtener datos de publicaciones
# Se utiliza el metodo get y se envia como argumento una url
# Y se asigna lo recibido a la variable posts_response
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
# Luego se saca la informacion en formato json y se agrega a la variable
# users_data
posts_data = posts_response.json()

# Paso 3: Procesar los datos para obtener informacion relevantes
# Un diccionario para almacenar las publicaciones de cada usuario
user_posts = {}

# Se utiliza el id de los usuario como key en el nuevo diccionario
# Y se inicializa su valor como un arreglo vacio
for user in users_data:
    user_posts[user['id']] = []


for post in posts_data:
    # Se obtiene el userId de cada publicacion
    # Se utiliza get() porque si no se encuentra el dato
    # el get() devolvera un valor None que no genera problema
    # si se busca como tal el key userId y no exisitera se genera un error
    user_id = post.get('userId')  # Se utiliza .get() para evitar KeyError
    # Se agregan el titulo y el cuerpo de la publicacion a su respectivo
    # usuario que tiene su key en el diccionario user_posts, para esto el
    # user_id haga match con un Id ya ingresado en user_posts
    if user_id in user_posts:
        user_posts[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# Paso 4: Mostrar los resultados
# Con el for se accede tanto el key como al value del diccionario ya que
# se utiliza el metodo items()
for user_id, posts in user_posts.items():
    # Si se encuentra tanto un id de usuario como un user_id iguales se va a
    # obtener un dato en la variable user, ya que hay una publicacion referente
    # a un usuario
    user = next((user for user in users_data if user['id'] == user_id), None)
    # Si se obtuvo un valor en user, se imprime el nombre y email del usario
    # y las publicacions que este realizo
    if user:
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    # Si no hay publicaciones se indica
    else:
        print(f"No se encontraron datos para el usuario con ID {user_id}")
