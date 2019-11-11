# Compilación de main.cpp, Jugador.cpp y Tablero.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Jugador.o Tablero.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o
