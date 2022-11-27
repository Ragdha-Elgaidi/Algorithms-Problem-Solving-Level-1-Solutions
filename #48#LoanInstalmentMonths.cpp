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

float TotalMounths(float LoanAmount, float MounthlyInstallment)
{
	return (float)LoanAmount / MounthlyInstallment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please,Enter Loan Amount");
	float MounthlyInstallment = ReadPositiveNumber("Please,Enter Mounthly Installment");
	cout << "Total Mounths = " << TotalMounths(LoanAmount, MounthlyInstallment);
	return 0;
}
