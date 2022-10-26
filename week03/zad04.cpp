#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin >> letter;
    if ((letter >= 65 && letter <= 90)||(letter >= 97 && letter <= 122))
    {
        cout << letter << " is a letter";
    }
    else
    {
        cout << letter << " is not a letter";
    }
    
}