#include <iostream>
#include <string>

using namespace std;

enum enMounthsOfYear{Jan=1,Feb=2,Mar=3,Apr=4,May=5,Jun=6,Jul=7,Aug=8,Sep=9,Oct=10,Nov=11,Dec=12};

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

enMounthsOfYear ReadMounthOfYear()
{
	return (enMounthsOfYear) ReadNumberInRange(" Choose Any Number 1:12",1,12);
}

string GetMounthOfYear(enMounthsOfYear Mounth)
{
	switch (Mounth)
	{
	case enMounthsOfYear::Jan :
		return "January";
	case enMounthsOfYear::Feb:
		return "Febraruy";
	case enMounthsOfYear::Mar:
		return "March";
	case enMounthsOfYear::Apr:
		return "April";
	case enMounthsOfYear::May:
		return "May";
	case enMounthsOfYear::Jun:
		return "June";
	case enMounthsOfYear::Jul:
		return "July";
	case enMounthsOfYear::Aug:
		return "August";
	case enMounthsOfYear::Sep:
		return "September";
	case enMounthsOfYear::Oct:
		return "October";
	case enMounthsOfYear::Nov:
		return "November";
	case enMounthsOfYear::Dec:
		return "December";
	default:
		return "Not a Valid Day";
	}
}

int main()
{
	cout << GetMounthOfYear(ReadMounthOfYear()) << endl;
	return 0;
}
