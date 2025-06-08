//
//  MyGame.h
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#ifndef MyGame_h
#define MyGame_h

#include <iostream>
#include <vector>
#include "../Board/Board.h" 
#include "../Player/Player.h"
#include "../Dice/Dice.h"

using namespace std;

class MyGame {
  private:
    Board board;
    // Para varios jugadores
    vector<Player> players;
    int turn;
    int maxTurns;
    int penalty;
    int reward;
    int maxTiles;
    char gameType;
    Dice dice;
    
  public:
    MyGame();
    MyGame(int tiles, int snakes, int ladders, int players, int turns, int penalty, int reward, char gameType);
    void start();
    void start(bool);
};

#endif /* MyGame_h */
