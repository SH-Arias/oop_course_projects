/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: ClaveTexto.h
* Descripción: archivo de cabecera de la clase ClaveTexto
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#ifndef CLAVETEXTO_H
#define CLAVETEXTO_H

#include "Clave.h"

class ClaveTexto: public Clave
{
	
	private:
	
	public:
	ClaveTexto(string textoClave);
	~ClaveTexto();
	
	void setTextoClave(string textoClave);
	
};

#endif
