#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int* throwDices()
{
    srand(time(NULL) + rand());
    int dices[5];
    for (int i = 0; i < 5; i++)
    {
        dices[i] = rand() % 6 + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << dices[i] << " ";
    }
    cout << endl;
    return dices;
}

bool isSpecial(int* dices)
{
    double countOfRepeatingNumbers = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (dices[i] == dices[j])
            {
                countOfRepeatingNumbers += 0.5;
            }
        }

    }
    return countOfRepeatingNumbers >= 3;
}
void printThrow(int* throwDices)
{
    for (int i = 0; i < 5; i++)
    {
        cout << *(throwDices + i) << " ";
    }
    cout << endl;
}

int howManyThrows()
{
    int countOfThrows = 0;
    int countOfConsecutiveThrows = 0;
    while (countOfConsecutiveThrows < 3)
    {
        srand(time(NULL) + rand());
        int* dices;
        for (int i = 0; i < 5; i++)
        {
            *(dices + i) = rand() % 6 + 1;
        }
        printThrow(dices);
        if (isSpecial(dices))
        {
            ++countOfConsecutiveThrows;
        }
        else
        {
            countOfConsecutiveThrows = 0;
        }
        ++countOfThrows;
    }
    return countOfThrows;


}

void fillArray(int array[5])
{
    for (int i = 0; i < 5; i++)
    {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }

}

int main()
{
    cout << howManyThrows();
    return 0;
}