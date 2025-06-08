#ifndef TURNO_H
#define TURNO_H

#include <iostream>

using namespace std;

class Turno {
private:
    int numTurno;
    int jugador;
    int posInicial;
    int dado;
    char tipoCasilla;
    int resultado;
    int penalidad;
    int recompensa;

public:
    Turno(int numTurno, int jugador, int posInicial, int dado, char tipoCasilla, int resultado, int penalidad, int recompensa);

    void imprimir() const; // Método para imprimir usando cout

    friend ostream& operator<<(ostream& os, const Turno& t); // Sobrecarga <<
};

#endif