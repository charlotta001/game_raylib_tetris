#include "grid.h"
#include "color.h"

Grid::Grid(){
    rows = 18;
    coloumns = 12;
    cellSize = 40;
    Initialize();
    colors = getCellColor();    // init all cell
}


// initialize grid with 0 value
void Grid::Initialize(){
    for(int row = 0; row < rows; row++){
        for(int coloumn = 0; coloumn < coloumns; coloumn++){
            grid[row][coloumn] = 0;
        }
    }

}


// print grid value 0
void Grid::Print(){
    for(int row = 0; row < rows; row++){
        for(int coloumn = 0; coloumn < coloumns; coloumn++){
             std::cout << grid[row][coloumn] << " ";
        }
        std::cout << std::endl;
    }
}


// draw recatangle of grid 
void Grid::Draw(){
    for(int row = 0; row < rows; row++){
        for(int coloumn = 0; coloumn < coloumns; coloumn++){
            int cellValue = grid[row][coloumn];
            DrawRectangle(coloumn * cellSize + 1 , row * cellSize + 1, cellSize - 1, cellSize - 1, colors[cellValue]);
        }
    }
}