#include <iostream>
#include <string>
using namespace std;

enum enNumberType {odd=1,even=2};
int ReadNumber()
{
	int number;
	cout << "Please,enter your number " << endl;
	cin >> number;
	return number;
}
enNumberType CheckDataType(int number)
{
	int results = number % 2;
	if (results == 0)
		return enNumberType::even;
	else
		return enNumberType::odd;
}
void PrintNumberType(enNumberType numbertype)
{
	if (numbertype == enNumberType::even)
		cout << "The Number is even" << endl;
	else
		cout << "The number is odd" << endl;
}
int main()
{
	PrintNumberType(CheckDataType(ReadNumber()));
	return 0;
}
