#include <iostream>
using namespace std;
const int MAX_ROWS_COLS = 100; 

void fillMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
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
void printMatrix(int matrix[][MAX_ROWS_COLS], int rows, int cols)
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

void multipliedMatrix(int matrix1[][MAX_ROWS_COLS], int matrix2[][MAX_ROWS_COLS], int rows, int k, int cols)
{
    int multipliedMatrix[MAX_ROWS_COLS][MAX_ROWS_COLS];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int m = 0; m < k; m++)
            {
                multipliedMatrix[i][j] += matrix1[i][m] * matrix2[m][j];
            }
            
        }
        
    }
    printMatrix(multipliedMatrix, rows, cols);
}

int main()
{
    int matrix1[MAX_ROWS_COLS][MAX_ROWS_COLS], matrix2[MAX_ROWS_COLS][MAX_ROWS_COLS];
    int rows, k, cols;
    cin >> rows;
    cin >> k;
    cin >> cols;
    fillMatrix(matrix1, rows, k);
    fillMatrix(matrix2, k, cols);
    multipliedMatrix(matrix1, matrix2,rows, k, cols);
}