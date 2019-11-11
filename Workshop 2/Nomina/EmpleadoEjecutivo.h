/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: EmpleadoEjecutivo.h
* Descripci�n: archivo de cabecera de la clase Empleado Ejecutivo
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef EMPLEADOEJECUTIVO_H
#define EMPLEADOEJECUTIVO_H

#include <string>
using std::string;

#include "Empleado.h"

class EmpleadoEjecutivo: public Empleado{
	
private:
	int empleadosACargo;
	double viaticos;
	
public:
	EmpleadoEjecutivo(int identificacionIn, string nombreIn, int edadIn, string seccionCargo, string descripcionCargo, string codigoCargo, double basicoSalario, double comisionSalario, double primasSalario, int empleadosACargoIn, double viaticosIn);
	~EmpleadoEjecutivo();
	
	double getValorTotalSalarioEjecutivo();
	int getNumeroEmpleadosACargo();
	double getViaticos();
	
};

#endif
