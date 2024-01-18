# Nombre del ejecutable que se obtendra
TARGET = gestion_estudiantes.exe

# Compilador para C++
CXX = g++

# Opciones para la compilacion
CXXFLAGS = -Wall -std=c++11

# Se colocan los archivos fuentes
SOURCES = main.cpp estudiante.cpp

# Se almacenan los archivos objeto que se generan a partir de los archivos fuente .cpp a .exe
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuentes en archivos objeto
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla utilizada para compilar el programa fuente a partir de los archivos objeto creados
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla utilizada para limpiar los archivos objeto que fueron generados
clean:
	del $(TARGET) $(OBJECTS)

