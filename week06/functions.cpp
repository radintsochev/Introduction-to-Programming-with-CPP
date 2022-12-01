#include <iostream>
using namespace std;

int max(int number1, int number2)
{
    return (number1 > number2) ? number1 : number2;
}

int reversedNumber(int number)
{
    int reverse = 0;
    while (number > 0)
    {
        reverse *= 10;
        reverse += number % 10;
        number /= 10;
    }
    return reverse;
}

bool isPrime(int number)
{
    for (int i = 2; i < number/2; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

bool isPalindrome(int number)
{
    return number == reversedNumber(number);
}

void primes100()
{
    for (int i = 2; i <= 100; i++)
    {
        if (isPrime(i))
        {
            cout << i << ", ";
        }
        
    }
    cout << endl;
}

void primePalindromes(int n)
{
    for (int i = 11; i <= n; i++)
    {
        if (isPalindrome(i) && isPrime(i))
        {
            cout << i << ", ";
        }
        
    }
    cout << endl;
}

bool isPowerOfTwo(int number)
{
    while (number != 1 && number % 2 == 0)
    {
        number /= 2;
    }
    return number == 1;
}

void isPowerOf(int number1, int number2)
{
    int copyNumber1 = number1;
    int count = 0;
    while (copyNumber1 != 1 && copyNumber1 % number2 == 0)
    {
        copyNumber1 /= number2;
        ++count;
    }
    copyNumber1 == 1 ? cout << number1 << " is " << number2 << " to the power of " << count : cout << number1 << " is not a power of " << number2;    
}

int main()
{
    cout << max(1000, 10000) << endl;
    primes100();
    int n;
    cin >> n;
    primePalindromes(n);
    cout << boolalpha << isPowerOfTwo(2048) << endl;
    isPowerOf(26, 3);
}
