/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Persona.cpp
* Descripción: archivo de implementacion de la clase Persona
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "Persona.h"

Persona::Persona(string nombreIn, string edadIn, string estadoAnimoIn){
	nombre = nombreIn;
	edad = edadIn;
	estadoAnimo = estadoAnimoIn;
}
Persona::~Persona(){
	
}

void Persona::responder(string envio, string mensaje, Store * &storeIn){
	
	int caso;
	if(envio.compare("hola")==0){
		caso = 1;
	}
	else{
		if(envio.compare("chao")==0){
			caso = 2;
		}
		else{
			if(envio.compare("¿como vas?")==0){
				caso = 3;
			}
			else{
				if(envio.compare("¿tu edad?")==0){
					caso = 4;
				}
				else{
					caso = 0;
				}
			}
		}
	}
	
	string linea = "";
	
	switch(caso){
		
	case 1:
		
		linea += "hola, me llamo ";
		linea += nombre;
		linea += " ";
		linea += mensaje;
		
		break;
		
	case 2:
		
		linea += "chao";
		
		break;
		
	case 3:
		
		linea += estadoAnimo;
		linea += " ";
		linea += mensaje;
		
		break;
		
	case 4:
		
		linea += edad;
		linea += " ";
		linea += mensaje;
		
		break;
		
	default:
		
		linea += mensaje;
		
	}
	
	storeIn->introducirLineaADialogo(linea);
	
}
void Persona::hablar(string envio, string mensaje, Store * &storeIn, Persona * &receptor){
	
	storeIn->introducirLineaADialogo(envio);
	receptor->responder(envio, mensaje, storeIn);
	
}
