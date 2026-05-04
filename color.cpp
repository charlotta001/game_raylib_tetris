#include "raylib.h"
#include <vector> 

const Color merah  = {255, 0,   0,   255};
const Color kuning = {255, 255, 0,   255};
const Color hijau  = {0,   255, 0,   255};
const Color ungu   = {128, 0,   128, 255};
const Color biru   = {0,   0,   255, 255};
const Color hitam  = {0,   0,   0,   255};

std::vector<Color> getCellColor(){
    return {merah, kuning, hijau, ungu, biru, hitam};
}