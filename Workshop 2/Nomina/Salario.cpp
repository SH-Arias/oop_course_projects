/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Salario.cpp
* Descripci�n: archivo de implementacion de la clase Salario
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#include "Salario.h"

Salario::Salario(double basicoIn, double comisionIn, double primasIn){
	
	basico = basicoIn;
	comision = comisionIn;
	primas = primasIn;
	
}
Salario::~Salario(){
	
}

double Salario::getBasico(){
	return basico;
}
double Salario::getComision(){
	return comision;
}
double Salario::getPrimas(){
	return primas;
}

double Salario::getValorTotal(){
	return (basico + comision + primas);
}
