/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: Inventario.cpp
* Descripcion: archivo de implementacion de la clase Inventario
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#include "Inventario.h"

Inventario::Inventario()
{
	this->totalProductos = 0;
}
Inventario::~Inventario()
{
	
}

void Inventario::adicionarProducto(Producto * &producto)
{
	vectorProductos.push_back(producto);
}
void Inventario::adicionarATotal(int cantidad)
{
	totalProductos += cantidad;
}
