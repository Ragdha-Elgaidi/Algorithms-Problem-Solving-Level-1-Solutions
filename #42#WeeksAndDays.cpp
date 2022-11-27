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
 
float HoursToDays(float NumberOfHours)
{
	return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
	return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays)
{
	return (float)NumberOfDays / 7;
}

int main()
{
	float NumberOfHours = ReadPositiveNumber("Please,Enter Number Of Hours");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
	return 0;
 
}
