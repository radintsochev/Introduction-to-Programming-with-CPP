#include <iostream>

using namespace std;
int main()
{
    char letter;
    cin >> letter;
    (letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122) ? cout << "true" : cout << "false";
}