# Compilación de main.cpp, Inventario.cpp y Producto.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Inventario.o Producto.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o