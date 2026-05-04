#include "block.h"
#include "color.h"
#include "grid.h"

Block::Block(){
    cellSize = 40;
    rotationState = 0;
    colors = getCellColor();
}

void Block::Draw(){
    
}