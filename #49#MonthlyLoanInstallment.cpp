#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number<=0);
	return Number;
}

float MounthlyInstallment(float LoanAmount, int TotalMounths)
{
	return (float)LoanAmount / TotalMounths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please,Enter Loan Amount");
	float TotalMounths = ReadPositiveNumber("Please,Enter Total Mounths");
	cout << "Mounthly Installment = " << MounthlyInstallment(LoanAmount, TotalMounths);
	return 0;
}
