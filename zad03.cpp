#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int factorialN = 1;
    for (int i = 1; i <= n; i++)
    {
        factorialN *= i;
    }
    cout << factorialN;
}