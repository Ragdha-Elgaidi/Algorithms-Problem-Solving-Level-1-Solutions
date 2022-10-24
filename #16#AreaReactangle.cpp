#include <iostream>
using namespace std;
void ReadDimenshens(float& l, float& w)
{
	cout << "please, enter lenght of rectangle\n";
	cin >> l;
	cout << "please,enter width of rectangle\n";
	cin >> w;
}
float CalculateArea(float l, float w)
{
	float Area;
	return Area = l * w;
}
void PrintResults(float Area)
{
	cout << "the area of rectangle is " << Area << endl;
}
int main()
{
	float l, w;
	ReadDimenshens(l, w);
	PrintResults(CalculateArea(l, w));
	return 0;
}
