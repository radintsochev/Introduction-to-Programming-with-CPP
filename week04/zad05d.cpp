#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    if ((x > -5 && x < 5) && (y > -5 && y < 5) && (x < 0 && y < 0))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
