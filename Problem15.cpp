#include <iostream>
using namespace std;

// Idea is to simulate Pascal's Triangle

unsigned long paths(unsigned long** grid, int down, int right);
void printGrid(unsigned long** grid, int down, int right);

int main()
{
    int dimensions;
    cin >> dimensions;
    unsigned long** grid = new unsigned long*[dimensions+1];
    for (int i = 0; i <= dimensions; i++)
        grid[i] = new unsigned long[dimensions+1];

    unsigned long numPaths = paths(grid, dimensions, dimensions);
    cout << "For a " << dimensions << "x" << dimensions << " grid, the number of paths to reach bottom right point is " << numPaths << endl;
    for (int j = 0; j <= dimensions; j++)
        delete[] grid[j];
    delete[] grid;
}

// 1 1 1
// 1 2 3
// 1 3 6
// above is a 2x2 grid, with 3x3 points/locations
unsigned long paths(unsigned long** grid, int down, int right)
{
    for (int i = 1; i <= down; i++)
        for (int ii = 1; ii <= right; ii++)
            grid[i][ii] = 0;
    // first row and first column are all 1's 
    for (int col = 0; col <= right; col++)
        grid[0][col] = 1;
    for (int row = 1; row <= down; row++)
        grid[row][0] = 1;
    
    for (int southsteps = 1; southsteps <= down; southsteps++)
        for (int eaststeps = 1; eaststeps <= right; eaststeps++)
            grid[southsteps][eaststeps] = grid[southsteps-1][eaststeps] + grid[southsteps][eaststeps-1];
    
    printGrid(grid, down, right);
    return grid[down][right];
}

void printGrid(unsigned long** grid, int down, int right)
{
    for (int i = 0; i <= down; i++)
    {
        for (int j = 0; j <= right; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
