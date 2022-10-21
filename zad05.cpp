#include <iostream>

using namespace std;
int main()
{
    int number1, number2;
    cin >> number1;
    cin >> number2;
    if (number1 > 0 || number2 > 0)
    {
        cout << "1 is positive";
    }
    else if (number1 > 0 && number2 > 0)
    {
        cout << "2 are positive";
    }
    else
    {
        cout << "0 are positive";
    }
    
}