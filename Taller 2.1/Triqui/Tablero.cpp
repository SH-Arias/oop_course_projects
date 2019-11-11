/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Tablero.cpp
* Descripción: archivo de implementacion de la clase Tablero
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "Tablero.h"

Tablero::Tablero(){
	
	board = 0;
	
}
Tablero::~Tablero(){
	
}

void Tablero::initializeBoard(){
	
	// Inicializar board como un arreglo 2D de 9 datos char(punteros que apuntan a char)
	board = new char*[3];
	for(int a = 0; a<3; a++){
		board[a] = new char[3];
	}
	
	// Llenar entradas con el caracter '-'
	for(int a = 0; a<3; a++){
		for(int b = 0; b<3; b++){
			board[a][b] = '-';
		}
	}
	
}


//JUGAR////////////////////////////////////
bool Tablero::isInputValid(int row, int column){
	
	if((row<1) || (3<row) || (column<1) || (3<column)){
		return false;
	}
	else{
		return true;
	}
	
}
bool Tablero::isInputAvailable(int row, int column){
	
	if(board[row-1][column-1]=='-'){
		return true;
	}
	else{
		return false;
	}
	
}
bool Tablero::isPlayOkay(int row, int column){
	if(Tablero::isInputValid(row, column)){
		if(Tablero::isInputAvailable(row, column)){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}

void Tablero::changeBoard(char message, int row, int column){
	
	board[row-1][column-1] = message;
	
}

////////////////////////////////
string Tablero::printBoard(){
	
	string printing = "***************************\n*Estado del juego         *\n***************************\n";
	
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			printing += "| ";
			printing += board[a][b];
			printing += " ";
		}
		printing += "|\n";
	}
	
	printing += "***************************\n";
	
	return printing;
	
}

bool Tablero::gameOver(){
	
	// Verificar igualdad en columnas - filas
	for(int a=0; a<3; a++){
		if((board[0][a] == board[1][a]) && (board[0][a] == board[2][a]) && (board[0][a] != '-')){
			return true;
		}
		else{
			if((board[a][0] == board[a][1]) && (board[a][0] == board[a][2])&& (board[a][0] != '-')){
				return true;
			}
		}
	}
	// Verificar igualdad en la primera diagonal (desde board[0][0])
	// Sino se cumple, verificar en la segunda. De no ocurrir en la
	// segunda diagonal, no hay triqui
	if((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]) && (board[0][0] != '-')){
		return true;
	}
	else{
		if((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]) && (board[0][2] != '-')){
			return true;
		}
		else{
			return false;
		}
	}
	
}
