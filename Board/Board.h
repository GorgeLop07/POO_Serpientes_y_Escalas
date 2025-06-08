//
//  Board.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef Board_h
#define Board_h

#include <iostream>
#include <vector>
#include "../Tiles/Tile.h"


using namespace std;

class Board {
  private:
    // vector<char> tiles;
    vector <Tile*> tiles; 
    int numTiles;
    int numSnakes;
    int numLadders;
    
  public:
    Board();
    Board(int, int, int);
    ~Board();
    string draw();
    int getTilescout();
    Tile* getTile(int);

};


#endif /* Board_h */
