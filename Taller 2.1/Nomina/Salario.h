/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: Salario.h
* Descripción: archivo de cabecera de la clase Salario
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
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
