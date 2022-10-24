#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float& A, float& D)
{
	cout << "please, enter Side of rectangle\n";
	cin >> A;
	cout << "please,enter Diagonal of rectangle\n";
	cin >> D;
}
float CalculateArea(float A, float D)
{
	float Area = A*sqrt(pow(D,2)-pow(A,2));
	return  Area ;
}
void PrintResults(float Area)
{
	cout << "the area of rectangle is \n" << Area << endl;
}
int main()
{
	float A,D;
	ReadNumbers(A,D);
	PrintResults(CalculateArea(A,D));
	return 0;
}
