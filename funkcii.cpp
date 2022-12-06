#include <iostream>
using namespace std;

const int SIZE = 100;
void swapNumbers(int &number1, int &number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int rememberOldValue(int *number1, int *number2)
{
    int old = *number1;
    *number1 = *number2;
    return old;
}

void fillArray(int arr[SIZE], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << "arr [" << i << "] = ";
        cin >> arr[i];
    }
}

void printArray(int arr[SIZE], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void multiplyArray(int arr[SIZE], int arrayLength, int number)
{

    for (int i = 0; i < arrayLength; i++)
    {
        arr[i] *= number;
    }
}

int *pointTo(int array[], int arrayLength, int number)
{
    int *pointer = nullptr;
    for (int i = 0; i < arrayLength; i++)
    {
        if (array[i] == number)
        {
            pointer = &array[i];
            return pointer;
        }
        return pointer;
    }
}

void minAndMax(int array[], int arrayLength, int min, int max)
{
    min = array[0];
    max = array[0];
    for (int i = 0; i < arrayLength; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << min << " " << max;
}

int main()
{
    int arrayLength, number, min, max;
    cin >> arrayLength;
    cin >> number;
    int *array = new int[arrayLength];
    fillArray(array, arrayLength);
    printArray(array, arrayLength);
    multiplyArray(array, arrayLength, number);
    printArray(array, arrayLength);
    cout << pointTo(array, arrayLength, number) << endl;
    minAndMax(array, arrayLength, min, max);
}