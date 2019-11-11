/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: ClaveImagen.h
* Descripción: archivo de cabecera de la clase ClaveImagen
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#ifndef CLAVEIMAGEN_H
#define CLAVEIMAGEN_H

#include "Clave.h"

class ClaveImagen: public Clave
{
	
	private:
	int imagen[3][2];
	
	public:
	ClaveImagen(string textoClave); //
	ClaveImagen(int imagen[3][2]); //
	~ClaveImagen();
	
	string imgIntoTxt(int imagen[3][2]); //
	
	void setTextoClave(string textoClave); //
	void setTextoClave(int imagen[3][2]); //
	
};

#endif
