/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: main.cpp
* Descripción: archivo main del punto Letrero de bienvenida
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "Letrero.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[]){
	
	
	Letrero * letrero1 = new Letrero(argv[1]);
	
	letrero1->toUpperMessage();
	
	cout << letrero1->printMessage();
	
}
