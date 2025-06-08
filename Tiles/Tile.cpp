#include "Tile.h"

Tile::Tile() {
    type = 'N'; //El tipo default es el Normal
} 

Tile::Tile(char t) {
    type = t; //Se asigna el tipo de tile
}

Tile::~Tile() {}

char Tile::getType() const {
    return type; 
}

void Tile::setType(char t) {
    type = t;
}