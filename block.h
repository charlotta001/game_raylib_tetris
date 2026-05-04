#pragma once
#include <map>
#include <vector>
#include "position.h"
#include "color.h"
#include "raylib.h"

// block class is used to inherit for others block

class Block
{
public:
    Block();                                        // constructor
    void Draw();                                    // draw rectangle
    int id;                                         // id for color
    std::map<int, std::vector<Position>> cells;     // int : key || std::vector<Position> cells : value || more information (https://cppreference.com/cpp/container/map)
private:        
    int cellSize;
    int rotationState;
    std::vector<Color> colors;


};