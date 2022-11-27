#include <iostream>
#include <string>

using namespace std;

enum enDaysOfWeek{sat=1,sun=2,mon=3,tue=4,wed=5,thu=6,fri=7,};

int ReadNumberInRange(string message ,int From, int To)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}

enDaysOfWeek ReadDayOfWeek()
{
	return (enDaysOfWeek) ReadNumberInRange("Please,enter Number of Day you want sat=1,sun=2,mon=3,tue=4,wed=5,thu=6,fri=7 ", 1, 7);
}

string GetDayOfWeek(enDaysOfWeek Day)
{
	switch (Day)
	{
	case enDaysOfWeek::sat:
		return "Saturdday";
	case enDaysOfWeek::sun:
		return "SunDay";
	case enDaysOfWeek::mon:
		return "Monday";
	case enDaysOfWeek::tue:
		return "Tuesday";
	case enDaysOfWeek::wed:
		return "Wednesday";
	case enDaysOfWeek::thu:
		return "Thursday";
	case enDaysOfWeek::fri:
		return "Friday";
	default:
		return "Not a Valid Day";
	}
}

int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;
}
