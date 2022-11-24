#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleData(float& A, float& B,float &C)
{
	cout << "Please, Enter Triangle Side A\n";
	cin >> A;
	cout << "Please,Enter Triangle Side B\n";
	cin >> B;
	cout << "Please,Enter Triangle Side C\n";
	cin >> C;
}
float AreaOfCircle(float A, float B,float C)
{
	const float  PI = 3.14;
	float P = (A + B + C) / 3;
	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Area =PI*pow(T,2);
	return Area;
}
void PrintResults(float Area)
{
	cout << "Area Of Circle = " << Area << endl;
}
int main()
{
	float A, B,C;
	ReadTriangleData(A, B,C);
	PrintResults(AreaOfCircle(A, B,C));
	return 0;
}
