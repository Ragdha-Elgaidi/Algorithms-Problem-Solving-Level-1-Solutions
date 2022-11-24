#include <iostream>
using namespace std;
int ReadAge()
{
	int Age;
	cout<< "Please,Enter Your Age?"<<endl;
	cin >> Age;
	return Age;

}
bool ValidateNumberInRange(int Number, int from, int To)
{
	return (Number >= from && Number <= To);
}
int ReadUntilAgeBetween(int from, int To)
{
	int  Age = 0;
	do
	{
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, 18, 45));
	return Age;
}
void PrintResults(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is valid age" << endl;
	else
		cout << Age << " is invalid" << endl;
}
int main()
{
	PrintResults(ReadUntilAgeBetween(18,45));
	return 0;
}
