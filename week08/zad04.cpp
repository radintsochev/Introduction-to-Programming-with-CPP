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

int xElementsSum(int matrix[][SIZE], int rows, int cols)
{
    int sumOfFirstDiag = 0;
    int sumOfSecondDiag = 0;
    int xElementsSum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == j)
            {
                sumOfFirstDiag += matrix[i][j];
            }
            else if (i + j == rows - 1)
            {
                sumOfSecondDiag += matrix[i][j];
            }
            else if(i == j && i + j == rows)
            {
                xElementsSum -= matrix[i][j];
            }
        }
        
    }
    xElementsSum = sumOfFirstDiag + sumOfSecondDiag;
    return xElementsSum;
}

int main()
{
    int matrix[SIZE][SIZE];
    int rows, cols;
    cin >> rows;
    cin >> cols;
    fillMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);
    cout << xElementsSum(matrix, rows, cols);
}