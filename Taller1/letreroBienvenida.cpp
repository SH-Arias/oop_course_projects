/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: letreroBienvenida.cpp
* Descripción: Este programa simula un letrero luminoso
* Fecha de creación: 03 / 10 / 2016
* Fecha de modificación: 03 / 10 / 2016
*/

#include "letreroBienvenida.h"

int main(){
	
	generarLetrero();
	
}

void generarLetrero(){
	
	char letrero[37] = "       SACARÉ IPOO EN 5.0 :)        ";
	int posn = 0;
	
	cout << "**********\n";
	for(int a=0; a<29; a++){
		cout << "*";
		for(int b=0; b<8; b++){
			cout << letrero[posn];
			posn += 1;
		}
		cout << "*";
		cout << endl;
		posn = a+1;
	}
	cout << "**********";
	
}
