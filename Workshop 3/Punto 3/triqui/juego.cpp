/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: juego.cpp
* Descripción: archivo de implementacion de la clase juego
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#include "juego.h"

Juego::Juego(int turnoIn, QString jugadorIn, QString estadoIn, QString marcaIn)
{
    turno = turnoIn;
    jugador = jugadorIn;
    estado = estadoIn;
    marca = marcaIn;
}
Juego::~Juego(){}

int Juego::getTurno()
{
    return turno;
}
QString Juego::getJugador()
{
    return jugador;
}
QString Juego::getEstado()
{
    return estado;
}
QString Juego::getMarca()
{
    return marca;
}

void Juego::setTurno(int turnoIn)
{
    turno = turnoIn;
}
void Juego::setJugador(QString jugadorIn)
{
    jugador = jugadorIn;
}
void Juego::setEstado(QString estadoIn)
{
    estado = estadoIn;
}
void Juego::setMarca(QString marcaIn)
{
    marca = marcaIn;
}

void Juego::pasarTurno()
{
    turno++;

    if(jugador == "Jugador 1")
    {
        jugador = "Jugador 2";
    }
    else
    {
        jugador = "Jugador 1";
    }

    if(marca == "X")
    {
        marca = "O";
    }
    else
    {
        marca = "X";
    }
}
