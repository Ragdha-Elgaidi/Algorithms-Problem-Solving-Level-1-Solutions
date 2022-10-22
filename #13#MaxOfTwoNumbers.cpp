#include <iostream>
using namespace std;
void ReadOfTwoNumbers(int &num1 ,int &num2)
{
	cout << "please , enter Number 1:\n";
	cin >> num1;
	cout << "please , enter Number 2:\n";
	cin >> num2;
}
int MaxOfTwoNumbers(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
void PrintResults(int max)
{
	cout << "the Max of the Two numbers is :\n" << max << endl;
}
int main()
{
	int num1, num2;
	ReadOfTwoNumbers(num1, num2);
	PrintResults(MaxOfTwoNumbers(num1,num2));
	return 0;
}
