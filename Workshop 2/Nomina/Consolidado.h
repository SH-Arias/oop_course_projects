/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* Nombre: Consolidado.h
* Descripcion: archivo de cabecera de la clase Consolidado
* Fecha de creacion: 5 / 11 / 2016
* Fecha de modificacion: 5 / 11 / 2016
*/

#ifndef CONSOLIDADO_H
#define CONSOLIDADO_H

#include <string>
using std::string;

class Consolidado{
	
private:
	int totalEjecutivos;
	double totalSalarioEjecutivos;
	int totalOperativos;
	double totalSalariosOperativos;
	
public:
	Consolidado();
	~Consolidado();
	
	void sumar1ATotalEmpleadosEjecutivos();
	void sumarASalariosEjecutivos(double monto);
	
	void sumar1ATotalEmpleadosOperativos();
	void sumarASalariosOperativos(double monto);
	
	int getTotalEjecutivos();
	double getTotalSalariosEjecutivos();
	double getPromedioSalariosEjecutivos();
	
	int getTotalOperativos();
	double getTotalSalariosOperativos();
	double getPromedioSalariosOperativos();
	
};

#endif
