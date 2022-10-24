#include <iostream>
#include <string>
using namespace std;
const float PI = 3.14;
float ReadRadius()
{
	float radius;
	cout << "please , enter the radius of the circle\n";
	cin >> radius;
	return radius;
}
float CalculateArea(float radius)
{
	float Area = PI * pow(radius, 2);
	return Area;
}
void PrintResult(float Area)
{
	cout << "the area of circle is " << Area << endl;
}
int main()
{
	PrintResult(CalculateArea(ReadRadius()));
	return 0;
}
