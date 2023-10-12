#include <iostream>
using namespace std;

bool isLowerLetter(char symbol)
{
    return symbol >= 'a' && symbol <= 'z';
}

bool isUpperLetter(char symbol)
{
    return symbol >= 'A' && symbol <= 'Z';
}

bool isDigit(char symbol)
{
    return symbol >= '0' && symbol <= '9';
}

char lowerToUpper(char lowerLetter)
{
    lowerLetter += ('A' - 'a');
    return lowerLetter;
}

char upperToLower(char upperLetter)
{
    upperLetter += ('a' - 'A');
    return upperLetter;
}

char digitToHash(char digit)
{
    digit = '#';
    return digit;
}

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

void printArray(char* array)
{
    for (int i = 0; i < length(array); i++)
    {
        cout << array[i];
    }
    cout << endl;
}

void ceaserCipher(char* text)
{
    for (int i = 0; i < length(text); i++)
    {
        if (isDigit(text[i]))
        {
            text[i] = digitToHash(text[i]);
        }
        else if (isUpperLetter(text[i]))
        {
            text[i] = upperToLower(text[i]);
        }
        else if (isLowerLetter(text[i]))
        {
            text[i] = lowerToUpper(text[i]);
        }
    }
}

int main()
{
    char text[256];
    cin.getline(text, 256);
    ceaserCipher(text);
    printArray(text);
}