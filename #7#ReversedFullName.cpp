#include <iostream>
#include <string>
using namespace std;
struct stInfo
{
	string FirstName;
	string LastName;
};
stInfo ReadInfo()
{
	stInfo info;
	cout << "please, enter your first name\n";
	cin >> info.FirstName;
	cout << "please,enter your Last name \n";
	cin >> info.LastName;
	return info;
}
string FullName(stInfo info,bool reversed)
{
	string FullName = "";
	if(reversed)
		FullName = info.LastName + " " + info.FirstName;
	else
	    FullName = info.FirstName + " " + info.LastName;
	return FullName;
}
void PrintFullName(string FullName)
{
	cout << "Your full name is " << FullName<< endl;
}
int main()
{
	PrintFullName(FullName(ReadInfo(),true));
	return 0;
}
