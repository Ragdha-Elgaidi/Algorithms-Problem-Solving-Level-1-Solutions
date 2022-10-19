#include <iostream>
#include <string>
using namespace std;
enum enPassFail{ Pass=1,fail=2};
int ReadMark()
{
	int mark;
	cout << "please,enter your mark\n";
	cin >> mark;
	return mark;
}
enPassFail CheckMark(int mark)
{
	if (mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::fail;
}
void PrintResults(int mark)
{
	if (CheckMark(mark) == enPassFail::Pass)
		cout << "You are Passed\n";
	else
		cout << "You are Failed\n";
}
int main()
{
	PrintResults(ReadMark());
	return 0;
}
