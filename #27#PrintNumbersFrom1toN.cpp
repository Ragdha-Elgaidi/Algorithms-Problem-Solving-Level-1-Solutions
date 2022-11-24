#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "please , Enter the number \n";
	cin >> Number;
	return Number;
}
void PrintNumbersFromOneToN_UsingWhile(int N)
{
	int counter = 0;
	cout << "Range printed using while loop\n";
	while (counter < N)
	{
		counter++;
		cout << counter << endl;
	}
}
void PrintNumbersFromOneToN_UsingDoWhile(int N)
{
	int counter=0;
	cout << "Range printed using  do while loop\n";

	do
	{
		counter++;
	    cout << counter << endl;


	}while (counter < N);
}
void PrintNumbersFromOneToN_usingFor(int N)
{
	cout << "Range printed using for loop\n";

	for (int counter=1; counter <= N; counter++)
	{
		cout << counter << endl;
	}
}
int main()
{
	int N = ReadNumber();
	PrintNumbersFromOneToN_UsingWhile(N);
	PrintNumbersFromOneToN_UsingDoWhile(N);
	PrintNumbersFromOneToN_usingFor(N);
	return 0;
}
