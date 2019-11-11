/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Jugador.cpp
* Descripci�n: archivo de implementacion de la clase Jugador
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#include "Jugador.h"

Jugador::Jugador(){
	
}

Jugador::~Jugador(){
	
}

void Jugador::jugar(char message, int newRow, int newColumn, Tablero * &board){
	
	board->changeBoard(message, newRow, newColumn);
	
}
