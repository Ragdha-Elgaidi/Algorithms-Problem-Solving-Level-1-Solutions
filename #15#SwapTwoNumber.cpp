#include <iostream>
using namespace std;
void ReadTwoNumbers(int& num1, int& num2)
{
	cout << "Please,enter number 1:\n";
	cin >> num1;
	cout << "please,enter number 2:\n";
	cin >> num2;
}
void Swap(int& num1, int& num2)
{
	int temp;
	temp=num1;
	num1 = num2;
	num2 = temp;
}
void PrintResults(int num1,int num2)
{
	cout << "Number One :\n" << num1 << endl;
	cout << "Number Two : \n" << num2 << endl;
}
int main()
{
	int num1, num2;
	ReadTwoNumbers(num1,num2);
	PrintResults(num1, num2);
	Swap(num1, num2);
	PrintResults(num1, num2);
	return 0;
}
