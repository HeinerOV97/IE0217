# Se coloca el nombre de los programas que se crearan
TARGET = regex.exe
TARGET2 = matriz.exe

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
SOURCES = Regex.cpp main.cpp RecEmail.cpp
SOURCES2 = mainMatriz.cpp

# Targets que compilan y ejecutan los programas utilizando los archivos fuente
regex:
	
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)
	./$(call FixPath,$(TARGET))

matriz:

	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(SOURCES2)
	./$(call FixPath,$(TARGET2))

# Targets que compilan los programas
buildregex:
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

buildmatriz:
	$(CXX) $(CXXFLAGS) -o $(TARGET2) $(SOURCES2)

# Targets que corren los programas
runregex:
	./$(call FixPath,$(TARGET))

runmatriz:
	./$(call FixPath,$(TARGET2))

# Target que elimina los ejecutables creados
clean:
	$(DELETE) $(TARGET) $(TARGET2)
