/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Persona.h
* Descripci�n: archivo de cabecera de la clase Persona
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef PERSONA_H
#define PERSONA_H

#include "Store.h"

#include <string>
using std::string;

class Persona{
	
private:
	string nombre;
	string edad;
	string estadoAnimo;
	
public:
	Persona(string nombreIn, string edadIn, string estadoAnimoIn);
	~Persona();
	
	void responder(string envio, string mensaje, Store * &storeIn);
	void hablar(string envio, string mensaje, Store * &storeIn, Persona * &receptor);
	
};

#endif
