#include <iostream>
using namespace std;
int main()
{
    int digit;
    cin >> digit;
    int circles;

    switch (digit)
    {
    case 0:
        circles = 1;
        cout << "zero has "<< circles << " circles.";
        break;
    case 1:
        circles = 0;
        cout << "one has "<< circles << " circles.";
        break;
    case 2:
        circles = 0;
        cout << "two has "<< circles << " circles.";
        break;
    case 3:
        circles = 0;
        cout << "three has "<< circles << " circles.";
        break;
    case 4:
        circles = 0;
        cout << "four has "<< circles << " circles.";
        break;
    case 5:
        circles = 0;
        cout << "five has "<< circles << " circles.";
        break;
    case 6:
        circles = 1;
        cout << "six has "<< circles << " circles.";
        break;
    case 7:
        circles = 0;
        cout << "seven has "<< circles << " circles.";
        break;
    case 8:
        circles = 2;
        cout << "eight has "<< circles << " circles.";
        break;
    case 9:
        circles = 1;
        cout << "nine has "<< circles << " circles.";
        break;
    
    default:
        cout << "Not a digit";
        break;
    }
 
}
