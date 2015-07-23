/*Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate
the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:
harmonic mean = 2.0 × x × y / (x + y)*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double harmonic(int, int);

int main()
{
	int x, y;
	double mean;
	
	cout << "Please enter 2 numbers: ";
	cin >> x >> y;

	while (x != 0 || y != 0)
	{
		mean = harmonic(x, y);
		cout << "Harmonic mean = " << mean << endl;
		cout << "Please enter 2 more numbers: ";
		cin >> x >> y;
		break;
	}

	system("pause");

	return 0;
}

double harmonic(int x, int y)
{
	double mean;
	mean = ((x * y) * 2.0) / (x + y);
	return mean;

}