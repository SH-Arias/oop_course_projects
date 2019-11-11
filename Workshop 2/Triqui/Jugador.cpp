/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Jugador.cpp
* Descripción: archivo de implementacion de la clase Jugador
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "Jugador.h"

Jugador::Jugador(){
	
}

Jugador::~Jugador(){
	
}

void Jugador::jugar(char message, int newRow, int newColumn, Tablero * &board){
	
	board->changeBoard(message, newRow, newColumn);
	
}
