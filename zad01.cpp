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
void fillMatrix5(int matrix[][5], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
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
void fillArray(int arr[MAX_ROWS_COLS], int n)
{
    for (int i = 0; i < n; i++)
    {
        
            cout << "arr [" << i << "] = ";
            cin >> arr[i];
        
        
    }
    
}
int specialColumnIndex(int matrix[MAX_ROWS_COLS][5], int rows, int cols, int array[MAX_ROWS_COLS], int n)
{

    int maxCount = 0;
    int specialColumn;
    for (int j = 0; j < cols; j++)
    {
        int counter = 0;
        for (int i = 0; i < rows && i < n; i++)
        {
            int current = matrix[i][j];

            if (current == array[i]) 
            {
                counter++;
            }
        }

        if (counter > maxCount)
        {
            maxCount = counter;
            specialColumn = j;
        }
        

        
    }
    return specialColumn;
    
}
int main()
{
    int matrix[MAX_ROWS_COLS][5]; 
    int array[MAX_ROWS_COLS];
    int rows, cols, n;
    cin >> rows;
    cin >> cols;
    cin >> n;
    fillArray(array, n);
    fillMatrix5(matrix, rows, cols);
    cout << specialColumnIndex(matrix, rows, cols, array, n);
    
}
