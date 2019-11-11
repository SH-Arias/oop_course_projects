/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Store.h
* Descripci�n: archivo de cabecera de la clase Store
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef STORE_H
#define STORE_H

#include <vector>
#include <string>
using std::string;
using std::vector;

class Store{
	
private:
	string dialogo;
	
public:
	Store();
	~Store();
	
	void introducirLineaADialogo(string lineaIn);
	string getDialogo();
	
};

#endif
