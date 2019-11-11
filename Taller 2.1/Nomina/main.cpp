/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: main.cpp
* Descripción: archivo main.cpp del punto nomina
* Fecha de creación: 5 / 11 / 2016
* Fecha de modificación: 5 / 11 / 2016
*/

#include <iostream>
#include <vector>
#include <string>

#include "Cargo.h"
#include "Consolidado.h"
#include "Empleado.h"
#include "EmpleadoEjecutivo.h"
#include "EmpleadoOperativo.h"
#include "Salario.h"

using namespace std;

////////////////////////////////////////////// DECLARACIONES DE FUNCIONES

void showmenu();
void adicionar(vector<EmpleadoEjecutivo*> &vectorEmpleadosEjecutivos, vector<EmpleadoOperativo*> &vectorEmpleadosOperativos, Consolidado * &consolidadoSalarios);
void consultar(vector<EmpleadoEjecutivo*> &vectorEmpleadosEjecutivos, vector<EmpleadoOperativo*> &vectorEmpleadosOperativos);
void mostrarInformes(Consolidado * &consolidadoSalarios);
void gestion(int selector, vector<EmpleadoEjecutivo*> &vectorEmpleadosEjecutivos, vector<EmpleadoOperativo*> &vectorEmpleadosOperativos, Consolidado * &consolidadoSalarios);

////////////////////////////////////////////// MAIN

int main(int argc, char * argv[]){
	
	vector<EmpleadoEjecutivo*> vectorEmpleadosEjecutivos;
	vector<EmpleadoOperativo*> vectorEmpleadosOperativos;
	
	Consolidado * consolidadoSalarios = new Consolidado();
	
	int selector = 0;
	
	do{
		showmenu();
		cin >> selector;
		gestion(selector, vectorEmpleadosEjecutivos, vectorEmpleadosOperativos, consolidadoSalarios);
	} while(selector != 4);
	
	return 0;
	
}

////////////////////////////////////////////// IMPLEMENTACIONES DE FUNCIONES

void showmenu(){
	cout << "***************************\n";
	cout << "*  BIENVENIDO A UVNOMINA  *\n";
	cout << "***************************\n";
	cout << "*Seleccione una opcion    *\n";
	cout << "*1. Ingresar un empleado  *\n";
	cout << "*2. Consultar un empleado *\n";
	cout << "*3. Informes              *\n";
	cout << "*4. Salir                 *\n";
	cout << "***************************\n";
	cout << "Ingrese su opcion: ";
}

