//
//  MyGame.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <stdio.h>
#include "../Dice/Dice.h"
#include "../Board/Board.h"
#include "MyGame.h"

using namespace std;

MyGame::MyGame() {
    // El default lo dejo como 30 tiles, 3 snakes, 3 ladders, 1 player, 30 turns, 3 penalty, 3 reward, gameType 'A'
    board = Board(30, 3, 3);
    maxTiles = 30;
    maxTurns = 30; 
    penalty = 3;   
    reward = 3;  
    gameType = 'M'; 

    for (int i = 1; i <= 2; ++i) //Forma de poner 2 jugadores de default
        players.push_back(Player(i));

    turn = 1;
    dice = Dice();
}


MyGame::MyGame(int tiles, int snakes, int ladders, int numPlayers, int turns, int pen, int rew, char type)
{
    board = Board(tiles, snakes, ladders);
    maxTiles = tiles;
    maxTurns = turns;
    penalty = pen;
    reward = rew;
    gameType = type;

    for(int i = 1; i <= numPlayers; ++i)
        players.push_back(Player(i));

    turn = 1;
    dice = Dice();
}


// Metodo que inicia el juego manualmente
void MyGame::start() {

        cout << "Game Type: Manual" << endl;
        for (Player &p : players) {
                p.setTile(1, maxTiles); 
            }
        cout << "Press C to continue next turn, or E to end the game:" << endl;
        char option = 'C';
        while(option != 'E' && turn <= maxTurns) {
            cin >> option;
            if(option == 'C') {
                cout << "Turn " << to_string(turn) << endl;
                for (size_t i = 0; i < players.size(); ++i) {
                    int number = dice.roll();
                    cout << players[i].draw() << " dado: " << number << " ";

                    players[i].setTile(players[i].getTile() + number, maxTiles);



                    char c = board.getTile(players[i].getTile() - 1)->getType();
                    cout << c << " ";

                    
                    if(c == 'S') {
                        players[i].setTile(players[i].getTile() - penalty, maxTiles);
                        cout << "(-" << penalty << ") ";
                    }
                    else if(c == 'L') {
                        players[i].setTile(players[i].getTile() + reward, maxTiles);
                        cout << "(+" << reward << ") ";
                    }

                    cout << "Now at tile " << players[i].getTile() << endl;

                   
                    if(players[i].getTile() >= board.getTilescout()) {
                        cout << "Player " << (i + 1) << " is the winner!!!" << endl;
                        cout << "<<< GAME OVER >>>" << endl;
                        return;
                    }
                }
                turn++;
            }
            else if (option != 'E') {
                cout << "Invalid option, please press C to continue next turn or E to end the game" << endl;
            }
        }
        cout << "<<< GAME OVER >>>" << endl;
        if(turn > maxTurns)
            cout << "The maximum number of turns has been reached..." << endl;
        else
            cout << "Thanks for playing!!!" << endl;
}

void MyGame::start(bool isAutomatic) {


    
        cout << "Game Type: Automatic" << endl;

        for (Player &p : players) {
            p.setTile(1, maxTiles);
        }

        
        while (turn <= maxTurns) {
            cout << "Turn " << to_string(turn) << endl;
            for (size_t i = 0; i < players.size(); ++i) {
                int number = dice.roll();
                cout << players[i].draw() << " dado: " << number << " ";



                players[i].setTile(players[i].getTile() + number, maxTiles);
  
                char c = board.getTile(players[i].getTile() - 1)->getType();

                cout << c << " ";


                if (c == 'S') {
                    players[i].setTile(players[i].getTile() - penalty, maxTiles);
                    cout << "(-" << penalty << ") ";
                }
                else if (c == 'L') {
                    players[i].setTile(players[i].getTile() + reward, maxTiles);
                    cout << "(+" << reward << ") ";
                }

                cout << "Now at tile " << players[i].getTile() << endl;


                if (players[i].getTile() >= board.getTilescout()) {
                    cout << "Player " << (i + 1) << " is the winner!!!" << endl;
                    cout << "<<< GAME OVER >>>" << endl;
                    return;
                }
            }
            turn++;
        }
        cout << "-- GAME OVER --" << endl;
        if (turn > maxTurns)
            cout << "The maximum number of turns has been reached..." << endl;
        else
            cout << "Thanks for playing!!!" << endl;

}

