# Se coloca el nombre del programa que se creara
TARGET = Libreria.exe

# Variable para el compilador de C++
CXX = g++

# Se colocan las opciones para la compilacion
CXXFLAGS = -std=c++11

# Se estable el comportamiento de acuerdo al OS 
# DELETE se modifica de acuerdo al OS
#FixPath invierte las barras inclinadas por barras invertidas en caso de ser necesario por el OS
ifeq ($(OS),Windows_NT)
	DELETE = del /Q
	FixPath = $(subst /,\,$1) 
else 
	DELETE = rm -f
	FixPath = $1
endif

# Se indican los archivos fuente con los que trabajara el makefile para compilar
SOURCES = MaterialLectura.cpp main.cpp Libro.cpp Noticia.cpp Pelicula.cpp Podcast.cpp MaterialAudiovisual.cpp MaterialOrdenado.cpp MaterialesCompl.cpp menu.cpp

# Target que compila y ejecuta el juego, ademas elimina el ejecutable al final
all: build run clean

# Target que compila el programa utilizando los archivos fuente
build:
	
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# Target que ejecuta el programa
run:
	./$(call FixPath,$(TARGET))

# Target que elimina el ejecutable creado
clean:
	$(DELETE) $(TARGET)
