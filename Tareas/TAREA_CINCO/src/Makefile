# Directorio donde estaran los archivos fuente
ARCHIVO_PARTE_1 = ManejoClases.py
ARCHIVO_PARTE_2 = UsoNumpy.py

# Condicionales para detectar el sistema operativo y el archivo a utilizar
ifeq ($(OS),Windows_NT)
	COMANDO = python
else
	COMANDO = python3
endif

# Comando que ejecuta los programas
EJECUTA_PARTE_1 = $(COMANDO) $(ARCHIVO_PARTE_1)
EJECUTA_PARTE_2 = $(COMANDO) $(ARCHIVO_PARTE_2)

# Comando all que ejecuta el makefile por defecto
all: run

run:
	$(EJECUTA_PARTE_1)
	$(EJECUTA_PARTE_2)


