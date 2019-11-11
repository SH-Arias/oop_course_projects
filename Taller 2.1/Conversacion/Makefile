# Compilación de main.cpp, Persona.cpp y Store.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Persona.o Store.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o
