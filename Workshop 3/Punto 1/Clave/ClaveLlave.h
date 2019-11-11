/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: ClaveLlave.h
* Descripcion: archivo de cabecera de la clase ClaveLlave
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#ifndef CLAVELLAVE_H
#define CLAVELLAVE_H

#include "Clave.h"

class ClaveLlave: public Clave	
{
	
private:
	string algoritmo;
	
public:
	ClaveLlave(string textoClave);
	ClaveLlave(string algoritmo, string textoClave);
	~ClaveLlave();
	
	void setTextoClave(string textoClaveIn); //
	void setTextoClave(string algoritmoIn, string textoClaveIn);
	
};

#endif
