#include <iostream>
#include <string>
using namespace std;
const float PI = 3.14;
float ReadDiameter()
{
	float D;
	cout << "please , enter the diameter of the circle\n";
	cin >> D;
	return D;
}
float CalculateArea(float D)
{
	float Area = PI * pow((D/2), 2);
	return Area;
}
void PrintResult(float Area)

{
	cout << "the area of circle is " << Area << endl;
}
int main()
{
	PrintResult(CalculateArea(ReadDiameter()));
	return 0;
}
