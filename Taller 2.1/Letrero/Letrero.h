/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Letrero.h
* Descripci�n: archivo de cabecera de la clase Letrero
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef LETRERO_H
#define LETRERO_H

#include <string>
using std::string;

class Letrero{
	
private:
	string message;

public:
	Letrero(string messageIn);
	~Letrero();
	
	void toUpperMessage();
	
	string printMessage();
	
};

#endif
