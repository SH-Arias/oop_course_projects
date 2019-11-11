/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: generarPares.cpp
* Descripci�n: almacena en un archivo numerosPares.txt los n�meros pares entre
*              0 y 99998, con 15 n�meros por columna y 5 d�gitos por n�mero
* Fecha de creaci�n: 02 / 10 / 2016
* Fecha de modificaci�n: 02 / 10 / 2016
*/

#include "generarPares.h"

int main(){
	
	generarArchivo();
	
}

void generarArchivo(){
	
	ofstream output("generarPares.txt");
	
	for(int a=0; a<99999;){
		for(int b=0; b<15; b++){
			if(a<99999){
				if(a<=9){
					output << "0000" << a << " ";
				}
				else{
					if(a<=99){
						output << "000" << a << " ";
					}
					else{
						if(a<=999){
							output << "00" << a << " ";
						}
						else{
							if(a<=9999){
								output << "0" << a << " ";
							}
							else{
								output << a << " ";
							}
						}
					}
				}
				a += 2;
			}
		}
		if(a<99999){
			output << "\n";
		}
	}
	
	output.close();
	
}
