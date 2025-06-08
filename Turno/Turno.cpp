#include "Turno.h"

Turno::Turno(int numTurno, int jugador, int posInicial, int dado, char tipoCasilla, int resultado, int penalidad, int recompensa)
    : numTurno(numTurno), jugador(jugador), posInicial(posInicial), dado(dado), tipoCasilla(tipoCasilla), resultado(resultado), penalidad(penalidad), recompensa(recompensa) {}

void Turno::imprimir() const {
    std::cout << "Turno: " << numTurno
              << " | Jugador: " << jugador
              << " | Posición inicial: " << posInicial
              << " | Dado: " << dado
              << " | Casilla: " << tipoCasilla;
    if (tipoCasilla == 'S')
        std::cout << " | Penalidad: -" << penalidad;
    else if (tipoCasilla == 'L')
        std::cout << " | Recompensa: +" << recompensa;
    std::cout << " | Posición final: " << resultado << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Turno& t) {
    os << "Turno: " << t.numTurno
       << " | Jugador: " << t.jugador
       << " | Posición inicial: " << t.posInicial
       << " | Dado: " << t.dado
       << " | Casilla: " << t.tipoCasilla;
    if (t.tipoCasilla == 'S')
        os << " | Penalidad: -" << t.penalidad;
    else if (t.tipoCasilla == 'L')
        os << " | Recompensa: +" << t.recompensa;
    os << " | Posición final: " << t.resultado;
    return os;
}