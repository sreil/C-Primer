/*William Wingate runs a pizza-analysis service. For each pizza, he needs to record
the following information:
n The name of the pizza company, which can consist of more than one word
n The diameter of the pizza
n The weight of the pizza
Devise a structure that can hold this information and write a program that uses a
structure variable of that type.The program should ask the user to enter each of the
preceding items of information, and then the program should display that information.
Use cin (or its methods) and cout.*/

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
	PizzaInfo pizza;

	cout << "Enter the name of the pizza company: ";
	getline(cin, pizza.name);
	cout << "Enter the diameter of the pizza: ";
	cin >> pizza.diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> pizza.weight;

	cout << "You entered: " << pizza.name << " which has a " << pizza.diameter << " sized pizza and weighs " << pizza.weight << endl;

	return 0;
}