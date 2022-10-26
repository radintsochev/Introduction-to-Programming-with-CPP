#include <iostream>
using namespace std;
int main()
{
    int dateNumber;
    cin >> dateNumber;
    int day = dateNumber / 1000000;
    int month = (dateNumber % 1000000) / 10000;
    int year = dateNumber % 10000;
    if (month < 10)
    {
        cout << day + '/'+ '0' + month +'/'+ year;
    }
    else
    {
        cout << day + '/' + month +'/'+ year;
    }
    if (day < 10)
    {
        cout << day + '/'+ '0' + month +'/'+ year;
    }
    else
    {
        cout << day + '/' + month +'/'+ year;
    }
    
}
