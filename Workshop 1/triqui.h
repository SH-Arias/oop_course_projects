#ifndef TRIQUI_H
#define TRIQUI_H

#include <iostream>

using namespace std;

void initializeMatrix(char ** &matrix);
void printMatrix(char ** &matrix);
void askForInput(int turno, int &row, int &column);
bool isInputValid(int row, int column);
bool isInputAvailable(int row, int column, char ** matrix);
void changeMatrix(int turno, int row, int column, char ** &matrix);
bool triqui(char ** matrix);

#endif
