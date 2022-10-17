#include <iostream>
#include <string>
using namespace std;
struct Strinfo
{
	int Age;
	bool HasDriveningLicence;
	bool HasRecommendation;
};
Strinfo ReadInfo()
{
	Strinfo info;
	cout << "please , enter your age\n";
	cin >> info.Age;
	cout << "Do you have a driven licence\n";
	cin >> info.HasDriveningLicence;
	cout << "Do you have a Rcommendation\n";
	cin >> info.HasRecommendation;
	return info;
}
bool IsAccepted(Strinfo info)
{
	if (info.HasRecommendation)
		return true;
	else
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
