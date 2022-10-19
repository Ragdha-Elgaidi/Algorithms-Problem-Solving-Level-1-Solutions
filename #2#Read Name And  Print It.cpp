#include <iostream>
#include <string>
using namespace std;
string ReadYourName()
{
	string name;
	cout << "Please,Enter your name  "  << endl;
	getline(cin, name);
	return name;
}
void PrintYourName(string name)
{
	cout << "your name is : " << name << endl;
}
int main()
{
	PrintYourName(ReadYourName());
}
