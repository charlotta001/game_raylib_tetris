#include "block.h"
#include "color.h"
#include "grid.h"
#include "position.h"
#include <vector>

Block::Block(){
    cellSize = 40;
    rotationState = 0;
    colors = getCellColor();
}

void Block::Draw(){
    std::vector<Position> tiles = cells[rotationState];
    for(Position item: tiles){
            DrawRectangle(item.coloumn * cellSize +1, item.row * cellSize +1, cellSize-1, cellSize-1, colors[id]);
            //  DrawRectangle(x,y,width,height,color);
            //  coloumn : x 
            //  row     : y
    }
    
}