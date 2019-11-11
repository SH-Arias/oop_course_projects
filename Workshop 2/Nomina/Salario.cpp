/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Salario.cpp
* Descripción: archivo de implementacion de la clase Salario
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
