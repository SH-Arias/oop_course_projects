/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: main.cpp
* Descripci�n: archivo main del punto Letrero de bienvenida
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#include "Letrero.h"
#include <iostream>

using namespace std;

int main(int argc, char * argv[]){
	
	
	Letrero * letrero1 = new Letrero(argv[1]);
	
	letrero1->toUpperMessage();
	
	cout << letrero1->printMessage();
	
}
