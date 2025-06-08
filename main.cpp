//
//  main.cpp
//  SerpientesEscaleras
//
//  Created by Rosa Guadalupe Paredes Juarez on 18/05/20.
//  Copyright © 2020 Rosa Paredes. All rights reserved.
//

#include <iostream>
#include "MyGame/MyGame.h"

using namespace std;

int penalty = 0;
int reward = 0;

int main() {
    int tiles, snakes, ladders, players, turns;
    char gameType;
    //Seed 0 es para los valores por defecto, si se quiere cambiar los parametros del juego ingresa 1
    int seed = 0;

    cout << "Welcome to the Snakes and Ladders Game" << endl;
    cout << "Select the seed for the game (0 for default values, 1 to customize): ";
    cin >> seed;
    
    if (seed == 0){
        MyGame g; // Valores por defecto
        g.start();
    }
    else {
        cout << "Insert the parameters for the game: " << endl;
        cout << "Tiles: "; 
        cin >> tiles;
        cout << "Snakes: "; 
        cin >> snakes;
        cout << "Ladders: "; 
        cin >> ladders;
        cout << "Players: "; 
        cin >> players;
        cout << "Turns: "; 
        cin >> turns;
        cout << "Penalty: "; 
        cin >> penalty;
        cout << "Reward: "; 
        cin >> reward;
        cout << "Game Type (A/M): "; 
        cin >> gameType;

      

        MyGame g(tiles, snakes, ladders, players, turns, penalty, reward, gameType);

          if (gameType == 'M'){
            g.start();
        } else if (gameType == 'A'){
            g.start(true);
        }
    }
 

    return 0;
}

