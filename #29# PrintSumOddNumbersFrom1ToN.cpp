#include <iostream>
using namespace std;
enum enOddOrEven
{
	odd = 1, even = 2
};
int ReadNumber()
{
	int Number;
	cout << "please , Enter the number \n";
	cin >> Number;
	return Number;
}
enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::odd;
	else
		return enOddOrEven::even;
}
int SumOfOddNumbersFromOneToN_usingWhileLoop(int Number)
{
	int sum = 0;
	int counter = 0;
	while (counter < Number)
	{
		counter++;
		if (CheckOddOrEven(counter) == enOddOrEven::odd)
			sum += counter;

	}
	return sum;

}
int SumOfNumbersFromOneToN_UsingDoWhileLoop(int Number)
{
	int sum = 0;
	int counter = 0;
	do
	{
		counter++;
		if (CheckOddOrEven(counter) == enOddOrEven::odd)
		{
			sum += counter;
		}
	} while (counter < Number);
	return sum;
}
int SumOfNumbersFromOneToN_USingForLoop(int Number)
{
	int sum = 0;
	for (int counter = 1; counter <= Number; counter++)
	{
		if (CheckOddOrEven(counter) == enOddOrEven::odd)
			sum += counter;
	}
	return sum;
}
int main()
{
	int N = ReadNumber();
	cout << SumOfOddNumbersFromOneToN_usingWhileLoop(N) << endl;
	cout << SumOfNumbersFromOneToN_UsingDoWhileLoop(N) << endl;
	cout << SumOfNumbersFromOneToN_USingForLoop(N) << endl;
	return 0;
}
