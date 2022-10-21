#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    double x1, x2;
    if (b*b - 4*a*c >= 0)
    {
        (x1 = -b + sqrt(b*b - 4*a*c)/(2*a));
        (x1 = -b - sqrt(b*b - 4*a*c)/(2*a));
        cout << x1 << " " << x2 << endl;
    }
    else
    {
        cout << "No real solutions.";
    }
}