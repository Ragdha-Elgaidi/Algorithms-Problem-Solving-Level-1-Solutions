#include <iostream>
#include <string>
using namespace std;
struct StPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};
StPiggyBankContenet ReadPiggyBankContenet()
{
	StPiggyBankContenet PiggyBankContenet;
	cout << "Please,Enter Total Pennies\n";
	cin>>PiggyBankContenet.Pennies;
	cout << "Please, Enter Total Nickels\n";
	cin>> PiggyBankContenet.Nickels;
	cout << "Please, Enter Total Dimes\n";
	cin >> PiggyBankContenet.Dimes;
	cout << "Please,Enter Total Quarters\n";
	cin >> PiggyBankContenet.Quarters;
	cout << "Please,Enter Total Dollars\n";
	cin >> PiggyBankContenet.Dollars;
	return PiggyBankContenet;
}
int CalculateTotalPennies(StPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;
	TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 +
		PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 +
		PiggyBankContenet.Dollars * 100;
	return TotalPennies;
}
int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;
	return 0;
}
