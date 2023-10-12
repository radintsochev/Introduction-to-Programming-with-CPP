#include <iostream>
using namespace std;

const int SIZE = 1024;

int lengthOf(char* array)
{
    int result = 0;
    while (array[result] != '\0')
    {
        result++;
    }
    return result;
}

bool isNumber(char symbol)
{
    return symbol >= '0' && symbol <= '9';
}

void cleanNumbers(char* array, int length, int i = 0)
{
    if (array[i] == 0)
    {
        return;
    }
    else if (isNumber(array[i]))
    {
        int j = i;
        for (; j < length; j++)
        {
            array[j] = array[j + 1];
        }
        array[j + 1] = 0;
        length--;
    }
    cleanNumbers(array, length, i + 1);

}

int main()
{
    char* input = new char[SIZE];
    cin.getline(input, SIZE);
    int length = lengthOf(input) - 1;
    cleanNumbers(input, length);
    cout << input;
    delete[] input;
}