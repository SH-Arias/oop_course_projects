/*
* Autores:
*	Santiago Hernandez Arias Codigo 1631281
* 	Juan Camilo Perez Muñoz Codigo 1630779
* 	Omar Eduardo Suarez Valencia Codigo 1630356
* Nombre: juego.h
* Descripción: archivo de cabecera de la clase juego
* Fecha de creación: 25 / 11 / 2016
* Fecha de modificación: 25 / 11 / 2016
*/

#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>

class Juego
{
public:
    Juego(int turnoIn, QString jugadorIn, QString estadoIn, QString marcaIn);
    ~Juego();

    int getTurno();
    QString getJugador();
    QString getEstado();
    QString getMarca();

    void setTurno(int turnoIn);
    void setJugador(QString jugadorIn);
    void setEstado(QString estadoIn);
    void setMarca(QString marcaIn);

    void pasarTurno();

private:
    int turno;
    QString jugador;
    QString estado;
    QString marca;
};

#endif // JUEGO_H
