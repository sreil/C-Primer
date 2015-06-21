/*Write a program that asks the user to enter the number of seconds as an integer
value (use type long, or, if available, long long) and that then displays the equivalent
time in days, hours, minutes, and seconds. Use symbolic constants to represent
the number of hours in the day, the number of minutes in an hour, and the number
of seconds in a minute.The output should look like this:
Enter the number of seconds: 31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	long long seconds, remainingSeconds, daySolution, hoursSolution, minutesSolution;

	cout << "Enter the number of seconds: ";
	cin >> seconds;

	long long const secondsInMinute = 60;
	long long const hoursInDay = 24;
	long long const minutesInHour = 60;

	minutesSolution = seconds / secondsInMinute;
	remainingSeconds = seconds % secondsInMinute;

	hoursSolution = minutesSolution / minutesInHour;
	int minutesLeft = minutesSolution % minutesInHour;

	daySolution = hoursSolution / hoursInDay;
	int hoursLeft = hoursSolution % hoursInDay;

	cout << seconds << " seconds = " << daySolution << " days " << hoursLeft << " hours " << minutesLeft << " minutes " << remainingSeconds << " seconds." << endl;

	system("pause");

	return 0;
}