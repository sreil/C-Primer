/*Write a program that has main() call a user-defined function that takes a Celsius
temperature value as an argument and then returns the equivalent Fahrenheit value.
The program should request the Celsius value as input from the user and display
the result, as shown in the following code:
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
For reference, here is the formula for making the conversion:
Fahrenheit = 1.8 × degrees Celsius + 32.0*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double c, f; //for celsius and fahrenheit

	cout << "Please enter a Celsius value: ";
	cin >> c;

	f = 1.8 * c + 32;

	cout << c << " degrees Celsius is " << f << " degrees Fahrenheit." << endl;

	return 0;
}