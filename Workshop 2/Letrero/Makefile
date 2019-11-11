# Compilación de main.cpp y Letrero.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Letrero.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o
