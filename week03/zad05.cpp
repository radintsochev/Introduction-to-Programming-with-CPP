#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a;
    cin >> b;
    if ( a >=0 && b >= 0)
    {
        cout << "They are both positive.";
    }
    else if ((a >=0 && b < 0) || (a < 0 && b >= 0))
    {
        cout << "Only one is positive.";
    }
    else
    {
        cout << "Neither is positive.";
    }
    
    
}