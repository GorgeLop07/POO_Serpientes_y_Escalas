#ifndef Tile_h
#define Tile_h

class Tile {
    private:
        char type; // "N" Normal, "S" Snake, "L" Ladder
    public:
        
    
        Tile();
        Tile(char t);
        virtual ~Tile(); // Destructor
        virtual char getType() const;
        void setType(char);

        virtual int operator+(int value) const {
            return value;
        }

};

#endif /* Tile_h */