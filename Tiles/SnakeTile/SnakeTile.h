#ifndef SnakeTile_h
#define SnakeTile_h

#include "../Tile.h"

class SnakeTile : public Tile {
    private:
        
    public:
        SnakeTile();
        ~SnakeTile() override;
        int operator+(int value) const override;
        //char getType() const override; // Override para el tipo de tile
};




#endif /* SnakeTile_h */