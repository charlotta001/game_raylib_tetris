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
    Block();    
    void Draw();
    int id;
    std::map<int, std::vector<Position>> cells;
private:
    int cellSize;
    int rotationState;
    std::vector<Color> colors;


};