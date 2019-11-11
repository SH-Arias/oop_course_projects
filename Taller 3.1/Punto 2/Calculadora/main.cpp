/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: main.cpp
* Descripcion: archivo main del punto Calculadora
* Fecha de creacion: 25 / 11 / 2016
* Fecha de modificacion: 25 / 11 / 2016
*/

#include "Calculadora.h"

#include <iostream>

using namespace std;

///// DECLARACIONES DE FUNCIONES

int obtenerOperacion();
double obtenerValorAOperar();
void Operar(int operacion, double a, double b, Calculadora * &objCalculadora);

///// FUNCION MAIN

int main(int argc, char * argv[])
{
	
	Calculadora * objCalculadora = new Calculadora();
	
	cout << "*** KADIO CALCULADORA ***\n";
	cout << "1. Sumar\n";
	cout << "2. Restar\n";
	cout << "3. Multiplicar\n";
	cout << "4. Dividir\n";
	
	cout << "Ingrese la operacion que desea realizar: ";
	int operacion = obtenerOperacion();
	
	cout << "\nIngrese el primer valor: ";
	double valorA = obtenerValorAOperar();
	
	cout << "\nIngrese el segundo valor: ";
	double valorB = obtenerValorAOperar();
	
	Operar(operacion, valorA, valorB, objCalculadora);
	
}

///// IMPLEMENTACIONES DE FUNCIONES

int obtenerOperacion()
{
	
	int operacion;
	bool auxBool = true;
	
	while(auxBool)
	{
		try{
			cin >> operacion;
			
			if(cin.fail())
			{
				throw "error";
			}
			else{
				if((operacion<1)||(4<operacion))
				{
					throw operacion;
				}
			}
			
			auxBool = false;
		}
		catch(int &cantidad)
		{
			cout << "El valor ingresado debe estar entre 1 y 4. Intente de nuevo.\nIngrese valor: ";
		}
		catch(const char * error)
		{
			cout << "El valor ingresado debe ser de tipo numerico y ser entero entre 1 y 4. Intente de nuevo.\nIngrese valor: ";
			cin.clear();
			cin.ignore(1000,'\n');
		}
	}
	
	return operacion;
	
}
double obtenerValorAOperar()
{
	double valor;
	bool auxBool = true;
	
	while(auxBool)
	{
		try{
			cin >> valor;
			
			if(cin.fail())
			{
				throw "error";
			}
			
			auxBool = false;
		}
		catch(const char * error)
		{
			cout << "El valor ingresado debe ser de tipo numerico. Intente de nuevo.\nIngrese valor: ";
			cin.clear();
			cin.ignore(1000,'\n');
		}
	}
	
	return valor;
}

void Operar(int operacion, double a, double b, Calculadora * &objCalculadora)
{
	
	double resultado;
	
	switch(operacion)
	{
		
	case 1:
		resultado = objCalculadora->sumar(a, b);
		cout << "suma: " << resultado << " \n";
		break;
		
	case 2:
		resultado = objCalculadora->restar(a, b);
		cout << "resta: " << resultado << " \n";
		break;
		
	case 3:
		resultado = objCalculadora->multiplicar(a, b);
		cout << "multiplicacion: " << resultado << " \n";
		break;
		
	case 4:
		try{
			if(b==0)
			{
				throw b;
			}
			
			resultado = objCalculadora->dividir(a, b);
			cout << "division: " << resultado << " \n";
		}
		catch(double &b)
		{
			cout << "Error: division por 0\n";
		}
		break;
	}
	
}
