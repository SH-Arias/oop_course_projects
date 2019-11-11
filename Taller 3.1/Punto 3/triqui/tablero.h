/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: tablero.h
* Descripción: archivo de cabecera de la clase tablero
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#ifndef TABLERO_H
#define TABLERO_H

#include <QMainWindow>
#include "juego.h"

namespace Ui {
class Tablero;
}

class Tablero : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Tablero(QWidget *parent = 0);
    ~Tablero();
    void comprobarTriqui();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Tablero *ui;
    Juego* objJuego;
};

#endif // TABLERO_H
