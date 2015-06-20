/*Write a program that asks the user to enter a latitude in degrees, minutes, and seconds
and that then displays the latitude in decimal format.There are 60 seconds of
arc to a minute and 60 minutes of arc to a degree; represent these values with symbolic
constants.You should use a separate variable for each input value.A sample
run should look like this:
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double degrees, minutes, seconds, decimal, minConversion;

	cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	const int secToMin = 60;
	const int minToDeg = 60;

	minConversion = minutes + (seconds/secToMin);
	decimal = degrees + (minConversion / minToDeg);

	cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << decimal;

	return 0;
}