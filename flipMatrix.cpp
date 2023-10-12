# include <iostream>
using namespace std;

void fillMatrix(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "matrix[" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}
}

void printMatrix(int** matrix, int rows, int cols)
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

void flipOddCols(int** matrix, int rows, int cols)
{
	
	for (int j = 0; j < cols; j++)
	{
		int numberOfEven = 0;
		int numberOfOdd = 0;
		for (int i = 0; i < rows; i++)
		{
			
			if (matrix[i][j] % 2 == 0)
			{
				numberOfEven++;
			}
			else
			{
				numberOfOdd++;
			}
		}
		if (numberOfOdd > numberOfEven)
		{
			int temp = 0;
			for (int i = 0; i < rows / 2; i++)
			{
				temp = matrix[i][j];
				matrix[i][j] = matrix[rows - i - 1][j];
				matrix[rows - i - 1][j] = temp;
			}
		}
	}
}

void flipFirstDiagonal(int** matrix, int rows, int cols)
{
	int temp = 0;
	for (int i = 0, j = 0; i < rows / 2; i++, j++)
	{
		temp = matrix[i][j];
		matrix[i][j] = matrix[rows - i - 1][cols - i - 1];
		matrix[rows - i - 1][cols - i - 1] = temp;
		
	}
}

void flipSecondDiagonal(int** matrix, int rows, int cols)
{
	int temp = 0;
	for (int i = cols - 1, j = 0; i >= cols / 2; i--, j++)
	{
		temp = matrix[i][j];
		matrix[i][j] = matrix[j][i];
		matrix[j][i] = temp;
	}
}

void fixMatrix(int** matrix, int rows, int cols)
{
	flipOddCols(matrix, rows, cols);
	if (rows == cols)
	{
		flipFirstDiagonal(matrix, rows, cols);
		flipSecondDiagonal(matrix, rows, cols);
	}
}

int main()
{
	int rows;
	cin >> rows;
	int cols;
	cin >> cols;
	int** matrix = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}
	fillMatrix(matrix, rows, cols);
	fixMatrix(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	for (int i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
}
