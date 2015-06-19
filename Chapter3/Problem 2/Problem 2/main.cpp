/*Write a short program that asks for your height in feet and inches and your weight
in pounds. (Use three variables to store the information.) Have the program report
your body mass index (BMI).To calculate the BMI, first convert your height in feet
and inches to your height in inches (1 foot = 12 inches).Then convert your height
in inches to your height in meters by multiplying by 0.0254.Then convert your
weight in pounds into your mass in kilograms by dividing by 2.2. Finally, compute
your BMI by dividing your mass in kilograms by the square of your height in
meters. Use symbolic constants to represent the various conversion factors.*/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int feet, inches, weight, totalHeight;
	double bmi, massInKilo, heightInMeters;

	const int feetInInches = 12;

	cout << "How many feet tall are you? " << endl;
	cin >> feet;
	cout << "How many inches tall are you?" << endl;
	cin >> inches;
	cout << "What is your weight?" << endl;
	cin >> weight;

	totalHeight = (feet* feetInInches) + inches;

	heightInMeters = totalHeight * .0254;

	massInKilo = weight / 2.2;

	bmi = massInKilo / pow(heightInMeters, 2);

	cout << "Your bmi is " << bmi << endl;

	return 0;
}