#ifndef LadderTile_h
#define LadderTile_h

#include "../Tile.h"

class LadderTile : public Tile {
    private:
        // int reward; // Penalty for landing on a snake tile
    public:
        LadderTile();
        ~LadderTile() override;
        //char getType() const override; // Override para el tipo de tile
};




#endif /* Ladder */