void adicionar(vector<EmpleadoEjecutivo*> &vectorEmpleadosEjecutivos, vector<EmpleadoOperativo*> &vectorEmpleadosOperativos, Consolidado * &consolidadoSalarios){
	
	int tipo;
	int identificacion;
	
	if((vectorEmpleadosEjecutivos.size() + vectorEmpleadosOperativos.size())==0){
		identificacion = 0;
	}
	else{
		identificacion = ( (vectorEmpleadosEjecutivos.size() + vectorEmpleadosOperativos.size()) );
	}
	
	string nombre;
	int edad;
	
	string seccionCargo;
	string descripcionCargo;
	string codigoCargo;
	
	double basicoSalario;
	double comisionSalario;
	double primasSalario;
	
	///// PARA EMPLEADOS EJECUTIVOS
	int empleadosACargo = 0;
	double viaticos = 0;
	
	///// PARA EMPLEADOS OPERATIVOS
	string jefeACargo;
	
	cout << "*****************************\n";
	cout << "*Ingrese el tipo de empleado*\n";
	cout << "*****************************\n";
	cout << "1. Ejecutivo\n";
	cout << "2. Operativo\n";
	cout << "Seleccione el tipo de empleado a ingresar: ";
	cin >> tipo;
	
	if( (tipo ==1) || (tipo ==2)){
		cout << "Ingrese el nombre del empleado:\n";
		cin >> nombre;
		
		cout << "Ingrese la edad del empleado:\n";
		cin >> edad;
		
		cout << "Ingrese la seccion del cargo del empleado:\n";
		cin >> seccionCargo;
		
		cout << "Ingrese la descripcion del cargo del empleado:\n";
		cin >> descripcionCargo;
		
		cout << "Ingrese el codigo del cargo del empleado:\n";
		cin >> codigoCargo;
		
		cout << "Ingrese el monto basico del salario del empleado:\n";
		cin >> basicoSalario;
		
		cout << "Ingrese las comisiones del salario del empleado:\n";
		cin >> comisionSalario;
		
		cout << "Ingrese las primas del salario del empleado:\n";
		cin >> primasSalario;
		
		if(tipo==1){
			cout << "Ingrese el numero de empleados a cargo:\n";
			cin >> empleadosACargo;
			cout << "Ingrese el monto de los viaticos:\n";
			cin >> viaticos;
			
			EmpleadoEjecutivo * objEmpleadoEjecutivo = new EmpleadoEjecutivo(identificacion, nombre, edad, seccionCargo, descripcionCargo, codigoCargo, basicoSalario, comisionSalario, primasSalario, empleadosACargo, viaticos);
			
			vectorEmpleadosEjecutivos.push_back(objEmpleadoEjecutivo);
			
			consolidadoSalarios->sumar1ATotalEmpleadosEjecutivos();
			consolidadoSalarios->sumarASalariosEjecutivos(objEmpleadoEjecutivo->getValorTotalSalarioEjecutivo());
		}
		else{
			cout << "Ingrese el jefe a cargo del empleado:\n";
			cin >> jefeACargo;
			
			EmpleadoOperativo * objEmpleadoOperativo = new EmpleadoOperativo(identificacion, nombre, edad, seccionCargo, descripcionCargo, codigoCargo, basicoSalario, comisionSalario, primasSalario, jefeACargo);
			
			vectorEmpleadosOperativos.push_back(objEmpleadoOperativo);
			
			consolidadoSalarios->sumar1ATotalEmpleadosOperativos();
			consolidadoSalarios->sumarASalariosOperativos(objEmpleadoOperativo->getValorTotalSalarioOperativo());
		}
		cout << "Insercion exitosa.\n";
	}
	else{
		cout << "Opcion invalida\n";
	}
	
}

void consultar(vector<EmpleadoEjecutivo*> &vectorEmpleadosEjecutivos, vector<EmpleadoOperativo*> &vectorEmpleadosOperativos){
	
	int rango = vectorEmpleadosEjecutivos.size() + vectorEmpleadosOperativos.size();
	int identificacion;
	int flag = 0;
	
	if(rango != 0){
		cout << "Ingrese la identificacion del empleado:\n";
		cin >> identificacion;
		
		for(int a = 0; a < (int) vectorEmpleadosEjecutivos.size(); a++){
			if(identificacion == (vectorEmpleadosEjecutivos[a]->getIdentificacion()) ){
				cout << "***************************\n";
				cout << "*  BIENVENIDO A UVNOMINA  *\n";
				cout << "***************************\n";
				cout << "*     DATOS EMPLEADO      *\n";
				cout << "***************************\n";
				
				cout << "* Nombre: " << vectorEmpleadosEjecutivos[a]->getNombre() << endl;
				cout << "* Empleado Ejecutivo\n";
				cout << "* Edad: " << vectorEmpleadosEjecutivos[a]->getEdad() << endl;
				cout << vectorEmpleadosEjecutivos[a]->getDescripcionCargo();
				cout << "* Numero de empleados a cargo: " << vectorEmpleadosEjecutivos[a]->getNumeroEmpleadosACargo() << endl;
				
				cout << "***************************\n";
				cout << "*         SALARIO         *\n";
				cout << "***************************\n";
				cout << "* Basico: " << vectorEmpleadosEjecutivos[a]->getSalarioBasico() << endl;
				cout << "* Comision: " << vectorEmpleadosEjecutivos[a]->getSalarioComision() << endl;
				cout << "* Prima-extralegal: " << vectorEmpleadosEjecutivos[a]->getSalarioPrimas() << endl;
				cout << "* Viaticos: " << vectorEmpleadosEjecutivos[a]->getViaticos() << endl;
				cout << "* Total: " << vectorEmpleadosEjecutivos[a]->getValorTotalSalarioEjecutivo() << endl;
				cout << "***************************\n";
				
				flag = 1;
			}
		}
		
		for(int a = 0; a < (int) vectorEmpleadosOperativos.size(); a++){
			if(identificacion == (vectorEmpleadosOperativos[a]->getIdentificacion()) ){
				cout << "***************************\n";
				cout << "*  BIENVENIDO A UVNOMINA  *\n";
				cout << "***************************\n";
				cout << "*     DATOS EMPLEADO      *\n";
				cout << "***************************\n";
				
				cout << "* Nombre: " << vectorEmpleadosOperativos[a]->getNombre() << endl;
				cout << "* Empleado Operativo\n";
				cout << "* Edad: " << vectorEmpleadosOperativos[a]->getEdad() << endl;
				cout << vectorEmpleadosOperativos[a]->getDescripcionCargo();
				cout << "* Jefe a cargo: " << vectorEmpleadosOperativos[a]->getJefeACargo() << endl;
				
				cout << "***************************\n";
				cout << "*         SALARIO         *\n";
				cout << "***************************\n";
				cout << "* Basico: " << vectorEmpleadosOperativos[a]->getSalarioBasico() << endl;
				cout << "* Comision: " << vectorEmpleadosOperativos[a]->getSalarioComision() << endl;
				cout << "* Prima-extralegal: " << vectorEmpleadosOperativos[a]->getSalarioPrimas() << endl;
				cout << "* Auxilio de Transporte: " << vectorEmpleadosOperativos[a]->getAuxilioTransporte() << endl;
				cout << "* Total: " << vectorEmpleadosOperativos[a]->getValorTotalSalarioOperativo() << endl;
				cout << "***************************\n";
				
				flag = 1;
			}
		}
		
	}
	else{
		cout << "Aun no hay empleados en esta base de datos\n";
		flag = 1;
	}
	
	if(flag == 0){
		cout << "No hay un empleado con esta identificacion\n";
	}
	
}

