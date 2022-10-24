#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(float&B, float& H)
{
	cout << "please, enter Base of Triangle\n";
	cin >> B;
	cout << "please,enter Height of Triangle\n";
	cin >> H;
}
float CalculateArea(float B, float H)
{
	float Area = 0.5*B*H;
	return  Area ;
}
void PrintResults(float Area)
{
	cout << "the area of Triangle is \n" << Area << endl;
}
int main()
{
	float B,H;
	ReadNumbers(B,H);
	PrintResults(CalculateArea(B,H));
	return 0;
}
