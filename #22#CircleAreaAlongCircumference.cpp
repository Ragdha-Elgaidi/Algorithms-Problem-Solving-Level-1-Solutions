#include <iostream>
#include <string>
using namespace std;
const float PI = 3.14;
float ReadCircumference()
{
	float cf;
	cout << "please , enter the circumference of the circle\n";
	cin >> cf;
	return cf;
}
float CalculateArea(float cf)
{
	float Area = pow(cf,2)/(4*PI);
	return Area;
}
void PrintResult(float Area)

{
	cout << "the area of cicle is " << Area << endl;
}
int main()
{
	PrintResult(CalculateArea(ReadCircumference()));
	return 0;
}
