/*Write a program that asks the user to type in numbers.After each entry, the program
should report the cumulative sum of the entries to date.The program should
terminate when the user enters 0.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double number, sum = 0;

	do {
		cout << "Enter a number, press 0 to stop adding numbers: ";
		cin >> number;

		sum += number;

		cout << "The sum of the numbers entered is: " << sum << endl;
	} while (number != 0);
		
	return 0;
}