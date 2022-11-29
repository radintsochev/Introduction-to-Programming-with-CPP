#include <iostream>
using namespace std;
const int SIZE = 100;

void fillMatrix(int matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "matrix [" << i << "] [" << j << "] = ";
            cin >> matrix[i][j];
        }
        
    }
    
}

void printMatrix(int matrix[][SIZE], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

void transMatrix(int matrix[][SIZE], int rows, int cols)
{
    int nullMatrix[SIZE][SIZE];
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            nullMatrix[i][j] = 0;
        }
        
    }
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < cols; i++)
        {
            nullMatrix[i][j] = matrix[j][i];
        }
        
    }
    printMatrix(nullMatrix, cols, rows);
    
}

int main()
{
    int matrix[SIZE][SIZE];
    int rows, cols;
    cin >> rows;
    cin >> cols;
    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    transMatrix(matrix, rows, cols);
}