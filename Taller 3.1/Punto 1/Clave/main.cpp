/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: main.cpp
* Descripcion: archivo main del punto Clave
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#include "Clave.h"
#include "ClaveTexto.h"
#include "ClaveImagen.h"
#include "ClaveLlave.h"

#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
	ClaveTexto * objClaveTexto = new ClaveTexto("admin123");
	
	int imagen[][2] = {{3, 7}, {9, 8}, {4, 8}};
	ClaveImagen * objClaveImagenA = new ClaveImagen(imagen);
	ClaveImagen * objClaveImagenB = new ClaveImagen("3,7#9,8#4,8");
	
	ClaveLlave * objClaveLlaveA = new ClaveLlave("rsa", "a23f2321");
	ClaveLlave * objClaveLlaveB = new ClaveLlave("rsa#a23f2321");
	
	cout << objClaveTexto->getTextoClave() << endl;
	objClaveTexto->setTextoClave("nuevaClave");
	cout << objClaveTexto->getTextoClave() << endl << endl;
	
	cout << objClaveImagenA->getTextoClave() << endl;
	objClaveImagenA->setTextoClave("1,2#3,4#5,6");
	cout << objClaveImagenA->getTextoClave() << endl << endl;
	
	cout << objClaveImagenB->getTextoClave() << endl;
	int imagen2[][2] = {{1, 2}, {3, 4}, {5, 6}};
	objClaveImagenB->setTextoClave(imagen2);
	cout << objClaveImagenB->getTextoClave() << endl << endl;
	
	cout << objClaveLlaveA->getTextoClave() << endl;
	objClaveLlaveA->setTextoClave("ab#123123fg");
	cout << objClaveLlaveA->getTextoClave() << endl << endl;
	
	cout << objClaveLlaveB->getTextoClave() << endl;
	objClaveLlaveB->setTextoClave("ab", "123123fg");
	cout << objClaveLlaveB->getTextoClave() << endl << endl;
	
}
