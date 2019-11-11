/*
* Autores:
*	Santiago Hernández Arias Código 1631281
* Nombre: inventario.cpp
* Descripción: almacena el inventario de una empresa
* Fecha de creación: 25 / 09 / 2016
* Fecha de modificación: 01 / 10 / 2016
*/

#include "inventario.h"

int main(){
	
	vector<string> nombres;
	vector<int> cantidades;
	
	int selector = 0;
	
	do{
		showmenu();
		cin >> selector;
		gestion(selector, nombres, cantidades);
	} while(selector != 4);
	
	return 0;
	
}

void showmenu(){
	cout << "***************************\n";
	cout << "*BIENVENIDO A MIINVENTARIO*\n";
	cout << "***************************\n";
	cout << "*Seleccione una opcion    *\n";
	cout << "*1. Ingresar un elemento  *\n";
	cout << "*2. Eliminar un elemento  *\n";
	cout << "*3. Mostrar elementos     *\n";
	cout << "*4. Salir                 *\n";
	cout << "***************************\n";
	cout << "Ingrese su opcion: ";
}

void adicionar(vector<string> &nombres, vector<int> &cantidades){
	string nombre;
	int cantidad;
	
	cout << "***************************\n";
	cout << "*Ingrese su elemento      *\n";
	cout << "***************************\n";
	cout << "Ingrese el nombre:\n";
	cin >> nombre;
	cout << "Ingrese la cantidad:\n";
	cin >> cantidad;
	
	nombres.push_back(nombre);
	cantidades.push_back(cantidad);
}

void eliminar(vector<string> &nombres, vector<int> &cantidades){
	string nombre;
	
	cout << "\n***************************\n";
	cout << "*Eliminar un elemento     *\n";
	cout << "***************************\n";
	cout << "Ingrese el nombre:\n";
	cin >> nombre;
	
	for(int a=0; a<=(int)nombres.size(); a++){
		
		if(a == ((int)nombres.size())){
			cout << "El elemento no esta\n\n";
		}
		else {
			if ((nombre.compare(nombres[a]))==0){
			nombres.erase (nombres.begin()+a);
			cantidades.erase (cantidades.begin()+a);
			cout << "Eliminacion exitosa\n\n";
			break;
			}
		}
	}
}

void mostrar (vector<string> nombres, vector<int> cantidades){
	cout << "\n***************************\n";
	cout << "*Elementos almacenados    *\n";
	cout << "***************************\n";
	cout << "* Nombre     * Cantidad   *\n";
	cout << "***************************\n";
	
	for (int a=0; a<(int)nombres.size(); a++){
		cout << "* ";
		
		cout << nombres[a] << "   *   " << cantidades[a] << endl;
		
	}
	
	cout << "***************************\n\n";
}

void gestion(int selector, vector<string> &nombres, vector<int> &cantidades){
	
	switch(selector){
		
	case 1:
		adicionar(nombres, cantidades);
		break;
		
	case 2:
		eliminar(nombres, cantidades);
		break;
		
	case 3:
		mostrar(nombres, cantidades);
		break;
		
	case 4:
		break;
		
	default:
		cout << "Opcion no valida\n";
		
	}
}