void mostrarInformes(Consolidado * &consolidadoSalarios){
	
	int tipoInforme;
	
	cout << "***************************\n";
	cout << "*  BIENVENIDO A UVNOMINA  *\n";
	cout << "***************************\n";
	cout << "*        INFORMES         *\n";
	cout << "***************************\n";
	cout << "* 1. Informe por total    *\n";
	cout << "* 2. Informe por promedio *\n";
	cout << "Seleccione el tipo de informe que desea ver: ";
	cin >> tipoInforme;
	
	cout << "\n***************************\n";
	cout << "*  BIENVENIDO A UVNOMINA  *\n";
	cout << "***************************\n";
	
	if( tipoInforme == 1){
		cout << "*    INFORME POR TOTAL    *\n";
		cout << "***************************\n";
		cout << "* Total ejecutivos: " << consolidadoSalarios->getTotalEjecutivos() << endl;
		cout << "* Total salarios ejecutivos: " << consolidadoSalarios->getTotalSalariosEjecutivos() << endl;
		cout << "* Total operativos: " << consolidadoSalarios->getTotalOperativos() << endl;
		cout << "* Total salarios operativos: " << consolidadoSalarios->getTotalSalariosOperativos();
	}
	else{
		if( tipoInforme == 2){
			cout << "*  INFORME POR PROMEDIO   *\n";
			cout << "***************************\n";
			cout << "* Total ejecutivos: " << consolidadoSalarios->getTotalEjecutivos() << endl;
			cout << "* Promedio salarios ejecutivos: " << consolidadoSalarios->getPromedioSalariosEjecutivos() << endl;
			cout << "* Total operativos: " << consolidadoSalarios->getTotalOperativos() << endl;
			cout << "* Promedio salarios operativos: " << consolidadoSalarios->getPromedioSalariosOperativos();
		}
		else{
			cout << " La opcion ingresada es invalida\n";
		}
	}
	cout << "\n\n";
	
}

void gestion(int selector, vector<EmpleadoEjecutivo*> &vectorEmpleadosEjecutivos, vector<EmpleadoOperativo*> &vectorEmpleadosOperativos, Consolidado * &consolidadoSalarios){
	
	switch(selector){
		
	case 1:
		adicionar(vectorEmpleadosEjecutivos, vectorEmpleadosOperativos, consolidadoSalarios);
		break;
		
	case 2:
		consultar(vectorEmpleadosEjecutivos, vectorEmpleadosOperativos);
		break;
		
	case 3:
		mostrarInformes(consolidadoSalarios);
		break;
		
	case 4:
		break;
		
	default:
		cout << "Opcion no valida\n";
		
	}
}
