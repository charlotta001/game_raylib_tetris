#pragma once
#include <vector>
#include <iostream>
#include "raylib.h"


class Grid{
    public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid [18][12];

    private:
    int rows;
    int coloumns;
    int cellSize;
    std::vector<Color> colors;
  
};