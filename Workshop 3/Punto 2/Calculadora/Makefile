# Compilación de main.cpp, y Calculadora.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Calculadora.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o