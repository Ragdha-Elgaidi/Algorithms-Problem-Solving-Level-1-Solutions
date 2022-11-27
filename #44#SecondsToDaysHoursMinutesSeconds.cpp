#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration
{
	int NumbersOfDays;
	int NumberOfHours;
	int NumberOfMinutes;
	int NumberOfSeconds;
};

float ReadPositiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message<<"\n";
		cin >> Number;
	} while (Number<=0);
	return Number;
}
 
strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;
	const int SecondPerDay = 24 * 60 * 60;
	const int SecondPerHour = 60 * 60;
	const int SecondPerMinute = 60;
	int Remainder = 0;
	TaskDuration.NumbersOfDays = floor(TotalSeconds / SecondPerDay);
	Remainder = TotalSeconds % SecondPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondPerHour);
	Remainder = Remainder % SecondPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondPerMinute);
	Remainder = Remainder % SecondPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;
	return TaskDuration;
}

void TaskDurationInDetails(strTaskDuration TaskDurartion)
{
	cout << TaskDurartion.NumbersOfDays << ":"
		<< TaskDurartion.NumberOfHours << ":"
		<< TaskDurartion.NumberOfMinutes << ":"
		<< TaskDurartion.NumberOfSeconds << endl;
}

int main()
{
	int TotalSecond = ReadPositiveNumber("Please,Enter Total Seconds");
	TaskDurationInDetails(SecondsToTaskDuration(TotalSecond));
	return 0;
}
