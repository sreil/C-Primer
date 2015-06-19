/*Write a short program that asks for your height in integer inches and then converts
your height to feet and inches. Have the program use the underscore character to
indicate where to type the response. Also use a const symbolic constant to represent
the conversion factor.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int height, feet, inches;

	cout << "Please enter your height in inches: _______" << endl;
	cin >> height;

	const int feetInInches = 12;

	feet = height / feetInInches;
	inches = height % feetInInches;

	cout << "Your height is " << feet << " feet " << inches << " inches." << endl;

	return 0;
}