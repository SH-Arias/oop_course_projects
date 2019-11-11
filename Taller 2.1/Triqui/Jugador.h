/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Jugador.h
* Descripci�n: archivo de cabecera de la clase Jugador
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef JUGADOR_H
#define JUGADOR_H
#include "Tablero.h"

class Jugador{
	
private:
	
public:
	Jugador();
	~Jugador();
	
	void jugar(char message, int newRow, int newColumn, Tablero * &board);
	
};

#endif
