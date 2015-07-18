/*Write a program using nested loops that asks the user to enter a value for the
number of rows to display. It should then display that many rows of asterisks, with
one asterisk in the first row, two in the second row, and so on. For each row, the
asterisks are preceded by the number of periods needed to make all the rows
display a total number of characters equal to the number of rows.A sample run
would look like this:
Enter number of rows: 5
....*
...**
..***
.****
******/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int rows;

	cout << "Enter number of rows: ";
	cin >> rows;

	for (int i = 0; i < rows; i++) //length
	{
		for (int j = rows - 1; j > i; j--)
		{
			cout << ".";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << " " << endl;
	}

	system("pause");

	return 0;
}