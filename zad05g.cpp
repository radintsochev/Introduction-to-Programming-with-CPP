#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    int z;
    cin >> z;
    int w;
    cin >> w;
    int r;
    cin >> r;
    if ((x > z - r && x < z + r) && (y > w - r && y < w + r))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
   