/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Tablero.h
* Descripción: archivo de cabecera de la clase Tablero
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#ifndef TABLERO_H
#define TABLERO_H

#include <string>
using std::string;

class Tablero{
	
private:
	char ** board;

public:
	Tablero();
	~Tablero();
	
	void initializeBoard();
	
	//JUGAR///////////////////////////////
	bool isInputValid(int row, int column);
	bool isInputAvailable(int row, int column);
	bool isPlayOkay(int row, int column);
	void changeBoard(char message, int row, int column);
	/////////////////////////////////////
	
	string printBoard();

	bool gameOver();
	
};

#endif
