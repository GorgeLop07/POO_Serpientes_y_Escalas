//
//  Board.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include <cstdlib>
#include "Board.h"
#include "../Tiles/SnakeTile/SnakeTile.h"
#include "../Tiles/LadderTile/LadderTile.h"

Board::Board() {
    numTiles = 30;
    numSnakes = 3;
    numLadders = 3;

    for (int i = 0; i < numTiles; ++i) {
        tiles.push_back(new Tile('N')); 
    }

    int snakes = 0;
    int ladders = 0;
    
    while(snakes < numSnakes) {
        int index = (rand() % numTiles);
        if(tiles[index]->getType() == 'N') {
            delete tiles[index]; 
            tiles[index] = new SnakeTile();
            snakes++;
        }
    }
    while(ladders < numLadders) {
        int index = (rand() % numTiles);
        if(tiles[index]->getType() == 'N') {
            delete tiles[index]; 
            tiles[index] = new LadderTile(); 
            ladders++;
        }
    }

    std :: cout << "Board Iniciali: " << draw() << std::endl;
}

Board::Board(int tilesCount, int snakes, int ladders) {
    numTiles = tilesCount;
    numSnakes = snakes;
    numLadders = ladders;
    
    for(int i = 0; i < numTiles; ++i) {
        tiles.push_back(new Tile('N')); 
    }


    int snakesPlaced = 0;
    int laddersPlaced = 0;

    while(snakesPlaced < numSnakes) {
        int index = (rand() % numTiles);
        if(tiles[index]->getType() == 'N') {
            delete tiles[index]; 
            tiles[index] = new SnakeTile();
            snakesPlaced++;
        }
    }
    while(laddersPlaced < numLadders) {
        int index = (rand() % numTiles);
        if(tiles[index]->getType() == 'N') {
            delete tiles[index]; 
            tiles[index] = new LadderTile(); 
            laddersPlaced++;
        }
    }
        std :: cout << "Board Iniciali: " << draw() << std::endl;
}


string Board::draw(){
    string brd = "";
    for (Tile* t : tiles) {
        if(t == nullptr){
            brd += "?";
        }
        brd += t->getType();
        brd += " ";
    }
    return brd;
}

Tile* Board::getTile(int index) {
    if (index < 0 || index >= numTiles){
        std :: cerr << "Error: getTile index out of bonds:" << index << std :: endl;
        return nullptr;
    }

    return tiles[index];
}

int Board::getTilescout() {
    return numTiles;
}

Board::~Board() {
    for (Tile* t : tiles)
        delete t;
}

