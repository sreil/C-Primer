/*Write a program that requests the user to enter three times for the 40-yd dash (or
40-meter, if you prefer) and then displays the times and the average. Use an array
object to hold the data. (Use a built-in array if array is not available.)*/

#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::array;

int main()
{
	array<double, 3> time;
	double average;

	cout << "Please enter your first 40 yard dash time: ";
	cin >> time[0];
	cout << "Please enter your second 40 yard dash time: ";
	cin >> time[1];
	cout << "Please enter your final 40 yard dash time: ";
	cin >> time[2];

	average = (time[0] + time[1] + time[2]) / 3;

	cout << "Your average time was: " << average;

	return 0;
}