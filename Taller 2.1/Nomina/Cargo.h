/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Cargo.h
* Descripción: archivo de cabecera de la clase Cargo
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
