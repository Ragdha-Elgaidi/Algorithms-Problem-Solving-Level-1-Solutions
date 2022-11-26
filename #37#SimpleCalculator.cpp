#include <iostream>
#include <string>

using namespace std;

enum enOperationType {Add='+',Subtract='-',Multiply='*',Divide='/' };

float ReadNumber(string message)
{
	float Number=0;
	cout << message << endl;
	cin >> Number;
	return Number;
}

enOperationType ReadOperationType()
{
	char OT = '+';
	cout << "Please,Enter operation Type('+','-','*','/')\n";
	cin >> OT;
	return (enOperationType)OT;
}

float Caculatate(float Number1, float Number2, enOperationType OT)
{
	switch (OT)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		return Number1 / Number2;
	default:
		return Number1 + Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Please,enter Number One\n");
	float Number2 = ReadNumber("Please, enter Number Two\n");
	enOperationType OT = ReadOperationType();
	cout << "\n"<<"The Results = " << Caculatate(Number1, Number2, OT) << endl;
	return 0;
 
}
