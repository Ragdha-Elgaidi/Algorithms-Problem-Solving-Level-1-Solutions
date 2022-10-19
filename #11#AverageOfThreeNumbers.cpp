#include <iostream>
using namespace std;
void ReadNumbers(int& num1, int& num2, int& num3)
{
	cout << "Please , enter number 1: \n";
	cin >> num1;
	cout << "Please , enter number 2: \n";
	cin >> num2;
	cout << "Please , enter number 1: \n";
	cin >> num3;
}
int SumOfNumbers(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}
float AverageOfNumbers(int num1, int num2, int num3)
{
	return (float)SumOfNumbers(num1, num3, num3) / 3;
}
void PrintResults(int total,float average)
{
	cout << "the sum of three numbers is " << total << endl;
	cout << "\nthe Average of three numbers is " << average << endl;

}
int main()
{
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(SumOfNumbers(num1, num2, num3),AverageOfNumbers(num1,num2,num3));
	return 0;
}
