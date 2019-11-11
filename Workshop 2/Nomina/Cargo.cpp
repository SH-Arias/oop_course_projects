/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Cargo.cpp
* Descripci�n: archivo de implementacion de la clase Cargo
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#include "Cargo.h"

Cargo::Cargo(string seccionIn, string descripcionIn, string codigoIn){
	
	seccion = seccionIn;
	descripcion = descripcionIn;
	codigo = codigoIn;
	
}
Cargo::~Cargo(){
	
}

string Cargo::getDescripcionCargo(){
	
	string output = "* Cargo- Seccion: ";
	
	output.append(seccion);
	output.append("\n*        Descripcion: ");
	output.append(descripcion);
	output.append("\n*        Codigo: ");
	output.append(codigo);
	output.append("\n");
	
	return output;
}
