#include <iostream>
using namespace std;
int ReadNumbers()
{
	int Number;
	cout << "Please,enter number\n";
	cin >> Number;
	return Number;
}
void PowerOf2_3_4(int Number)
{
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << a << "\n" << b << "\n" << c << endl;
}
int main()
{
	PowerOf2_3_4(ReadNumbers());
	return 0;
}
