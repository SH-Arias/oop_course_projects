/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* Nombre: Consolidado.cpp
* Descripcion: archivo de implementacion de la clase Consolidado
* Fecha de creacion: 5 / 11 / 2016
* Fecha de modificacion: 5 / 11 / 2016
*/

#include "Consolidado.h"

Consolidado::Consolidado(){
	
	totalEjecutivos = 0;
	totalSalarioEjecutivos = 0;
	totalOperativos = 0;
	totalSalariosOperativos = 0;
	
}
Consolidado::~Consolidado(){
	
}

void Consolidado::sumar1ATotalEmpleadosEjecutivos(){
	totalEjecutivos += 1;
}
void Consolidado::sumarASalariosEjecutivos(double monto){
	totalSalarioEjecutivos += monto;
}

void Consolidado::sumar1ATotalEmpleadosOperativos(){
	totalOperativos += 1;
}
void Consolidado::sumarASalariosOperativos(double monto){
	totalSalariosOperativos += monto;
}
///////////////////////////////////////////////////////////
int Consolidado::getTotalEjecutivos(){
	return totalEjecutivos;
}
double Consolidado::getTotalSalariosEjecutivos(){
	return totalSalarioEjecutivos;
}
double Consolidado::getPromedioSalariosEjecutivos(){
	if(totalEjecutivos == 0){
		return 0;
	}
	else{
		return (totalSalarioEjecutivos / totalEjecutivos);
	}
}
///////////////////////////////////////////////////////////
int Consolidado::getTotalOperativos(){
	return totalOperativos;
}
double Consolidado::getTotalSalariosOperativos(){
	return totalSalariosOperativos;
}
double Consolidado::getPromedioSalariosOperativos(){
	if(totalOperativos == 0){
		return 0;
	}
	else{
		return (totalSalariosOperativos / totalOperativos);
	}
}
