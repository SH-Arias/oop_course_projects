# Compilación de letreroBienvenida.cpp,  traductor.cpp, inventario.cpp, generarPares.cpp, triqui.cpp y matrices.cpp
CPP = g++
CFLAGS = -c
OFLAGS = -o
.SUFFIXES: .cpp
.cpp.o:
		$(CPP) $(CFLAGS) $<
		
#Generar todo
all: \
		letreroBienvenida \
		traductor \
		inventario \
		generarPares \
		triqui\
		matrices\
		
# El archivo letreroBienvenida.cpp debe estar presente para ejecutar esta regla
# El archivo letreroBienvenida debe generarse cuando se ejecuta esta regla
letreroBienvenida: letreroBienvenida.o
		$(CPP) $(OFLAGS) letreroBienvenida letreroBienvenida.o
		
# El archivo traductor.cpp debe estar presente para ejecutar esta regla
# El archivo traductor debe generarse cuando se ejecuta esta regla
traductor: traductor.o
		$(CPP) $(OFLAGS) traductor traductor.o
		
# El archivo inventario.cpp debe estar presente para ejecutar esta regla
# El archivo inventario debe generarse cuando se ejecuta esta regla
inventario: inventario.o
		$(CPP) $(OFLAGS) inventario inventario.o		
		
# El archivo generarPares.cpp debe estar presente para ejecutar esta regla
# El archivo generarPares debe generarse cuando se ejecuta esta regla
generarPares: generarPares.o
		$(CPP) $(OFLAGS) generarPares generarPares.o
		
# El archivo triqui.cpp debe estar presente para ejecutar esta regla
# El archivo triqui debe generarse cuando se ejecuta esta regla
triqui: triqui.o
		$(CPP) $(OFLAGS) triqui triqui.o
		
# El archivo matrices.cpp debe estar presente para ejecutar esta regla
# El archivo matrices debe generarse cuando se ejecuta esta regla
matrices: matrices.o
		$(CPP) $(OFLAGS) matrices matrices.o
		
clean:
	rm -rf *.o
