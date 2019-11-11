/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: triqui.cpp
* Descripción: juego de triqui para dos personas
* Fecha de creación: 02 / 10 / 2016
* Fecha de modificación: 02 / 10 / 2016
*/

#include "triqui.h"

int main(){
	
	char ** matrix;
	int turno = 1;
	int row, column;
	
	initializeMatrix(matrix);
	
	do{
		
		if(turno == 10){
			printMatrix(matrix);
			cout << "Empate\n";
			return 0;
		}
		
		printMatrix(matrix);
		
		// Solicitar fila y columna de la jugada
		askForInput(turno, row, column);
		// Validar rango de argumentos
		while(!isInputValid(row, column)){
			cout << "Fila o columna inválida (Rango [1, 3]). Intente de nuevo.\n";
			askForInput(turno, row, column);
		}
		// Validar disponibilidad de entrada
		while(!isInputAvailable(row, column, matrix)){
			cout << "La entrada ya fue marcada. Intente de nuevo.\n";
			askForInput(turno, row, column);
		}
		// Cambiar la matriz con argumentos válidos
		changeMatrix(turno, row, column, matrix);
		
		turno++;
		
	} while(!triqui(matrix));
	
	printMatrix(matrix);
	if(turno%2==0){
		cout << "Gana Jugador 1\n";
	}
	else{
		cout << "Gana Jugador 2\n";
	}
	
}

void initializeMatrix(char ** &matrix){
	
	// Inicializar matrix como un arreglo 2D de 9 datos char
	matrix = new char*[3];
	for(int a=0; a<3; a++){
		matrix[a] = new char[3];
	}
	
	// Llenar entradas con el caracter '-'
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			matrix[a][b] = '-';
		}
	}
	
}

void printMatrix(char ** &matrix){
	
	cout << "***************************\n";
	cout << "*Estado del juego         *\n";
	cout << "***************************\n";
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			cout << "| " << matrix[a][b] << " ";
		}
		cout << "|\n";
	}
	cout << "***************************\n";
	
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

bool isInputValid(int row, int column){
	
	if((row<1) || (3<row) || (column<1) || (3<column)){
		return false;
	}
	else{
		return true;
	}
	
}

bool isInputAvailable(int row, int column, char ** matrix){
	
	if(matrix[row-1][column-1]=='-'){
		return true;
	}
	else{
		return false;
	}
	
}

void changeMatrix(int turno, int row, int column, char ** &matrix){
	
	if(turno%2!=0){
		matrix[row-1][column-1]='X';
	}
	else{
		matrix[row-1][column-1]='O';
	}
	
}

bool triqui(char ** matrix){
	
	// Verificar igualdad en columnas - filas
	for(int a=0; a<3; a++){
		if((matrix[0][a] == matrix[1][a]) && (matrix[0][a] == matrix[2][a]) && (matrix[0][a] != '-')){
			return true;
		}
		else{
			if((matrix[a][0] == matrix[a][1]) && (matrix[a][0] == matrix[a][2])&& (matrix[a][0] != '-')){
				return true;
			}
		}
	}
	// Verificar igualdad en la primera diagonal (desde matrix[0][0])
	// Sino se cumple, verificar en la segunda. De no ocurrir en la
	// segunda diagonal, no hay triqui
	if((matrix[0][0] == matrix[1][1]) && (matrix[0][0] == matrix[2][2]) && (matrix[0][0] != '-')){
		return true;
	}
	else{
		if((matrix[0][2] == matrix[1][1]) && (matrix[0][2] == matrix[2][0]) && (matrix[0][2] != '-')){
			return true;
		}
		else{
			return false;
		}
	}
	
}
