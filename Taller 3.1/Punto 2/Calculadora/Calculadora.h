/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: Calculadora.h
* Descripcion: archivo de cabecera de la clase Calculadora
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora{
	
private:
	
public:
	Calculadora();
	~Calculadora();
	
	double sumar(double a, double b);
	double restar(double a, double b);
	
	double multiplicar(double a, double b);
	double dividir(double a, double b);
	
};

#endif
