#include "Turno.h"

Turno::Turno(int numTurno, int jugador, int posInicial, int dado, char tipoCasilla, int resultado, int penalidad, int recompensa)
    : numTurno(numTurno), jugador(jugador), posInicial(posInicial), dado(dado), tipoCasilla(tipoCasilla), resultado(resultado), penalidad(penalidad), recompensa(recompensa) {}

void Turno::imprimir() const {
    std::cout << numTurno << " " << jugador << " dado: " << dado << " " << tipoCasilla
              << " Now at tile " << resultado << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Turno& t) {
    os << t.numTurno << " " << t.jugador << " dado: " << t.dado << " " << t.tipoCasilla
       << " Now at tile " << t.resultado;
    return os;
}
