# Se coloca el nombre del programa que se creara
TARGET = adivina.exe

# Variable para el compilador de C++
CXX = g++

# Se colocan las opciones para la compilacion
CXXFLAGS =  -Wall -std=c++11

# Se indican los archivos fuente con los que trabajara el makefile para compilar $(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)
SOURCES = main.cpp funciones.cpp

# Target que compila y ejecuta el juego
all: build run

# Target que compila el programa utilizando los archivos fuente
build:
	
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# Target que compila el programa
run:
	$(TARGET)

# Target que elimina el ejecutable creado
clean:
	del $(TARGET)


