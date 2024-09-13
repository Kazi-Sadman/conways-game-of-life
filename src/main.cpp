#include <raylib.h>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int screenWidth = 800;
const int screenHeight = 800;
int cellSize = 25;
int numOfrows = screenWidth / cellSize;
int numOfcols = screenHeight / cellSize;

vector<vector<int>> grid(numOfrows, vector<int>(numOfcols));
vector<vector<int>> nextGen(numOfrows, vector<int>(numOfcols));
void drawGrid()
{
    Color color;
    for (int row = 0; row < numOfrows; row++)
    {
        for (int col = 0; col < numOfcols; col++)
        {
            if (grid[row][col] == 1)
            {
                color = Color{0, 255, 0, 255};
            }
            else
            {
                color = Color{55, 55, 55, 255};
            }
            DrawRectangle(col * cellSize, row * cellSize, cellSize - 1, cellSize - 1, color);
        }
    }
}
int countLiveNeighbors(int x, int y)
{
    int liveNeighbors = 0;

    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if (i == 0 && j == 0)
                continue;

            int neighborX = x + i;
            int neighborY = y + j;
            if (neighborX >= 0 && neighborX < numOfrows && neighborY >= 0 && neighborY < numOfcols)
            {
                liveNeighbors += grid[neighborX][neighborY];
            }
        }
    }
    return liveNeighbors;
}
void rules()
{

    for (int i = 0; i < numOfrows; ++i)
    {
        for (int j = 0; j < numOfcols; ++j)
        {
            int state = grid[i][j];
            int neighbors = countLiveNeighbors(i, j);
            if (state == 0 && neighbors == 3)
            {
                nextGen[i][j] = 1;
            }
            else if (state == 1 && (neighbors < 2 || neighbors > 3))
            {
                nextGen[i][j] = 0;
            }
            else
            {
                nextGen[i][j] = state;
            }
        }
    }
}
void genRandomValue(int cols, int rows)
{
    for (int i = 0; i < cols; ++i)
    {
        for (int j = 0; j < rows; ++j)
        {
            grid[i][j] = rand() % 2;
        }
    }
}
int main()
{
    srand(time(0));
    int FPS = 12;
    InitWindow(screenWidth, screenHeight, "Game of life");
    SetTargetFPS(FPS);
    genRandomValue(numOfrows, numOfcols);

    while (!WindowShouldClose())
    {
        rules();
        grid = nextGen;

        BeginDrawing();
        ClearBackground(GRAY);
        drawGrid();
        EndDrawing();
    }

    CloseWindow();
}
