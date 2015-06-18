/*Write a program that asks the user to enter his or her age.The program then should
display the age in months:
Enter your age: 29
Your age in months is 348.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int age, months;

	cout << "Enter your age: ";
	cin >> age;

	months = age * 12;

	cout << "Your age in months is " << months;

	return 0;
}