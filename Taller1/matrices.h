#ifndef MATRICES_H
#define MATRICES_H

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

void getmatrix(int &matrixsize, int ** &matrix);
void getvector(int matrixsize, int ** &matrix, vector<int> &numbersInMatrix);
void findMagicConstant(int matrixsize, int ** matrix, int &magicconstant);
bool areNumbersInRange1_n2(int matrixsize, vector<int> &numbersInMatrix);
bool areThereDuplicates(int matrixsize, vector<int> &numbersInMatrix);
bool magicSum(int matrixsize, int ** matrix, int &magicconstant);
bool isMatrixMagic(int matrixsize, vector<int> &numbersInMatrix, int ** matrix, int &magicconstant);
void printMatrix(int matrixsize, int ** matrix);

#endif
