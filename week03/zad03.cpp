#include <iostream>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x;
    cin >> a;
    cin >> b;
    if (x > a && x < b)
    {
        cout << x << " is in (" << a << ", "<< b <<")";
    }
    else
    {
        cout << x << " is not in (" << a << ", "<< b <<")";
    }
}