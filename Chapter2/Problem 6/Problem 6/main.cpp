/*Write a program that has main() call a user-defined function that takes a distance
in light years as an argument and then returns the distance in astronomical units.
The program should request the light year value as input from the user and display
the result, as shown in the following code:
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
An astronomical unit is the average distance from the earth to the sun (about
150,000,000 km or 93,000,000 miles), and a light year is the distance light travels in
a year (about 10 trillion kilometers or 6 trillion miles). (The nearest star after the
sun is about 4.2 light years away.) Use type double (as in Listing 2.4) and this conversion
factor:
1 light year = 63,240 astronomical units*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double light, astro;

	cout << "Enter the number of light years: ";
	cin >> light;

	astro = light * 63240;

	cout << light << " light years = " << astro << " astronomical units." << endl;

	return 0;
}