/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: EmpleadoEjecutivo.h
* Descripción: archivo de cabecera de la clase Empleado Ejecutivo
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
