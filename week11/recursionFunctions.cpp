#include <iostream>
#include <cmath>
using namespace std;

void fillArray(double* arr, int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << "array [" << i << "]: ";
        cin >> arr[i];
    }
    
}

double magicSumOfArray(double* arr, int arrLength, double sum = 0)
{
    if (arrLength == 1)
    {
        return sum;
    }
    if (*arr > 0 && *arr > *(arr + 1))
    {
        sum += *arr;
    }
    --arrLength;
    arr = arr + 1;
    sumOfArray(arr, arrLength, sum);
    
}

int fib(int n, int number1 = 0, int number2 = 1, int counter = 2)
{
    if (counter == n + 1)
    {
        return number2;
    }
    fib(n, number2, number1 + number2, ++counter);
}

bool isPalindrome(int number, int reversedNumber = 0, int copyNumber = 0, int counter = 0)
{
    if (number == 0)
    {
        if (copyNumber == reversedNumber)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    reversedNumber *= 10;
    isPalindrome(number / 10, revrsedNumber + number % 10, copyNumber + (number % 10) * pow(10, counter), ++counter);
}

int sumOfArray(int* arr, int arrLength, int sum = 0)
{
    if (arrLength == 0)
    {
        return sum;
    }
    sumOfArray(arr + 1, --arrLength, sum += *arr);
}

bool isSorted(int* arr, int arrLength)
{
    if (arrLength == 1)
    {
        return true;
        
    }
    if (*arr > *(arr + 1))
    {
        return false;
    }
    isSorted(arr + 1, --arrLength);
}

bool isPowerOf2(double number)
{
    if (number == 1)
    {
        return true;
    }
    if (number - int(number) != 0)
    {
        return false;
    }

    isPowerOf2(number / 2);
}

int min(int* arr, int arrLength, int minimum = INT32_MAX)
{
    if (arrLength == 0)
    {
        return minimum;
    }
    if (minimum > *arr)
    {
        minimum = *arr;
    }
    min(arr + 1, --arrLength, minimum);
}


int main()
{
    int a = 1234;
    double arr[7] = {2, -1.9, 1.1, 3.5, 1, 0, 8.3};
    int arr1[7] = {2, -1, 1, 3, 1, 0, 8};
    cout << magicSumOfArray(arr, 7) << endl;
    cout << fib(15) << endl;
}
