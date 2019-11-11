/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: main.cpp
* Descripción: archivo main.cpp del punto triqui
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include <iostream>
#include <string>
#include "Jugador.h"
#include "Tablero.h"

using namespace std;

void askForInput(int turno, int &row, int &column);

int main(int argc, char * argv[]){
	
	Tablero * board1 = new Tablero();
	Jugador * jugadores = new Jugador();
	
	board1->initializeBoard();
	int turno = 1;
	int row, column;
	
	while((!board1->gameOver())&&(turno!=10)){
		
		cout << board1->printBoard();
		askForInput(turno, row, column);
		
		while(!board1->isPlayOkay(row, column)){
			if(board1->isInputValid(row, column)){
				cout << "La entrada ya fue marcada. Intente de nuevo.\n";
			}
			else{
				cout << "Fila o columna inválida (Rango [1, 3]). Intente de nuevo.\n";
			}
			
			askForInput(turno, row, column);
			
		}
		
		if(turno%2!=0){
			jugadores->jugar('X', row, column, board1);
		}
		else{
			jugadores->jugar('O', row, column, board1);
		}
		
		turno++;
		
	}
	
	cout << board1->printBoard();
	
	if((turno==10)&&(!board1->gameOver())){
		cout << "Empate\n";
	}
	else{
		if(turno%2==0){
			cout << "Gana Jugador 1\n";
		}
		else{
			cout << "Gana Jugador 2\n";
		}
	}
	
}

void askForInput(int turno, int &row, int &column){
	
	if(turno%2!=0){
		cout << "Jugador 1 (X)\nIngrese fila\n";
		cin >> row;
		cout << "Ingrese columna\n";
		cin >> column;
	}
	else{
		cout << "Jugador 2 (O)\nIngrese fila\n";
		cin >> row;
		cout << "Ingrese columna\n";
		cin >> column;
	}
	
}
