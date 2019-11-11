/*
* Autores:
*	Santiago Hern�ndez Arias C�digo 1631281
* Nombre: Salario.h
* Descripci�n: archivo de cabecera de la clase Salario
* Fecha de creaci�n: 5 / 11 / 2016
* Fecha de modificaci�n: 5 / 11 / 2016
*/

#ifndef SALARIO_H
#define SALARIO_H

class Salario{
	
private:
	double basico;
	double comision;
	double primas;
	
public:
	Salario(double basicoIn, double comisionIn, double primasIn);
	~Salario();
	
	double getBasico();
	double getComision();
	double getPrimas();
	
	double getValorTotal();
	
};

#endif
