# Compilación de main.cpp, Cargo.cpp, Consolidado.cpp, Empleado.cpp, EmpleadoEjecutivo.cpp, EmpleadoOperativo.cpp y Salario.cpp
CPP = g++

.SUFFIXES: .cpp

.cpp .o:
	$(CPP) -c $<
	
all: \
	objeto \

objeto: main.o Cargo.o Consolidado.o Empleado.o EmpleadoEjecutivo.o EmpleadoOperativo.o Salario.o
	g++ -o exe *.o
		
clean:
	rm -rf *.o
