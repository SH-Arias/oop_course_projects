/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Jugador.h
* Descripción: archivo de cabecera de la clase Jugador
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
