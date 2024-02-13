# Directorio donde estaran los archivos fuente
PAQUETE = cars_analysis
ARCHIVO_PRINCIPAL = main.py

# Condicionales para detectar el sistema operativo y el archivo a utilizar
ifeq ($(OS),Windows_NT)
	COMANDO = python
else
	COMANDO = python3
endif

# Comando que ejecuta el programa
EJECUTA = $(COMANDO) $(PAQUETE)/$(ARCHIVO_PRINCIPAL)

# Comando all que ejecuta el makefile por defecto
all: run

run:
	$(EJECUTA)