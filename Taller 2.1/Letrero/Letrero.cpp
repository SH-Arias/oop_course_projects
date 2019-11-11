/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Letrero.cpp
* Descripción: archivo de implementacion de la clase Letrero
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "Letrero.h"

Letrero::Letrero(string messageIn){
	message = messageIn;
}
Letrero::~Letrero(){
	
}

void Letrero::toUpperMessage(){
	
	string clave;
	
	for(int a=0; (unsigned)a<message.length(); a++){
		if ( (((int) message[a]) >= 97) && (((int) message[a]) <= 122) ) {
			clave += ( (char) ((int) message[a] - 32) );
		}
		else {
			clave += message[a];
		}
	}
	
	message = clave;
	
}

string Letrero::printMessage(){
	
	string auxmessage = "       ";
	auxmessage += message;
	auxmessage += "        ";
	
	string impression;
	int posn = 0;
	
	impression.append("**********\n");
	for(int a=0; (unsigned)a<(auxmessage.length() - 7); a++){
		impression.append("*");
		for(int b=0; b<8; b++){
			impression += auxmessage[posn];
			posn += 1;
		}
		impression.append("*\n");
		posn = a+1;
	}
	impression.append("**********\n");
	return impression;
	
}
