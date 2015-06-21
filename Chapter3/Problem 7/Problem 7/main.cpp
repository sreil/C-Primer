/*Write a program that asks you to enter an automobile gasoline consumption figure
in the European style (liters per 100 kilometers) and converts to the U.S. style of
miles per gallon. Note that in addition to using different units of measurement, the
U.S. approach (distance / fuel) is the inverse of the European approach (fuel / distance).
Note that 100 kilometers is 62.14 miles, and 1 gallon is 3.875 liters.Thus, 19
mpg is about 12.4 l/100 km, and 27 mpg is about 8.7 l/100 km.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double kilo, liters, gallons, mpg, miles;

	const double kiloToMile = 62.14;
	const double gallonToLiter = 3.85;

	cout << "Enter how many kilometers you travelled: ";
	cin >> kilo;
	cout << "Enter how many liters you consumed: ";
	cin >> liters;

	miles = kilo * kiloToMile;
	gallons = liters * gallonToLiter;
	mpg = miles / gallons;

	cout << "Your miles per gallon is " << mpg << endl;

	return 0;
}