#include <iostream>
using namespace std;
int main()
{
    int month;
    cin >> month;
    int year;
    cin >> year;
    switch (month)
    {
    case 1:
        cout << 31;
        break;
    case 2:
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400) 
                {
                    cout << 29;
                }
                else
                {
                    cout << 28;
                }
                
            }
            else 
            {
                cout << 29;
            }
        
        }
        else
        {
            cout << 28;
        }
        break;
    case 3:
        cout << 31;
        break;
    case 4:
        cout << 30;
        break;
    case 5:
        cout << 31;
        break;
    case 6:
        cout << 30;
        break;
    case 7:
        cout << 31;
        break;
    case 8:
        cout << 31;
        break;
    case 9:
        cout << 30;
        break;
    case 10:
        cout << 31;
        break;
    case 11:
        cout << 30;
        break;
    case 12:
        cout << 31;
        break;
    
    default:
        break;
    }
    
    return 0;
}
