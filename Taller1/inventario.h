#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void showmenu();
void adicionar(vector<string> &nombres, vector<int> &cantidades);
void eliminar(vector<string> &nombres, vector<int> &cantidades);
void mostrar (vector<string> nombres, vector<int> cantidades);
void gestion(int selector, vector<string> &nombres, vector<int> &cantidades);

#endif
