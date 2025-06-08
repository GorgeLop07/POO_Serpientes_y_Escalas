#include "../Tile.h"
#include "SnakeTile.h"


SnakeTile::SnakeTile() : Tile('S') {}

SnakeTile::~SnakeTile() {}

char SnakeTile::getType() const {
    return 'S'; //Tipo de tile
}


