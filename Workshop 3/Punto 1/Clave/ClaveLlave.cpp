/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: ClaveLlave.cpp
* Descripcion: archivo de implementacion de la clase ClaveLlave
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#include "ClaveLlave.h"

ClaveLlave::ClaveLlave(string textoClave):Clave()
{
	ClaveLlave::setTextoClave(textoClave);
}
ClaveLlave::ClaveLlave(string algoritmo, string textoClave):Clave()
{
	ClaveLlave::setTextoClave(algoritmo, textoClave);
}
ClaveLlave::~ClaveLlave()
{
	
}


void ClaveLlave::setTextoClave(string textoClaveIn)
{
	this->textoClave = textoClaveIn;
	
	string newAlgoritmo = "";
	int posn = 0;
	
	while(textoClaveIn[posn] != '#')
	{
		newAlgoritmo += textoClaveIn[posn];
		posn++;
	}
	
	this->algoritmo = newAlgoritmo;
	
}
void ClaveLlave::setTextoClave(string algoritmoIn, string textoClaveIn)
{
	this->algoritmo = algoritmoIn;
	
	string newTextoClave = "";
	newTextoClave += algoritmoIn;
	newTextoClave += "#";
	newTextoClave += textoClaveIn;
	
	this->textoClave = newTextoClave;
	
}
