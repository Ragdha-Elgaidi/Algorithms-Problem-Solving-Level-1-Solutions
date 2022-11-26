#include <iostream>
#include <string>

using namespace std;

float ReadNumbers(string message)
{
	float Number;
	cout << message << endl;
	cin >> Number;
	return Number;
}

float SumNumbers()
{
	int Number = 0, counter = 1, Sum = 0;
	do
	{
		Number = ReadNumbers("please,enter Number" + to_string(counter));
		if (Number == -99)
			break;
		Sum += Number;
		counter++;
	} while (Number != -99);
	return Sum;
}
int main()
{
	cout << "the Results = " << SumNumbers() << endl;
	return 0;
 
}
