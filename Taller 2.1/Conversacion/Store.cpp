/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Store.cpp
* Descripci�n: archivo de implementacion de la clase Store
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
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
