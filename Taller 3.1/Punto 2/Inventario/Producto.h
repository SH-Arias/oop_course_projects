/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: Producto.h
* Descripcion: archivo de cabecera de la clase Producto
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
using std::string;

class Producto
{
	
private:
	string nombre;
	int codigo;
	
public:
	Producto(string nombre, int codigo);
	~Producto();
	
};

#endif
