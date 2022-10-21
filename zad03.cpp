#include <iostream>

using namespace std;
int main()
{
    int x, a, b;
    cin >> x;
    cin >> a;
    cin >> b;
    bool isTrue = x >= a && x <= b;
    if (isTrue)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    
}