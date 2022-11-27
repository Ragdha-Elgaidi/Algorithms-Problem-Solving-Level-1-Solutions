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
 
strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumbersOfDays = ReadPositiveNumber("Please,Enter Numbers Of Days");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please,Enter Numbers Of Hours");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please,Enter Numbers Of Minutes");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please,Enter Numbers Of Seconds");
	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuraton)
{
	int DurationInSeconds;
	DurationInSeconds = TaskDuraton.NumbersOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuraton.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuraton.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuraton.NumberOfSeconds;
	return DurationInSeconds;
}


int main()
{
	cout << "Task Duration In Seconds = " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
	return 0;
 
}
