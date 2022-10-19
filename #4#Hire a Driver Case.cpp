####################################################
write a program to ask to enter:
-Age
-Driver license
Then print "Hired" if his /her age is greater than 21 and s/he has a driver license 
otherwise print "Rejected"
#####################################################
#include <iostream>
#include <string>
using namespace std;
struct Strinfo
{
	int Age;
	bool HasDriveningLicence;
};
Strinfo ReadInfo()
{
	Strinfo info;
	cout << "please , enter your age\n";
	cin >> info.Age;
	cout << "Do you have a driven licence\n";
	cin >> info.HasDriveningLicence;
	return info;
}
bool IsAccepted(Strinfo info)
{
	return(info.Age > 21 && info.HasDriveningLicence);
};
void PrintedResults(Strinfo info)
{
	if (IsAccepted(info))
		cout << "Hired\n";
	else
		cout << "Rejected\n";
}
int main()
{
	PrintedResults(ReadInfo());
	return 0;
}
