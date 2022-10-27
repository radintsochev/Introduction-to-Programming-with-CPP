#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int distance;
    for (int i = 1; i < n; i++)
    {
        distance += (i * 3);
    }
    cout << distance;
    return 0;
}