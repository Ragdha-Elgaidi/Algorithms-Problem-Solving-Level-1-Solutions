#include <iostream>
#include <string>

using namespace std;
string ReadPinCode()
{
	string PinCode;
	cout << "Enter,enter Pin Code\n";
	cin >> PinCode;
	return PinCode;
}

bool Login()
{
	string PinCode;
	int counter = 3;
	do
	{
		counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
			return 1;
		else
		{
			cout << "WrongPIN ,You have " << counter << "more tries\n";
			system("color 4F");//turn Screen red
		}
	} while (PinCode != "1234" && counter >= 1);
	return 0;
}


int main()
{
	if (Login())
	{
		system("color 2F");//Turn screen to green
		cout << "Your Balance is " << 7500 << endl;
	}
	else
	{
		cout << "Your Card wase blocked,Call the bank for  help\n";
	}
	return 0;
}
