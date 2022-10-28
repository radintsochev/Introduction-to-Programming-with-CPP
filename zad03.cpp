#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400) 
            {
                cout << "leap year";
            }
            else
            {
                cout << "normal year";
            }
            
        }
        else 
        {
            cout << "leap year";
        }
        
    }
    else
    {
        cout << "normal year";
    }
    return 0;
}