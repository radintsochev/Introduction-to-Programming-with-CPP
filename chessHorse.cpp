#include <iostream>
using namespace std;
const int MAX_LENGTH_MOVES = 129;

int length(char* array)
{
    int result = 0;
    while (*array != '\0')
    {
        ++result;
        ++array;
    }

    return result;
}

bool isEven(int number)
{
    return !(number % 2);
}

void moveVertical(char* currPosition, int spaces)
{
    *(currPosition + 1) += spaces;
}

void moveHorizontal(char* currPosition, int spaces)
{
    *currPosition += spaces;
}

bool isOffTheBoard(char position[3])
{
    return !((position[0] >= 'a') && (position[0] <= 'h') && (position[1] >= '1') && (position[1] <= '8'));
}

void moveKnight(char* startPosition, char* moves)
{
    char lastPosition[2]; // Тук запазваме позицията между всеки един ход.
    lastPosition[0] = startPosition[0];
    lastPosition[1] = startPosition[1];
    char currPosition[2]; // Тук запазваме позицията между всяка отделно движение.
    currPosition[0] = startPosition[0];
    currPosition[1] = startPosition[1];

    for (int i = 0; i <= length(moves); i++)
    {
        switch (moves[i])
        {
        case 'u':
            if (isEven(i)) // Значи сме на първата част от хода => трябва да се придвижим с 2 места.
            {
                moveVertical(currPosition, 2);
            }
            else // Значи сме на втората част от хода => трябва да се придвижим с 1 място.
            {
                moveVertical(currPosition, 1);
            }
            break;
        case 'd':
            if (isEven(i)) // Значи сме на първата част от хода => трябва да се придвижим с 2 места.
            {
                moveVertical(currPosition, -2); // Минус защото се движим надолу.
            }
            else // Значи сме на втората част от хода => трябва да се придвижим с 1 място.
            {
                moveVertical(currPosition, -1);
            }
            break;
        case 'r':
            if (isEven(i)) // Значи сме на първата част от хода => трябва да се придвижим с 2 места.
            {
                moveHorizontal(currPosition, 2);
            }
            else // Значи сме на втората част от хода => трябва да се придвижим с 1 място.
            {
                moveHorizontal(currPosition, 1);
            }
            break;
        case 'l':
            if (isEven(i)) // Значи сме на първата част от хода => трябва да се придвижим с 2 места.
            {
                moveHorizontal(currPosition, -2); // Минус защото се движим наляво.
            }
            else // Значи сме на втората част от хода => трябва да се придвижим с 1 място.
            {
                moveHorizontal(currPosition, -1);
            }
            break;
        }
        if (isOffTheBoard(currPosition))
        {
            if (!(isEven(i))) // Проверяваме дали сме напуснали дъската на първата или на втората част от даден ход.
            {
                cout << "Not all moves are valid. The knight cannot move " << moves[i - 1] << moves[i] << ". The final position of the knight is " << lastPosition[0] << lastPosition[1] << ".";
                return;
            }
            else
            {
                cout << "Not all moves are valid. The knight cannot move " << moves[i] << moves[i + 1] << ". The final position of the knight is " << lastPosition[0] << lastPosition[1] << ".";
                return;
            }
        }
        if (!(isEven(i)))
        {
            lastPosition[0] = currPosition[0];
            lastPosition[1] = currPosition[1];
        }
    }
    cout << "All moves are valid. The final position of the knight is " << lastPosition[0] << lastPosition[1] << ".";
}
int main()
{
    char startPosition[3];
    cout << "Knight starting position: ";
    cin.getline(startPosition, 3);
    char moves[MAX_LENGTH_MOVES];
    cout << "Moves: ";
    cin.getline(moves, MAX_LENGTH_MOVES);
    moveKnight(startPosition, moves);
}