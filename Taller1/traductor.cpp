/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: traductor.cpp
* Descripci�n: traduce palabras ingresadas a partir de una base predefinida. Ignora mayúsculas y minúsculas
* Fecha de creaci�n: 07 / 10 / 2016
* Fecha de modificaci�n: 08 / 10 / 2016
*/

#include "traductor.h"

int main(){
	
	string diccionario[][2]={{"ANCIENT", "Antiguo"}, {"BRANCH", "Rama"}, {"CASTLE", "Castillo"}, {"DRIZZLE", "Llovizna"}, {"ESSAY", "Ensayo"}, {"FLAME", "Llama"}, {"GHOST", "Fantasma"}, {"HOPE", "Esperanza"}, {"INK", "Tinta"}, {"SWARM", "Enjambre"}};
	string clave;
	
	getClave(clave);
	translate(clave, diccionario);
	
}

void getClave(string &clave){
	
	string input;
	
	cout << "Por favor ingrese la palabra que desea buscar en el diccionario: \n";
	cin >> input;
	
	for(int a=0; (unsigned)a<input.length(); a++){
		if ( (((int) input[a]) >= 97) && (((int) input[a]) <= 122) ) {
			clave += ( (char) ((int) input[a] - 32) );
		}
		else {
			clave += input[a];
		}
	}
	
}

void translate(string clave, string diccionario[][2]){
	
	for(int a=0; a<=10; a++){
		
		if(a==10){
			cout << "La palabra no existe en el diccionario\n";
		}
		else{
			if((clave.compare(diccionario[a][0]))==0){
				cout << "Traduce: " << diccionario[a][1] << ".\n";
				break;
			}
		}
		
	}
	
}
