#include <iostream>
#include "grid.h"
#include "raylib.h"



void printGrid(int rows, int columns);
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    const int screenWidth = 480;
    const int screenHeight = 720;
    // FPS
    int currentFps = 0;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);    

    Grid grid = Grid();
    grid.Print();
    grid.grid[0][3] = 1;
    grid.grid[0][4] = 1;
    grid.grid[3][5] = 3;
    grid.grid[6][8] = 5;
  
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // begin draw  stuff
        BeginDrawing();
            ClearBackground(DARKBLUE);
            grid.Draw();
            currentFps = GetFPS();
            DrawText(TextFormat("FPS : %d", currentFps) ,10,20,20,GREEN);
            DrawText("tetromino coming soon", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();        // Close window and OpenGL context
    return 0;
}



