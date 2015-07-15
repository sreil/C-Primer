/*Do Programming Exercise 6, but instead of declaring an array of three CandyBar
structures, use new to allocate the array dynamically.*/

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
	CandyBar * bar = new CandyBar[3];

	bar[0].name = "Thin Mint";
	bar[0].weight = .8;
	bar[0].calories = 300;

	bar[1].name = "Hersheys";
	bar[1].weight = 5;
	bar[1].calories = 400;

	bar[2].name = "Snickers";
	bar[2].weight = 3.75;
	bar[2].calories = 375;
	
	cout << "The candy bar name is " << bar[0].name << " and it weighs " << bar[0].weight << " and contains " << bar[0].calories << " calories." << endl;
	cout << "The candy bar name is " << bar[1].name << " and it weighs " << bar[1].weight << " and contains " << bar[1].calories << " calories." << endl;
	cout << "The candy bar name is " << bar[2].name << " and it weighs " << bar[2].weight << " and contains " << bar[2].calories << " calories." << endl;

	delete [] bar;

	return 0;
}