/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Empleado.h
* Descripci�n: archivo de cabecera de la clase Empleado
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using std::string;

#include "Cargo.h"
#include "Salario.h"

class Empleado{
	
protected:
	int identificacion;
	string nombre;
	int edad;
	Cargo * objCargo; //Objetos de composicion trabajados en forma dinamica para optimzar memoria
	Salario * objSalario;
	
public:
	Empleado(int identificacionIn, string nombreIn, int edadIn, string seccionCargo, string descripcionCargo, string codigoCargo, double basicoSalario, double comisionSalario, double primasSalario);
	~Empleado();
	
	int getIdentificacion();
	string getNombre();
	int getEdad();
	
	double getValorTotalSalario();
	double getSalarioBasico();
	double getSalarioComision();
	double getSalarioPrimas();
	
	string getDescripcionCargo();
	
};

#endif
