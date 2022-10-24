#include <iostream>
#include <string>
using namespace std;
const float PI = 3.14;
float ReadSquareSide()
{
	float S;
	cout << "please , enter the diameter of the circle\n";
	cin >> S;
	return S;
}
float CalculateArea(float S)
{
	float Area = PI * pow((S/2), 2);
	return Area;
}
void PrintResult(float Area)

{
	cout << "the area of cicle is " << Area << endl;
}
int main()
{
	PrintResult(CalculateArea(ReadSquareSide()));
	return 0;
}
