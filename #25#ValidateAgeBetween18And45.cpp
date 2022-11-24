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

void PrintResults(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is valid age" << endl;
	else
		cout << Age << " is invalid" << endl;
}
int main()
{
	PrintResults(ReadAge());
	return 0;
}
