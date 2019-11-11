/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: ClaveTexto.cpp
* Descripción: archivo de implementacion de la clase ClaveTexto
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#include "ClaveTexto.h"

ClaveTexto::ClaveTexto(string textoClave):Clave()
{
	this->textoClave = textoClave;
}
ClaveTexto::~ClaveTexto()
{
	
}

void ClaveTexto::setTextoClave(string textoClave)
{
	this->textoClave = textoClave;
}
