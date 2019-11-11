/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Cargo.h
* Descripci�n: archivo de cabecera de la clase Cargo
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef CARGO_H
#define CARGO_H

#include <string>
using std::string;

class Cargo{
	
private:
	string seccion;
	string descripcion;
	string codigo;
	
public:
	Cargo(string seccionIn, string descripcionIn, string codigoIn);
	~Cargo();
	
	string getDescripcionCargo();
	
};

#endif
