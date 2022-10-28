#include <iostream>
using namespace std;
int main()
{
    int p;
    cin >> p;
    cout << boolalpha << (p % 4 == 0 || p % 7 == 0);
    
}
