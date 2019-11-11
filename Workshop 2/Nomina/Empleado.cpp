/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Empleado.cpp
* Descripci�n: archivo de implementacion de la clase Empleado
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#include "Empleado.h"

Empleado::Empleado(int identificacionIn, string nombreIn, int edadIn, string seccionCargo, string descripcionCargo, string codigoCargo, double basicoSalario, double comisionSalario, double primasSalario){
	
	identificacion = identificacionIn;
	nombre = nombreIn;
	edad = edadIn;
	objCargo = new Cargo(seccionCargo, descripcionCargo, codigoCargo);
	objSalario = new Salario(basicoSalario, comisionSalario, primasSalario);
	
}
Empleado::~Empleado(){
	
}

int Empleado::getIdentificacion(){
	return identificacion;
}
string Empleado::getNombre(){
	return nombre;
}
int Empleado::getEdad(){
	return edad;
}

double Empleado::getValorTotalSalario(){
	return objSalario->getValorTotal();
}
double Empleado::getSalarioBasico(){
	return objSalario->getBasico();
}
double Empleado::getSalarioComision(){
	return objSalario->getComision();
}
double Empleado::getSalarioPrimas(){
	return objSalario->getPrimas();
}

string Empleado::getDescripcionCargo(){
	return objCargo->getDescripcionCargo();
}
