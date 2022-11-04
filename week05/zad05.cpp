#include <iostream>
using namespace std;
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        int firstDigit = i/100;
        int secondDigit = (i / 10) % 10;
        int thirdDigit = i % 10;
        if (firstDigit * secondDigit * thirdDigit != 0)
        {
            if (i % (firstDigit * secondDigit * thirdDigit) == 0)
            {
                cout << i << " ";
            }
        }
        
    }
    
}
