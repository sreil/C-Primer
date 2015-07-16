/*Daphne invests $100 at 10% simple interest.That is, every year, the investment earns
10% of the original investment, or $10 each and every year:
interest = 0.10 × original balance
At the same time, Cleo invests $100 at 5% compound interest.That is, interest is 5%
of the current balance, including previous additions of interest:
interest = 0.05 × current balance
Cleo earns 5% of $100 the first year, giving her $105.The next year she earns 5% of
$105, or $5.25, and so on.Write a program that finds how many years it takes for
the value of Cleo’s investment to exceed the value of Daphne’s investment and then
displays the value of both investments at that time.*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double daphneInvestment = 100.0, cleoInvestment = 100.0;
	const double daphneInterest = 0.10, cleoInterest = 0.05;
	double daphneBalance = 0.0, cleoBalance = 0.0;
	int years = 0;

	while (cleoBalance <= daphneBalance)
	{
		cleoBalance += cleoInterest * cleoInvestment;
		cleoInvestment += cleoInterest * cleoInvestment;
		daphneBalance += daphneInterest * daphneInvestment;
				
		years++;
	}

	cout << "It took Cleo " << years << " years to surpass the investment of Daphne. " << endl;
	cout << "The balance of Cleo is: " << cleoBalance;
	cout << "The balance of Daphne is: " << daphneBalance;

	return 0;
}