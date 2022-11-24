#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleData(float& A, float& B)
{
	cout << "Please, Enter Triangle Side A\n";
	cin >> A;
	cout << "Please,Enter Triangle Base B\n";
	cin >> B;
}
float AreaOfCircle(float A, float B)
{
	const float  PI = 3.14;
	float Area = PI *  (pow(B,2) / 4 )*((2 * A - B) / (2 * A + B));
	return Area;
}
void PrintResults(float Area)
{
	cout << "Area Of Circle = " << Area << endl;
}
int main()
{
	float A, B;
	ReadTriangleData(A, B);
	PrintResults(AreaOfCircle(A, B));
	return 0;
}
