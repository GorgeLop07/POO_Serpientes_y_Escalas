#include "Turno.h"

Turno::Turno(int numTurno, int jugador, int posInicial, int dado, char tipoCasilla, int resultado, int penalidad, int recompensa)
    : numTurno(numTurno), jugador(jugador), posInicial(posInicial), dado(dado), tipoCasilla(tipoCasilla), resultado(resultado), penalidad(penalidad), recompensa(recompensa) {}

void Turno::imprimir() const {
    std::cout << jugador << " " << posInicial << " dado: " << dado << " " << tipoCasilla;
    if (recompensa > 0) {
        std::cout << " recompensa: " << recompensa;
    }
    if (penalidad > 0) {
        std::cout << " penalidad: " << penalidad;
    }
    std::cout << " Now at tile " << resultado << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Turno& t) {
    os << t.jugador << " " << t.posInicial << " dado: " << t.dado << " " << t.tipoCasilla;
    if (t.recompensa > 0) {
        os << " (+" << t.recompensa << ")";
    }
    if (t.penalidad > 0) {
        os << " (-" << t.penalidad << ")";
    }
    os << " Now at tile " << t.resultado;
    return os;
}
