/*Do Programming Exercise 7 but use new to allocate a structure instead of declaring
a structure variable.Also have the program request the pizza diameter before it
requests the pizza company name.*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

struct PizzaInfo
{
	string name;
	double diameter;
	double weight;
};

int main()
{
	PizzaInfo * pizza = new PizzaInfo;

	cout << "Enter the diameter of the pizza: ";
	(cin >> pizza->diameter).get();
	cout << "Enter the name of the pizza company: ";
	getline(cin, pizza->name);
	cout << "Enter the weight of the pizza: ";
	cin >> pizza->weight;

	cout << "You entered: " << pizza->name << " which has a " << pizza->diameter << " sized pizza and weighs " << pizza->weight << endl;

	delete pizza;

	return 0;
}