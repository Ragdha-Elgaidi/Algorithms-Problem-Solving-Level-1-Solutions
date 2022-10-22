#include <iostream>
using namespace std;
enum enPassFail {Pass=1,Fail=2};
void ReadNumbers(int& mark1, int& mark2, int& mark3)
{
	cout << "Please , enter mark1:\n";
	cin >> mark1;
	cout << "please , enter mark2 :\n";
	cin >> mark2;
	cout << "please , enter mark3 :\n";
	cin >> mark3;
}
int SumOfThreeMarks(int mark1, int mark2, int mark3)
{
	return mark1 + mark2 + mark3;
}
float CalculateAverage(int mark1, int mark2, int mark3)
{
	return (float)SumOfThreeMarks(mark1 ,mark2,mark3)/ 3;
}
enPassFail CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintResults(float Average)
{
	cout << " your average is " << Average << endl;
	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "You are passed" << endl;
	else
		cout << "You are Failed" << endl;
}
int main()
{
	int mark1, mark2, mark3;
	ReadNumbers(mark1, mark2, mark3);
	PrintResults(CalculateAverage(mark1, mark2, mark3));
	return 0;
}
