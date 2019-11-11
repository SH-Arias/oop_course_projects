/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: matrices.cpp
* Descripción: examina si la matriz suministrada en un archivo de texto corresponde a un cuadrado mágico
* Fecha de creación: 01 / 10 / 2016
* Fecha de modificación: 02 / 10 / 2016
*/

#include "matrices.h"

int main(){
	
	int ** matrix;
	int matrixsize;
	vector<int> numbersInMatrix;
	int magicconstant=0;
	
	getmatrix(matrixsize, matrix);
	getvector(matrixsize, matrix, numbersInMatrix);
	findMagicConstant(matrixsize, matrix, magicconstant);
	
	cout << "La matriz ingresada:\n";
	if(isMatrixMagic(matrixsize, numbersInMatrix, matrix, magicconstant)){
		
		printMatrix(matrixsize, matrix);
		cout << "\nSí es un cuadrado mágico";
		
	}
	else{
		
		printMatrix(matrixsize, matrix);
		cout << "\nNo es un cuadrado mágico";
		
	}
	
}

void getmatrix(int &matrixsize, int ** &matrix){
	
	string filename;
	ifstream input;
	
	cout << "Ingrese el nombre del archivo que tiene la matriz:\n";
	cin >> filename;
	input.open(filename.c_str());
	
	// Repetir el pedido del nombre del archivo hasta que haya una
	// apertura satisfactoria
	while(input.fail()){
		
		input.clear();
		cout << "Archivo no encontrado, por favor intente de nuevo\n";
		cin >> filename;
		input.open(filename.c_str());
		
	}
	
	// Como matrixsize es de tipo int, este operador le asigna el valor
	// del primer int que encuentre en el archivo input.
	input >> matrixsize;
	
	// inicializar matriz o matrix//
	matrix = new int*[matrixsize];
	for(int a=0; a<matrixsize; a++){
		matrix[a]=new int[matrixsize];
	}
	
	// Extraer los enteros restantes del archivo
	for(int a=0; a<matrixsize; a++){
		for(int b=0; b<matrixsize; b++){
			input >> matrix[a][b];
		}
	}
	
	input.close();
	
}

void getvector(int matrixsize, int ** &matrix, vector<int> &numbersInMatrix){
	
	// Añade los elementos de la matriz al vector
	for(int a=0; a<matrixsize; a++){
		for(int b=0; b<matrixsize; b++){
			numbersInMatrix.push_back(matrix[a][b]);
		}
	}
	
	// Organiza los elementos del vector de manera ascendente
	sort(numbersInMatrix.begin(), numbersInMatrix.end());
	
}

void findMagicConstant(int matrixsize, int ** matrix, int &magicconstant){
	
	for(int a=0; a<matrixsize; a++){
		magicconstant += matrix[a][0];
	}
	
}

bool areNumbersInRange1_n2(int matrixsize, vector<int> &numbersInMatrix){
	
	// Retorna #false si algun elemento no está en el rango n*n
	for(int a=0; a<(int)numbersInMatrix.size(); a++){
		if((numbersInMatrix[a]<1) || (matrixsize*matrixsize<numbersInMatrix[a])){
			return false;
		}
	}
	
	return true;
	
}

bool areThereDuplicates(int matrixsize, vector<int> &numbersInMatrix){

	// Retorna #true si existen elementos repetidos en el vector
	if(unique(numbersInMatrix.begin(), numbersInMatrix.end()) != numbersInMatrix.end()){
		return true;
	}
	else{
		return false;
	}
	
}

bool magicSum(int matrixsize, int ** matrix, int &magicconstant){
	
	int checksum=0;
	
	// Evaluar la suma mágica en columnas, ignorando la primera pues de ella se extrae la constante mágica
	for(int a=1; a<matrixsize; a++){
		for(int b=0; b<matrixsize; b++){
			checksum += matrix[b][a];
		}
		if(checksum != magicconstant){
			return false;
		}
		checksum = 0;
	}
	
	// Evaluar la suma mágica en filas
	for(int a=0; a<matrixsize; a++){
		for(int b=0; b<matrixsize; b++){
			checksum += matrix[a][b];
		}
		if(checksum != magicconstant){
			return false;
		}
		checksum = 0;
	}
	
	// Evaluar la suma mágica en la primera diagonal (desde matrix[0][0])
	for(int a=0; a<matrixsize; a++){
		checksum += matrix[a][a];
	}
	if(checksum != magicconstant){
		return false;
	}
	checksum = 0;
	
	// Evaluar la suma mágica en la segunda diagonal (desde matrix[matrixsize-1][matrixsize-1])
	for(int a=0, b=matrixsize-1; a<matrixsize; a++, b--){
		checksum += matrix[a][b];
	}
	if(checksum != magicconstant){
		return false;
	}
	
	return true;
	
}

bool isMatrixMagic(int matrixsize, vector<int> &numbersInMatrix, int ** matrix, int &magicconstant){
	
	if(!areNumbersInRange1_n2(matrixsize, numbersInMatrix)){
		return false;
	}
	else{
		if(areThereDuplicates(matrixsize, numbersInMatrix)){
			return false;
		}
		else{
			if(!magicSum(matrixsize, matrix, magicconstant)){
				return false;
			}
			else{
				return true;
			}
		}
	}
	
}

void printMatrix(int matrixsize, int ** matrix){
	
	for(int a=0; a<matrixsize; a++){
		for(int b=0; b<matrixsize; b++){
			cout << matrix[a][b] << "\t";
		}
		cout << endl;
	}
	
}
