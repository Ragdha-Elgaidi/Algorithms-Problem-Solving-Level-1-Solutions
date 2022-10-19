#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int number;
	cout << "Please,Enter your number :\n";
	cin >> number;
	return number;
}
float CalculateHalfNumber(int number)
{
	return ((float)number / 2);
}
void PrintHalfNumber(int number)
{
	string Results;
	Results = " Half of " + to_string(number) + " is " + to_string(CalculateHalfNumber(number));
	cout << Results << endl;

}
int main()
{
	PrintHalfNumber(ReadNumber());
	return 0;
}
