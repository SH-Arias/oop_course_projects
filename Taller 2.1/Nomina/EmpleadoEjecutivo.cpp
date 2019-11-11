/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: EmpleadoEjecutivo.cpp
* Descripción: archivo de implementacion de la clase Empleado Ejecutivo
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include "EmpleadoEjecutivo.h"

EmpleadoEjecutivo::EmpleadoEjecutivo(int identificacionIn, string nombreIn, int edadIn, string seccionCargo, string descripcionCargo, string codigoCargo, double basicoSalario, double comisionSalario, double primasSalario, int empleadosACargoIn, double viaticosIn):Empleado(identificacionIn, nombreIn, edadIn, seccionCargo, descripcionCargo, codigoCargo, basicoSalario, comisionSalario, primasSalario)
{
	empleadosACargo = empleadosACargoIn;
	viaticos = viaticosIn;
}
EmpleadoEjecutivo::~EmpleadoEjecutivo(){
	
}

double EmpleadoEjecutivo::getValorTotalSalarioEjecutivo(){
	return ( (Empleado::getValorTotalSalario()) + viaticos);
}
int EmpleadoEjecutivo::getNumeroEmpleadosACargo(){
	return empleadosACargo;
}
double EmpleadoEjecutivo::getViaticos(){
	return viaticos;
}
