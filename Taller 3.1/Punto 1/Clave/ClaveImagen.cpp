/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: ClaveImagen.cpp
* Descripción: archivo de implementacion de la clase ClaveImagen
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#include "ClaveImagen.h"

ClaveImagen::ClaveImagen(string textoClave):Clave()
{
	ClaveImagen::setTextoClave(textoClave);
}
ClaveImagen::ClaveImagen(int imagen[3][2]):Clave()
{
	ClaveImagen::setTextoClave(imagen);
}
ClaveImagen::~ClaveImagen()
{
	
}

string ClaveImagen::imgIntoTxt(int imagen[3][2])
{
	string textoClave = "";
	
	int k;
	char c;
	
	for(int a = 0; a<3; a++)
	{
		for(int b = 0; b<2; b++)
		{
			k = imagen[a][b];
			c = k + '0';
			textoClave += c;
			
			if(b==0)
			{
				textoClave += ",";
			}
		}
		
		if((a==0)||(a==1))
		{
			textoClave += "#";
		}
	}
	
	return textoClave;
	
}


void ClaveImagen::setTextoClave(string textoClave)
{
	int posn = 0;
	int k;
	char c;
	
	for(int a = 0; a<3; a++)
	{
		for(int b = 0; b<2; b++)
		{
			c = textoClave[posn] - '0';
			k = c;
			
			imagen[a][b] = c;
			
			posn += 2;
		}
	}
	
	this->textoClave = textoClave;
}
void ClaveImagen::setTextoClave(int imagen[3][2])
{
	this->textoClave = ClaveImagen::imgIntoTxt(imagen);
	
	for(int a = 0; a<3; a++)
	{
		for(int b = 0; b<2; b++)
		{
			this->imagen[a][b] = imagen[a][b];
		}
	}
}
