#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please,enter number\n";
	cin >> Number;
	return Number;
}
int ReadPower()
{
	int Power;
	cout << "Please,Enter the Power\n";
	cin >> Power;
	return Power;
}
int PowerOfM(int Number, int Power)
{
	if (Power == 0)
	{
		return 1;
	}
	int P = 1;
	for (int i = 1; i <= Power; i++)
	{
		P *= Number;
	}
	return P;
}
	
	
int main()
{
	cout << "The Results = " << PowerOfM(ReadNumber(), ReadPower()) << endl;
	return 0;
}
