/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: main.cpp
* Descripcion: archivo main del punto Inventario
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#include "Inventario.h"
#include "Producto.h"

#include <iostream>

using namespace std;

///// DECLARACIONES DE FUNCIONES

int obtenerCantidad();

///// FUNCION MAIN

int main(int argc, char * argv[])
{

	Inventario * objInventario = new Inventario();
	
	cout << "Indique el numero de productos a ingresar:\n";
	int productosAIngresar = obtenerCantidad();
	
	for(int a = 0; a < productosAIngresar; a++)
	{
		cout << "Indique el codigo del producto " << (a+1) << ":\n";
		int codigoPr = obtenerCantidad();
		
		string nombrePr;
		
		cout << "Indique el nombre del producto " << (a+1) << ":\n";
		cin >> nombrePr;
		
		cout << "Indique la cantidad del producto " << (a+1) << ":\n";
		int cantidadPr = obtenerCantidad();
		
		Producto * objProducto = new Producto(nombrePr, codigoPr);
		
		objInventario->adicionarProducto(objProducto);
		objInventario->adicionarATotal(cantidadPr);
		
		cout << "El producto " << (a+1) << " ha sido ingresado\n\n";
		
	}
	
}

///// IMPLEMENTACIONES DE FUNCIONES

int obtenerCantidad()
{
	int cantidad;
	bool auxBool = true;
	
	while(auxBool)
	{
		try{
			cin >> cantidad;
			
			if(cin.fail())
			{
				throw "error";
			}
			else{
				if((cantidad<0)||(10000<cantidad))
				{
					throw cantidad;
				}
			}
			
			auxBool = false;
		}
		catch(int &cantidad)
		{
			cout << "El valor ingresado no debe ser negativo ni exceder 10000. Intente de nuevo.\nIngrese valor: ";
		}
		catch(const char * error)
		{
			cout << "El valor ingresado debe ser de tipo numerico y ser entero. Intente de nuevo.\nIngrese valor: ";
			cin.clear();
			cin.ignore(1000,'\n');
		}
	}
	
	return cantidad;
	
}
