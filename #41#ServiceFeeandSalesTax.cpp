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
 
float TotalBillAfterServicesAndTax(float TotalBill)
{
	TotalBill *= 1.1;
	TotalBill *= 1.16;
	return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please ,Enter Total Bill");
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Services Fee And Sales Tax = "
		<< TotalBillAfterServicesAndTax(TotalBill) << endl;
	return 0;
 
}
