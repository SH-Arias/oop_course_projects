/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Letrero.h
* Descripción: archivo de cabecera de la clase Letrero
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
