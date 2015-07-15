/*Write a program that requests the user to enter two integers.The program should
then calculate and report the sum of all the integers between and including the two
integers. At this point, assume that the smaller integer is entered first. For example, if
the user enters 2 and 9, the program should report that the sum of all the integers
from 2 through 9 is 44.*/

#include <iostream>

using std::cout;
using std::cin;

int main()
{
	int first, second, sum = 0, i;

	cout << "Enter first number: ";
	cin >> first;
	cout << "Enter second number: ";
	cin >> second;

	for (i = first; i <= second; i++)
	{
		sum = sum + i;
	}

	cout << "The sum of the numbers between " << first << " and " << second << " is " << sum;

	return 0;
}