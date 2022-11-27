#include <iostream>
#include <string>

using namespace std;


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
 
float CalculateRemainder(float TotalBill, float TotalCash)
{
	return TotalCash - TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please ,Enter Total Bill");
	float TotalCash = ReadPositiveNumber("Please ,Enter Total Cash");
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash = " << TotalCash << endl;
	cout << "the remainder = " << CalculateRemainder(TotalBill, TotalCash) << endl;
	return 0;
 
}
