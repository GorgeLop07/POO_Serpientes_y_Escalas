#include "../Tile.h"
#include "LadderTile.h"
#include "../../MyGame/MyGame.h"

LadderTile::LadderTile() : Tile('L') {}

LadderTile::~LadderTile() {}

int LadderTile::operator+(int value) const {
    extern int reward;
    return value + abs(reward);
}

