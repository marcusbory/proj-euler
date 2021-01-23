#include <iostream>
using namespace std;

// Idea is similar to Pascal's Triangle, add bigger parent to child, and 
// do a linear search on bottom row for biggest path

void pathAdder(int** grid, int rows);
int max(int a, int b);

int main()
{
    int dimensions;
    cout << "Please enter dimensions of triangle: ";
    cin >> dimensions;
    cout << "Proceed to enter in data in (lower) triangular matrix form" << endl;

    // Create triangular matrix
    int** grid = new int* [dimensions];
    for (int i = 0; i < dimensions; i++)
    {
        grid[i] = new int[i+1];
        for (int j = 0; j < i+1; j++)
        {
            cin >> grid[i][j];
        }
    }

    // Mutate triangular matrix
    pathAdder(grid, dimensions);
    
    // Perform linear search
    int max = 0;
    for (int ii = 0; ii < dimensions; ii++)
    {
        if (grid[dimensions-1][ii] > max)
            max = grid[dimensions-1][ii];
    }
    cout << max << endl;
    
    for (int k = 0; k < dimensions; k++)
        delete[] grid[k];
    delete[] grid;
}

int max(int a, int b)
{
    return (a>b)?a:b;
}

void pathAdder(int** grid, int rows)
{
    for (int i = 1; i < rows; i++)
    {
        grid[i][0] += grid[i-1][0];
        grid[i][i] += grid[i-1][i-1];
        for (int j = 1; j < i; j++)
        {
            // for non-edge elements in a row, add the bigger parent
            grid[i][j] += max(grid[i-1][j-1],grid[i-1][j]);
        }
    }
}
