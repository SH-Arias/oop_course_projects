/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: Clave.h
* Descripción: archivo de cabecera de la clase Clave
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#ifndef CLAVE_H
#define CLAVE_H

#include <string>
using std::string;

class Clave
{
	
	protected:
		string textoClave;
		
	public:
		Clave();
		~Clave();
		
		virtual void setTextoClave(string texto) = 0;    //version compartida // imagen y llave tienen sus versiones propias
		string getTextoClave();

};

#endif
