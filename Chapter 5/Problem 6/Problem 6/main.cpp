/*Do Programming Exercise 5 but use a two-dimensional array to store input for 3
years of monthly sales. Report the total sales for each individual year and for the
combined years.*/

#include <iostream>
#include <array>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int sales[3][12];
	char month[12] = { 'J', 'F', 'M', 'A', 'M', 'J', 'J', 'A', 'S', 'O', 'N', 'D' };

	for (int i = 0; i < 3; i++)
	{
		cout << "Enter sales data for year " << i + 1 << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << "The number of sales in month " << month[j] << ": ";
			cin >> sales[i][j];
		}
	}

	int sum[3] = { 0 }, total = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			sum[j] = sales[i][j];
		}
		int j = 0;
		total += sum[j];
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "The total amount of sales for the year " << i + 1 << " is: " << endl;
	}

	cout << "Total sales: " << total;
	
	system("pause");

	return 0;
}