#include "grid.h"

Grid::Grid(){
    rows = 18;
    coloumns = 12;
    cellSize = 40;
    Initialize();
    colors = GetCellColor();
}

void Grid::Initialize(){
    for(int row = 0; row < rows; row++){
        for(int coloumn = 0; coloumn < coloumns; coloumn++){
            grid[row][coloumn] = 0;
        }
    }

}

void Grid::Print(){
    for(int row = 0; row < rows; row++){
        for(int coloumn = 0; coloumn < coloumns; coloumn++){
             std::cout << grid[row][coloumn] << " ";
        }
        std::cout << std::endl;
    }
}


std::vector<Color> Grid::GetCellColor(){
Color merah  = {255, 0,   0,   255};
Color kuning = {255, 255, 0,   255};
Color hijau  = {0,   255, 0,   255};
Color ungu   = {128, 0,   128, 255};
Color biru   = {0,   0,   255, 255};
Color hitam  = {0,   0,   0,   255};
return {merah, kuning, hijau,ungu,biru,hitam};
}


void Grid::Draw(){
    for(int row = 0; row < rows; row++){
        for(int coloumn = 0; coloumn < coloumns; coloumn++){
            int cellValue = grid[row][coloumn];
            DrawRectangle(coloumn * cellSize + 1 , row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}