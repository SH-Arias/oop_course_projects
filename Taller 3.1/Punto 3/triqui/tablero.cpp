/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: tablero.cpp
* Descripción: archivo de implementacion de la clase tablero
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#include "tablero.h"
#include "ui_tablero.h"

Tablero::Tablero(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tablero)
{
    ui->setupUi(this);

    objJuego = new Juego(1, "Jugador 1", "En juego", "X");
}

Tablero::~Tablero()
{
    delete ui;
}

void Tablero::comprobarTriqui()
{
    if(ui->pushButton_5->text() != "")
    {
        if((ui->pushButton_2->text() == ui->pushButton_5->text()) && (ui->pushButton_8->text() == ui->pushButton_5->text()))
        {
            objJuego->setEstado("Parar");
            ui->letrero->setText("Gana " + objJuego->getJugador());
        }
        else
        {
            if((ui->pushButton_4->text() == ui->pushButton_5->text()) && (ui->pushButton_6->text() == ui->pushButton_5->text()))
            {
                objJuego->setEstado("Parar");
                ui->letrero->setText("Gana " + objJuego->getJugador());
            }
            else
            {
                if((ui->pushButton->text() == ui->pushButton_5->text()) && (ui->pushButton_9->text() == ui->pushButton_5->text()))
                {
                    objJuego->setEstado("Parar");
                    ui->letrero->setText("Gana " + objJuego->getJugador());
                }
                else
                {
                    if((ui->pushButton_3->text() == ui->pushButton_5->text()) && (ui->pushButton_7->text() == ui->pushButton_5->text()))
                    {
                        objJuego->setEstado("Parar");
                        ui->letrero->setText("Gana " + objJuego->getJugador());
                    }
                }
            }
        }
    }


    if(ui->pushButton->text() != "")
    {
        if((ui->pushButton_2->text() == ui->pushButton->text()) && (ui->pushButton_3->text() == ui->pushButton->text()))
        {
            objJuego->setEstado("Parar");
            ui->letrero->setText("Gana " + objJuego->getJugador());
        }
        else
        {
            if((ui->pushButton_4->text() == ui->pushButton->text()) && (ui->pushButton_7->text() == ui->pushButton->text()))
            {
                objJuego->setEstado("Parar");
                ui->letrero->setText("Gana " + objJuego->getJugador());
            }
        }
    }


    if(ui->pushButton_9->text() != "")
    {
        if((ui->pushButton_7->text() == ui->pushButton_9->text()) && (ui->pushButton_8->text() == ui->pushButton_9->text()))
        {
            objJuego->setEstado("Parar");
            ui->letrero->setText("Gana " + objJuego->getJugador());
        }
        else
        {
            if((ui->pushButton_3->text() == ui->pushButton_9->text()) && (ui->pushButton_6->text() == ui->pushButton_9->text()))
            {
                objJuego->setEstado("Parar");
                ui->letrero->setText("Gana " + objJuego->getJugador());
            }
        }
    }

    if(objJuego->getTurno() == 9)
    {
        ui->letrero->setText("Empate");
        objJuego->setEstado("Parar");
    }
}

void Tablero::on_pushButton_clicked()
{
    if((ui->pushButton->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_2_clicked()
{
    if((ui->pushButton_2->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_2->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_3_clicked()
{
    if((ui->pushButton_3->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_3->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_4_clicked()
{
    if((ui->pushButton_4->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_4->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_5_clicked()
{
    if((ui->pushButton_5->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_5->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_6_clicked()
{
    if((ui->pushButton_6->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_6->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_7_clicked()
{
    if((ui->pushButton_7->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_7->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_8_clicked()
{
    if((ui->pushButton_8->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_8->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}

void Tablero::on_pushButton_9_clicked()
{
    if((ui->pushButton_9->text() == "") && (objJuego->getEstado() == "En juego"))
    {
        ui->letrero->setText("");
        ui->pushButton_9->setText(objJuego->getMarca());

        comprobarTriqui();

        objJuego->pasarTurno();
    }
    else
    {
        if(objJuego->getEstado() == "En juego")
        {
            ui->letrero->setText("Movimiento Invalido");
        }
    }
}
