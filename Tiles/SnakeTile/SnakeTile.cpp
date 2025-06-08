#include "../Tile.h"
#include "SnakeTile.h"
#include "../../MyGame/MyGame.h"

SnakeTile::SnakeTile() : Tile('S') {}

SnakeTile::~SnakeTile() {}

int SnakeTile::operator+(int value) const {
    extern int penalty;
    return value - abs(penalty);
}

