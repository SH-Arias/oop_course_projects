# Compilación de main.cpp, Clave.cpp, ClaveLlave.cpp, ClaveImagen.cpp y ClaveTexto.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Clave.o ClaveLlave.o ClaveImagen.o ClaveTexto.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o
	  
