/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Store.cpp
* Descripción: archivo de implementacion de la clase Store
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "Store.h"

Store::Store(){
	dialogo = "";
}
Store::~Store(){
	
}

void Store::introducirLineaADialogo(string lineaIn){
	dialogo.append(lineaIn);
	dialogo.append("\n");
}
string Store::getDialogo(){
	return dialogo;
}
