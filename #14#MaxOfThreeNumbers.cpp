#include <iostream>
using namespace std;
void ReadOfThreeNumbers(int &num1 ,int &num2,int &num3)
{
	cout << "please , enter Number 1:\n";
	cin >> num1;
	cout << "please , enter Number 2:\n";
	cin >> num2;
	cout << "please ,enter Number 3:\n";
	cin >> num3;
}
int MaxOfThreeNumbers(int num1, int num2,int num3)
{
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else if (num3 > num1 && num3 > num2)
		return num3;
}
void PrintResults(int max)
{
	cout << "the Max of the Three numbers is :\n" << max << endl;
}
int main()
{
	int num1, num2,num3;
	ReadOfThreeNumbers(num1, num2,num3);
    PrintResults(MaxOfThreeNumbers(num1,num2,num3));
	return 0;
}
