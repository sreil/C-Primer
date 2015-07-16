/*You sell the book C++ for Fools.Write a program that has you enter a year’s worth
of monthly sales (in terms of number of books, not of money).The program should
use a loop to prompt you by month, using an array of char * (or an array of
string objects, if you prefer) initialized to the month strings and storing the input
data in an array of int.Then, the program should find the sum of the array contents
and report the total sales for the year.*/

#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int sales[12];
	char month[12] = { 'J', 'F', 'M', 'A', 'M', 'J', 'J', 'A', 'S', 'O', 'N', 'D' };

	int sum = 0;

	for (int i = 0; i < 12; i++)
	{
		cout << "The number of sales in month " << month[i] << " is: ";
		cin >> sales[i];
		sum += sales[i];
	}

	cout << "The total amount of sales for the year is " << sum;

	return 0;
}