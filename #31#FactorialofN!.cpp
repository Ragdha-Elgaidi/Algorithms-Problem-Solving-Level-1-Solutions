#include <iostream>
#include <string>
using namespace std;
int ReadPostiveNumber(string message)
{
	int Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	}while(Number < 0);
	return Number;


}
int Factorial(int N)
{
	int F = 1;
	for (int counter = N; counter >= 1; counter--)
	{
		F *= counter;
	}
	return F;
}
int main()
{
	cout << Factorial(ReadPostiveNumber("Enter Psitive Number")) << endl;
	return 0;
}
