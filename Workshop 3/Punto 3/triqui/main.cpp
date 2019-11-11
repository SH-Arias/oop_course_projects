/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: Clave.cpp
* Descripción: archivo main del punto Interfaces Graficas(triqui)
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#include <QtWidgets/QApplication>
#include "tablero.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tablero w;
    w.show();
    
    return a.exec();
}
