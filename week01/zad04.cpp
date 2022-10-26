#include <iostream>
using namespace std;

int main()
{
    int number;
    std::cin >> number;
    int n1, n10, n100;
    n1 = number % 10;
    n10 = (number % 100) / 10;
    n100 = number / 100;
    std::cout << n100 <<endl;
    std::cout << n10 <<endl;
    std::cout << n1 <<endl;
    std::cout << n100 + n10 + n1;
    return 0;
}
