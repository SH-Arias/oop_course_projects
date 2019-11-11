/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Persona.h
* Descripción: archivo de cabecera de la clase Persona
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
