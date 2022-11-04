#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "@ ";
        }
        cout << "\n";
    }
    for (int i1 = 0; i1 < n; i1++)
    {
        for (int j1 = n - i1; j1 < 0; j1++)
        {
            cout << " ";
        }
        for (int k1 = i1; k1 <= 0; k1++)
        {
            cout << "@ ";
        }
        cout << "\n";
    }
    
}
