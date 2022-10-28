#include <iostream>
using namespace std;
int main()
{
double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    double x1, x2;
    if (a == 0)
    {
        cout << "false";
    }
    else if (b*b - 4*a*c >= 0)
    {
        cout << "false";
    }
    else
    {
        cout << "true";
    }
}