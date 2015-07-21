/*The Kingdom of Neutronia, where the unit of currency is the tvarp, has the following
income tax code:
First 5,000 tvarps: 0% tax
Next 10,000 tvarps: 10% tax
Next 20,000 tvarps: 15% tax
Tvarps after 35,000: 20% tax
For example, someone earning 38,000 tvarps would owe 5,000 × 0.00 + 10,000 ×
0.10 + 20,000 × 0.15 + 3,000 × 0.20, or 4,600 tvarps.Write a program that uses a
loop to solicit incomes and to report tax owed.The loop should terminate when
the user enters a negative number or non-numeric input.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double tvarp;

	cout << "Please enter how many tvarps you earned: ";

	while (cin >> tvarp)
	{
		if (tvarp <= 5000)
		{
			cout << "You didn't earn enough to pay any taxes." << endl;
		}
		else if (tvarp > 5000 && tvarp <= 15000)
		{
			cout << "You owe " << tvarp * .1 << " in taxes." << endl;
		}
		else if (tvarp > 15000 && tvarp <= 35000)
		{
			cout << "You owe " << (10000 * .1) + (tvarp - 15000)*.15 << " in taxes. " << endl;
		}
		else
		{
			cout << "You owe " << (10000 * .1) + (20000 * .15) + (tvarp - 35000)* .2 << " in taxes." << endl;
		}
	}

	system("pause");

	return 0;
}