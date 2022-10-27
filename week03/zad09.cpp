#include <iostream>
using namespace std;

int main()
{
    double amount;
    cin >> amount;
    int inputCurrency;
    cin >> inputCurrency;
    int outputCurrency;
    cin >> outputCurrency;
    switch (inputCurrency)
    {
        case 215:
            switch (outputCurrency)
            {
            case 215:
                amount *= 1.0;
            break;
        
            case 236:
                amount *= 0.51;
                break;
        
            case 217:
                amount *= 0.44;
            break;
        
            default:
                cout << "Not a supported currency";
            break;
            }
        break;
        
        case 236:
            switch (outputCurrency)
            {
            case 215:
                amount *= 1.95;
            break;
            
            case 236:
                amount *= 1.0;
            break;
            
            case 217:
                amount *= 0.86;
            break;
            
            default:
                cout << "Not a supported currency";
            break;
            }
        break;
    
        case 217:
            switch (outputCurrency)
            {
            case 215:
                amount *= 2,27;
            break;
            
            case 236:
                amount *= 1.16;
            break;
            
            case 217:
                amount *= 1.0;
            break;
            
            default:
                cout << "Not a supported currency";
            break;
            }
        break;
    }
    cout << amount;
    return 0;
}