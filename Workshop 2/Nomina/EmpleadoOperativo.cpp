/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: EmpleadoOperativo.cpp
* Descripción: archivo de implementacion de la clase Empleado Operativo
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "EmpleadoOperativo.h"

EmpleadoOperativo::EmpleadoOperativo(int identificacionIn, string nombreIn, int edadIn, string seccionCargo, string descripcionCargo, string codigoCargo, double basicoSalario, double comisionSalario, double primasSalario, string jefeACargoIn):Empleado(identificacionIn, nombreIn, edadIn, seccionCargo, descripcionCargo, codigoCargo, basicoSalario, comisionSalario, primasSalario)
{
	jefeACargo = jefeACargoIn;
	auxilioTransporte = basicoSalario*0.15;
}
EmpleadoOperativo::~EmpleadoOperativo(){
	
}

double EmpleadoOperativo::getValorTotalSalarioOperativo(){
	return ( (Empleado::getValorTotalSalario()) + auxilioTransporte);
}

string EmpleadoOperativo::getJefeACargo(){
	return jefeACargo;
}
double EmpleadoOperativo::getAuxilioTransporte(){
	return auxilioTransporte;
}
