#include <iostream>
#include <string>

using namespace std;

enum enPrimeNumber { Prime=1,NotPrime=2};

float ReadPositiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message<<"\n";
		cin >> Number;
	} while (Number<=0);
	return Number;
}

enPrimeNumber CheckPrimeNumber(int Number)
{
	int M = round(Number / 2);
	for (int counter = 2; counter <= M; counter++)
	{
		if ((Number % counter) == 0)
		{
			return enPrimeNumber::NotPrime;
		}
	}
	return enPrimeNumber::Prime;
}

void PrintNumberType(int Number)
{
	switch (CheckPrimeNumber(Number))
	{
	case enPrimeNumber::Prime:
		cout << "the number is prime\n";
		break;
	case enPrimeNumber::NotPrime:
		cout << "the number is not prime\n";
		break;
	}
}
int main()
{
	PrintNumberType(ReadPositiveNumber("Please, Enter a Positive Number"));
	return 0;
 
}
