/*The CandyBar structure contains three members, as described in Programming
Exercise 5.Write a program that creates an array of three CandyBar structures, initializes
them to values of your choice, and then displays the contents of each structure.*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

struct CandyBar
{
	string name;
	double weight;
	int calories;
};

int main()
{
	CandyBar bar[3]
	{
		{"Thin Mint", .8, 300},
		{"Hersheys", 5, 400},
		{"Snickers", 3.75, 375}
	};

	cout << "The candy bar name is " << bar[0].name << " and it weighs " << bar[0].weight << " and contains " << bar[0].calories << " calories." << endl;
	cout << "The candy bar name is " << bar[1].name << " and it weighs " << bar[1].weight << " and contains " << bar[1].calories << " calories." << endl;
	cout << "The candy bar name is " << bar[2].name << " and it weighs " << bar[2].weight << " and contains " << bar[2].calories << " calories." << endl;

	return 0;
}