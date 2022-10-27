#include <iostream>
using namespace std;

int main()
{
    bool beerInFridge;
    cin >> beerInFridge;
    bool rakijaInFridje;
    cin >> rakijaInFridje;
    bool iceInRefrigeratory;
    cin >> iceInRefrigeratory;
    if (beerInFridge)
    {
        cout << "Tishko will drink at home!";
    }
    else
    {
        if (rakijaInFridje)
        {
            if (iceInRefrigeratory)
            {
                cout << "Tishko will drink at home!";
            }
            else
            {
                cout << "Tisho will have to go to the store for a cold beer.";
            }
        }
        else
        {
            cout << "Tisho will have to go to the store for a cold beer.";
        }
        
        
    }
    
}