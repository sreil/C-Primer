/*Put together a program that keeps track of monetary contributions to the Society
for the Preservation of Rightful Influence. It should ask the user to enter the number
of contributors and then solicit the user to enter the name and contribution of
each contributor.The information should be stored in a dynamically allocated array
of structures. Each structure should have two members: a character array (or else a
string object) to store the name and a double member to hold the amount of the
contribution.After reading all the data, the program should display the names and
amounts donated for all donors who contributed $10,000 or more.This list should
be headed by the label Grand Patrons.After that, the program should list the
remaining donors.That list should be headed Patrons. If there are no donors in one
of the categories, the program should print the word “none.”Aside from displaying
two categories, the program need do no sorting.*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct member {
	string name;
	double contribution;
};

int main()
{
	int contributors;

	cout << "How many contributors were there? ";
	cin >> contributors;

	member * newMember = new member[contributors];

	for (int i = 0; i < contributors; i++)
	{
		cout << "Contributor #" << i + 1 << ": ";
		cout << "Please enter the name: ";
		cin.get();
		getline(cin, newMember[i].name);
		cout << "Please enter contribution amount: ";
		cin >> newMember[i].contribution;
	}

	for (int i = 0; i < contributors; i++)
	{
		if (newMember[i].contribution >= 10000)
		{
			cout << "Grand Patrons: " << endl;
			cout << newMember[i].name << endl;
		}
		else
		{
			cout << "Patrons: " << endl;
			cout << newMember[i].name << endl;
		}
	}

	system("pause");

	return 0;
}