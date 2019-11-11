/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: main.cpp
* Descripción: archivo main del punto Conversacion
* Fecha de creación: 14 / 11 / 2016
* Fecha de modificación: 14 / 11 / 2016
*/

#include <iostream>
#include <string>
#include <fstream>

#include "Store.h"
#include "Persona.h"

using namespace std;

int main(int argc, char *argv[]){
	
	Persona * persona1 = new Persona("Camilo", "30", "triste");
	Persona * persona2 = new Persona("Juan", "20", "feliz");
	Store * conversacion = new Store();
	
	ifstream archivo(argv[1]);
	
	char texto[520];
	string envio;
	string mensaje;
	
	while(archivo.getline(texto, 520)){
		envio += texto;
		for(int i=0;i<(int)envio.length();i++){
			envio[i]=tolower(envio[i]);
		}
		
		if(envio.compare("chao")==0){
			persona1->hablar(envio, "", conversacion, persona2);
			break;
		}
		else{
			archivo.getline(texto, 520);
			mensaje += texto;
			for(int i=0;i<(int)mensaje.length();i++){
				mensaje[i]=tolower(mensaje[i]);
			}
			
			persona1->hablar(envio, mensaje, conversacion, persona2);
		}
		
		envio.clear();
		mensaje.clear();
		
	}
	
	archivo.close();
	
	cout << conversacion->getDialogo();
	
}
