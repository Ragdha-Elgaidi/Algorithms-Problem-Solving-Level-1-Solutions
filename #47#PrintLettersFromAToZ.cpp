#include <iostream>
#include <string>

using namespace std;

void PrintLettersFromAToZ()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}
}

int main()
{
	PrintLettersFromAToZ();
	return 0;
}
