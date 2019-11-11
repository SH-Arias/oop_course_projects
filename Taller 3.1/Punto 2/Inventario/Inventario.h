/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: Inventario.h
* Descripcion: archivo de cabecera de la clase Inventario
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "Producto.h"

#include <vector>
using std::vector;

class Inventario
{
	
private:
	vector<Producto*> vectorProductos;
	int totalProductos;
	
public:
	Inventario();
	~Inventario();
	
	void adicionarProducto(Producto * &producto);
	void adicionarATotal(int cantidad);
	
};

#endif
