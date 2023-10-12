#include <iostream>
using namespace std;

int* interestingNumber(int n,  int* firstNumber = nullptr, int i = 0, int* secondNumber = nullptr)
{
	if (i == n)
	{
		return firstNumber;
	}
	firstNumber = new int[(2 * i) + 1];
		for (int j = 0; j < i; j++)
		{
			firstNumber[j] = i + 1;
		}
		secondNumber = new int[(2 * (i + 1)) + 1];
		for (int j = 0, k = 0; j < (2 * (i + 1)); j++, k++)
		{
			if (k > i + 1)
			{
				k = 0;
			}
			if (j = i)
			{
				secondNumber[j] = i;
			}
			else
			{
				secondNumber[j] = secondNumber[k];
			}
			
		}
		interestingNumber(n, secondNumber, i + 1);
}

int main()
{
   interestingNumber(4);
}