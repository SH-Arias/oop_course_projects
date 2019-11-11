/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Store.h
* Descripción: archivo de cabecera de la clase Store
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
