/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: EmpleadoOperativo.h
* Descripción: archivo de cabecera de la clase Empleado Operativo
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#ifndef EMPLEADOOPERATIVO_H
#define EMPLEADOOPERATIVO_H

#include <string>
using std::string;

#include "Empleado.h"

class EmpleadoOperativo: public Empleado{
	
private:
	string jefeACargo;
	double auxilioTransporte;
	
public:
	EmpleadoOperativo(int identificacionIn, string nombreIn, int edadIn, string seccionCargo, string descripcionCargo, string codigoCargo, double basicoSalario, double comisionSalario, double primasSalario, string jefeACargoIn);
	~EmpleadoOperativo();
	
	double getValorTotalSalarioOperativo();
	string getJefeACargo();
	double getAuxilioTransporte();
	
};

#endif
