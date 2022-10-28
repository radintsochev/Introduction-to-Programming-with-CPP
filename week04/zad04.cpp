#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                cout << "Valid triangle";
            }
            else
            {
                cout << "Not a valid triangle";
            }
            
        }
        else
        {
            cout << "Not a valid triangle";
        }
        
    }
    else
    {
        cout << "Not a valid triangle";
    }
    
}
