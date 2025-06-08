#include "../Tile.h"
#include "LadderTile.h"


LadderTile::LadderTile() : Tile('L') {}

LadderTile::~LadderTile() {}


char LadderTile::getType() const {
    return 'L'; //Tipo de tile
}

