/*Write a program that reads up to 10 donation values into an array of double. (Or, if
you prefer, use an array template object.) The program should terminate input on
non-numeric input. It should report the average of the numbers and also report
how many numbers in the array are larger than the average.*/

#include <iostream>
#include <cctype>
#include <array>

using std::cout;
using std::cin;
using std::endl;

const int size = 10;

int main()
{
	double donation[size];
	double total = 0;
	int i;
	
	for (i = 0; i < size; i++)
	{
		cout << "Donation # " << i + 1 << ": ";
		if (!(cin >> donation[i]))
		{
			cin.clear();
			break;
		}
		else
			total += donation[i];
	}

	double average;
	average = total / i;

	int large = 0;
	for (int j = 0; j < i; j++)
	{
		if (donation[j] > average)
		{
			cout << "Donation # " << j + 1 << " is larger than average." << endl;
			large++;
		}
	}

	cout << "There's " << large << " donations larger than the average of " << average;
	
	system("pause");

	return 0;
}